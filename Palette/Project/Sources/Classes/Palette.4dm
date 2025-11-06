property area; tabLayer; tabObjects; tabDatabase; height; referenceList; objectList : Integer
property subform; captionTab; reportUUID; propCaption : Text
property layerlist : cs:C1710.layerlist
property pictures : Collection
property objectProperties : cs:C1710.objectProperties
property reportProperties : cs:C1710.reportProperties

Class constructor($vl_area : Integer; $vt_subform : Text; $vl_height : Integer)
	var $vl_left; $vl_top; $vl_right; $vl_bottom : Integer
	var $vo_pic : Object
	
	If ($vl_height=0)
		
		$vl_left:=0
		$vl_top:=0
		$vl_right:=0
		$vl_bottom:=0
		OBJECT GET COORDINATES:C663(*; $vt_subform; $vl_left; $vl_top; $vl_right; $vl_bottom)
		
		$vl_height:=$vl_bottom-$vl_top
		
	End if 
	
	This:C1470.area:=$vl_area
	This:C1470.subform:=$vt_subform
	This:C1470.captionTab:=""
	This:C1470.propCaption:=""
	This:C1470.reportUUID:=hmRep_Get Current Report($vl_area)
	This:C1470.height:=$vl_height
	This:C1470.layerlist:=cs:C1710.layerlist.new($vl_area)
	This:C1470.referenceList:=0
	This:C1470.objectList:=0
	This:C1470.objectProperties:=cs:C1710.objectProperties.new($vl_area)
	This:C1470.reportProperties:=cs:C1710.reportProperties.new($vl_area)
	
	//Tabs
	This:C1470.tabLayer:=1
	This:C1470.tabObjects:=0
	This:C1470.tabDatabase:=0
	
	This:C1470.pictures:=[]
	This:C1470.pictures.push({id: hmRep_ObjType_Rect; name: "toolbar_rect"})
	This:C1470.pictures.push({id: hmRep_ObjType_Text; name: "toolbar_text"})
	This:C1470.pictures.push({id: hmRep_ObjType_Oval; name: "toolbar_circle"})
	This:C1470.pictures.push({id: hmRep_ObjType_Line; name: "toolbar_line"})
	This:C1470.pictures.push({id: hmRep_ObjType_Group; name: "toolbar_group"})
	This:C1470.pictures.push({id: hmRep_ObjType_Picture; name: "toolbar_picture"})
	This:C1470.pictures.push({id: hmRep_ObjType_Arc; name: "toolbar_arc"})
	This:C1470.pictures.push({id: hmRep_ObjType_Path; name: "toolbar_polygon"})
	This:C1470.pictures.push({id: hmRep_ObjType_Freehand; name: "toolbar_freehand"})
	This:C1470.pictures.push({id: hmRep_ObjType_Subreport; name: "toolbar_subreport"})
	
	For each ($vo_pic; This:C1470.pictures)
		$vo_pic.image:=This:C1470.getPict($vo_pic.name)
	End for each 
	
	EXECUTE METHOD IN SUBFORM:C1085(This:C1470.subform; Formula:C1597($1.setPaletteSize()); *; This:C1470)
	EXECUTE METHOD IN SUBFORM:C1085(This:C1470.subform; Formula:C1597($1.update(On Load:K2:1)); *; This:C1470)
	
	OBJECT SET RGB COLORS:C628(*; "background"; 0x00DADFE5; 0x00DADFE5)
	
	CALL SUBFORM CONTAINER:C1086(-On Load:K2:1)
	
Function setTabbar($vl_active : Integer)
	
	Case of 
		: ($vl_active=1)
			This:C1470.tabLayer:=1
			This:C1470.tabObjects:=0
			This:C1470.tabDatabase:=0
			This:C1470.captionTab:=Localized string:C991("EBENEN_")
			
		: ($vl_active=2)
			This:C1470.tabLayer:=0
			This:C1470.tabObjects:=1
			This:C1470.tabDatabase:=0
			This:C1470.captionTab:=Localized string:C991("OBJECTLIST")
			
		: ($vl_active=3)
			This:C1470.tabLayer:=0
			This:C1470.tabObjects:=0
			This:C1470.tabDatabase:=1
			This:C1470.captionTab:=Localized string:C991("FELDER_UND_VARIABLEN")
			
	End case 
	
	OBJECT SET VISIBLE:C603(*; "subform_layerlist"; $vl_active=1)
	OBJECT SET VISIBLE:C603(*; "vl_hl_objectlist"; $vl_active=2)
	OBJECT SET VISIBLE:C603(*; "vl_hl_referencelist"; $vl_active=3)
	
	This:C1470.updateTabbar()
	
Function getCurrentTabbar() : Integer
	return (Num:C11(This:C1470.tabLayer=1)+(Num:C11(This:C1470.tabObjects=1)*2)+(Num:C11(This:C1470.tabDatabase=1)*3))
	
Function updateTabbar()
	var $vl_currenttab : Integer
	
	$vl_currenttab:=This:C1470.getCurrentTabbar()
	
	Case of 
		: ($vl_currenttab=1)
			This:C1470.layerlist.update()
			
		: ($vl_currenttab=2)
			This:C1470.updateObjectlist()
			
		: ($vl_currenttab=3)
			This:C1470.updateReferenceList()
			
	End case 
	
Function paletteUpdate()
	var $vl_formevent : Integer
	$vl_formevent:=Form event code:C388
	EXECUTE METHOD IN SUBFORM:C1085(This:C1470.subform; Formula:C1597(Form:C1466.update($vl_formevent)); *)
	
Function update($vl_formevent : Integer)
	
	If ($vl_formevent=On Load:K2:1)
		This:C1470.setTabbar(1)
	End if 
	
	This:C1470.updateTabbar()
	This:C1470.updateProperties()
	
Function setPaletteSize()
	OBJECT MOVE:C664(*; "subform_report_properties"; 0; 221; 384; This:C1470.height; *)
	OBJECT MOVE:C664(*; "subform_object_properties"; 0; 221; 384; This:C1470.height; *)
	
Function updateProperties()
	
	ARRAY LONGINT:C221($tl_selected_objects; 0)
	hmRep_GET OBJECT LIST(This:C1470.area; hmRep_scope_Selected; 1; $tl_selected_objects)
	
	Case of 
		: (Size of array:C274($tl_selected_objects)>0)
			
			OBJECT SET VISIBLE:C603(*; "subform_report_properties"; False:C215)
			OBJECT SET VISIBLE:C603(*; "subform_object_properties"; True:C214)
			
			This:C1470.propCaption:=Localized string:C991("OBJEKTEIGENSCHAFTEN_")
			This:C1470.objectProperties.updateFromOutside()
			
		Else 
			
			OBJECT SET VISIBLE:C603(*; "subform_report_properties"; True:C214)
			OBJECT SET VISIBLE:C603(*; "subform_object_properties"; False:C215)
			
			This:C1470.propCaption:=Localized string:C991("REPORTEIGENSCHAFTEN")
			This:C1470.reportProperties.updateFromOutside()
			
	End case 
	
Function updateReferenceList()
	var $i; $vl_pos2; $vl_list_with_tables; $vl_list_with_fields; $vl_list_with_variables; $vl_reflist; $vl_listgroup : Integer
	var $vb_icon : Picture
	var $vc_vs; $vc_vs_tables; $vc_vs_fields; $vc_vs_variables : Collection
	var $vo_vs; $vo_vs2; $vo_vs_field : cs:C1710.vStruct
	
	If (Is a list:C621(This:C1470.referenceList))
		CLEAR LIST:C377(This:C1470.referenceList; *)
	End if 
	
	This:C1470.referenceList:=New list:C375
	$vl_reflist:=This:C1470.referenceList
	
	$vc_vs:=[]
	
	ARRAY LONGINT:C221($tl_vstructure; 0)
	
	hmRep_GET VSTRUCTURE LIST(This:C1470.area; $tl_vstructure)
	
	For ($i; 1; Size of array:C274($tl_vstructure))
		$vc_vs.push(cs:C1710.vStruct.new(This:C1470.area; $tl_vstructure{$i}))
	End for 
	
	$vc_vs:=$vc_vs.query("inList == true")
	
	$vl_list_with_tables:=0
	
	//Tabellengruppen
	
	ARRAY LONGINT:C221($tl_hlist_groupID; 0)
	ARRAY LONGINT:C221($tl_hlist_group4Dref; 0)
	
	$vc_vs_tables:=$vc_vs.query("type == :1"; hmRep_vstruc_Table)
	
	For each ($vo_vs; $vc_vs_tables)
		
		If ($vo_vs.groupID>0)
			
			If (Find in array:C230($tl_hlist_groupID; $vo_vs.groupID)=-1)
				
				$vo_vs2:=$vc_vs.query("id == :1"; $vo_vs.groupID).first()
				
				If ($vo_vs2#Null:C1517)
					
					$vl_listgroup:=New list:C375
					
					APPEND TO ARRAY:C911($tl_hlist_groupID; $vo_vs2.id)
					APPEND TO ARRAY:C911($tl_hlist_group4Dref; $vl_listgroup)
					
					If ($vl_list_with_tables=0)
						
						$vl_list_with_tables:=New list:C375
						
					End if 
					
					APPEND TO LIST:C376($vl_list_with_tables; $vo_vs2.caption; $vo_vs2.id; $vl_listgroup; True:C214)
					
				End if 
				
			End if 
			
		End if 
		
	End for each 
	
	//Tabellen
	
	For each ($vo_vs; $vc_vs_tables)
		
		If (Length:C16($vo_vs.caption)>0)
			
			$vl_list_with_fields:=0
			$vc_vs_fields:=$vc_vs.query("(type == :1) && (tableno == :2)"; hmRep_vstruc_Field; $vo_vs.tableno)
			
			For each ($vo_vs_field; $vc_vs_fields)
				
				If (Length:C16($vo_vs_field.caption)>0)
					
					If ($vl_list_with_fields=0)
						
						$vl_list_with_fields:=New list:C375
						
					End if 
					
					APPEND TO LIST:C376($vl_list_with_fields; $vo_vs_field.caption; $vo_vs_field.id; 0; True:C214)
					
					$vb_icon:=This:C1470.getFieldPict($vo_vs_field.tableno; $vo_vs_field.fieldno)
					SET LIST ITEM ICON:C950($vl_list_with_fields; $vo_vs_field.id; $vb_icon)
					
				End if 
				
			End for each 
			
			If ($vo_vs.groupID>0)
				
				$vl_pos2:=Find in array:C230($tl_hlist_groupID; $vo_vs.groupID)
				
				If ($vl_pos2>0)
					$vl_listgroup:=$tl_hlist_group4Dref{$vl_pos2}
					APPEND TO LIST:C376($vl_listgroup; $vo_vs.caption; $vo_vs.id; $vl_list_with_fields; True:C214)
				End if 
				
			Else 
				
				If ($vl_list_with_tables=0)
					
					$vl_list_with_tables:=New list:C375
					
				End if 
				
				APPEND TO LIST:C376($vl_list_with_tables; $vo_vs.caption; $vo_vs.id; $vl_list_with_fields; True:C214)
				
			End if 
			
		End if 
		
	End for each 
	
	APPEND TO LIST:C376($vl_reflist; Localized string:C991("interne_datenbank"); -1; $vl_list_with_tables; True:C214)
	
	$vb_icon:=This:C1470.getPict("database")
	SET LIST ITEM ICON:C950($vl_reflist; -1; $vb_icon)
	
	//Variablengruppen
	
	$vl_list_with_variables:=0
	
	ARRAY LONGINT:C221($tl_hlist_groupID; 0)
	ARRAY LONGINT:C221($tl_hlist_group4Dref; 0)
	
	$vc_vs_variables:=$vc_vs.query("(type == :1) && (groupID != 0)"; hmRep_vstruc_Variable)
	
	For each ($vo_vs; $vc_vs_variables)
		
		If (Find in array:C230($tl_hlist_groupID; $vo_vs.groupID)=-1)
			
			$vo_vs2:=$vc_vs.query("id == :1"; $vo_vs.groupID).first()
			
			If ($vo_vs2#Null:C1517)
				
				$vl_listgroup:=New list:C375
				
				APPEND TO ARRAY:C911($tl_hlist_groupID; $vo_vs2.id)
				APPEND TO ARRAY:C911($tl_hlist_group4Dref; $vl_listgroup)
				
				If ($vl_list_with_variables=0)
					
					$vl_list_with_variables:=New list:C375
					
				End if 
				
				APPEND TO LIST:C376($vl_list_with_variables; $vo_vs2.caption; $vo_vs2.id; $vl_listgroup; True:C214)
				
			End if 
			
		End if 
		
	End for each 
	
	//Variablen
	
	$vc_vs_variables:=$vc_vs.query("type == :1"; hmRep_vstruc_Variable)
	
	For each ($vo_vs; $vc_vs_variables)
		
		If (Length:C16($vo_vs.caption)>0)
			
			If ($vo_vs.groupID>0)
				
				$vl_pos2:=Find in array:C230($tl_hlist_groupID; $vo_vs.groupID)
				
				If ($vl_pos2>0)
					$vl_listgroup:=$tl_hlist_group4Dref{$vl_pos2}
					APPEND TO LIST:C376($vl_listgroup; $vo_vs.caption; $vo_vs.id; 0; True:C214)
				End if 
				
			Else 
				
				If ($vl_list_with_variables=0)
					
					$vl_list_with_variables:=New list:C375
					
				End if 
				
				APPEND TO LIST:C376($vl_list_with_variables; $vo_vs.caption; $vo_vs.id; 0; True:C214)
				
			End if 
			
		End if 
		
	End for each 
	
	APPEND TO LIST:C376($vl_reflist; Localized string:C991("Variablen"); -1; $vl_list_with_variables; True:C214)
	
Function updateObjectlist()
	var $i; $vl_current_page : Integer
	var $vb_icon : Picture
	var $vt_text : Text
	var $vc_objects; $vc_objectsLayer : Collection
	
	If (Is a list:C621(This:C1470.objectList))
		CLEAR LIST:C377(This:C1470.objectList; *)
	End if 
	
	This:C1470.objectList:=New list:C375
	
	$vl_current_page:=hmRep_Get Current Page(This:C1470.area)
	
	ARRAY LONGINT:C221($tl_objects; 0)
	hmRep_GET OBJECT LIST(This:C1470.area; hmRep_scope_Page; $vl_current_page; $tl_objects)
	
	ARRAY LONGINT:C221($tl_objects_selected; 0)
	hmRep_GET OBJECT LIST(This:C1470.area; hmRep_scope_Selected; 1; $tl_objects_selected)
	
	$vc_objects:=[]
	
	For ($i; 1; Size of array:C274($tl_objects))
		$vc_objects.push(cs:C1710.object.new(This:C1470.area; $tl_objects{$i}))
	End for 
	
	ARRAY LONGINT:C221($tl_layerIDs; 0)
	ARRAY TEXT:C222($tt_layernames; 0)
	
	hmRep_GET LAYER LIST(This:C1470.area; $tl_layerIDs; $tt_layernames)
	
	$vb_icon:=This:C1470.getPict("toolbar_layer")
	
	For ($i; 1; Size of array:C274($tl_layerIDs))
		
		$vc_objectsLayer:=$vc_objects.query("layer == :1"; $tl_layerIDs{$i})
		
		$vt_text:=$tt_layernames{$i}
		
		If ($vc_objectsLayer.length>0)
			$vt_text:=$vt_text+" ("+String:C10($vc_objectsLayer.length)+")"
		End if 
		
		APPEND TO LIST:C376(This:C1470.objectList; $vt_text; -$tl_layerIDs{$i}; This:C1470.updateObjectlistObjects($tl_layerIDs{$i}; 0; $vc_objectsLayer); True:C214)
		SET LIST ITEM ICON:C950(This:C1470.objectList; 0; $vb_icon)
		
	End for 
	
	If (Size of array:C274($tl_objects_selected)>0)
		SELECT LIST ITEMS BY REFERENCE:C630(This:C1470.objectList; $tl_objects_selected{1}; $tl_objects_selected)
	End if 
	
Function updateObjectlistObjects($vl_layerID : Integer; $vl_groupID : Integer; $vc_objectsLayer : Collection)->$vl_hlist : Integer
	var $vl_typ; $vl_anzahl : Integer
	var $vt_text : Text
	var $vc_objectsLayerGroup : Collection
	var $vo_object : cs:C1710.object
	var $vo_pic : Object
	var $vb_pic : Picture
	
	$vl_hlist:=0
	
	$vc_objectsLayerGroup:=$vc_objectsLayer.query("(layer == :1) && (group == :2)"; $vl_layerID; $vl_groupID)
	
	For each ($vo_object; $vc_objectsLayerGroup)
		
		If ($vl_hlist=0)
			$vl_hlist:=New list:C375
		End if 
		
		$vl_anzahl:=$vc_objectsLayer.query("group == :1;"; $vo_object.id).length
		
		$vt_text:=$vo_object.getDescription()
		$vl_typ:=$vo_object.type
		
		//$vt_text:="Objekt "+String($vp_objects->{$vl_pos})
		
		If ($vl_anzahl>0)
			$vt_text:=$vt_text+" ("+String:C10($vl_anzahl)+")"
		End if 
		
		APPEND TO LIST:C376($vl_hlist; $vt_text; $vo_object.id; This:C1470.updateObjectlistObjects($vl_layerID; $vo_object.id; $vc_objectsLayer); True:C214)
		SET LIST ITEM PARAMETER:C986($vl_hlist; $vo_object.id; Additional text:K28:7; String:C10($vo_object.id))
		
		If ($vl_typ>=1) & ($vl_typ<=10)
			
			$vo_pic:=This:C1470.pictures.query("id == :1"; $vl_typ).first()
			
			If ($vo_pic#Null:C1517)
				$vb_pic:=$vo_pic.image
				If (Picture size:C356($vb_pic)>0)
					SET LIST ITEM ICON:C950($vl_hlist; 0; $vb_pic)
				End if 
			End if 
			
		End if 
		
	End for each 
	
Function getFieldPict($vl_tableno : Integer; $vl_fieldno : Integer)->$vb_bild : Picture
	
	var $vl_type : Integer
	
	If (Is field number valid:C1000($vl_tableno; $vl_fieldno))
		
		$vl_type:=0
		GET FIELD PROPERTIES:C258($vl_tableno; $vl_fieldno; $vl_type)
		
		$vb_bild:=This:C1470.getTypePict($vl_type)
		
	End if 
	
Function getTypePict($vl_type : Integer)->$vb_bild : Picture
	
	var $vo_file : 4D:C1709.File
	
	$vo_file:=This:C1470.getTypePictFile($vl_type)
	
	If ($vo_file#Null:C1517) && ($vo_file.exists)
		READ PICTURE FILE:C678($vo_file.platformPath; $vb_bild)
	End if 
	
Function getTypePictFile($vl_type : Integer)->$vo_file : 4D:C1709.File
	var $vt_file : Text
	
	Case of 
		: ($vl_type=Is alpha field:K8:1)
			$vt_file:="Field_1.png"
			
		: ($vl_type=Is real:K8:4)
			$vt_file:="Field_9.png"
			
		: ($vl_type=Is text:K8:3) | ($vl_type=33)
			$vt_file:="Field_2.png"
			
		: ($vl_type=Is date:K8:7)
			$vt_file:="Field_3.png"
			
		: ($vl_type=Is boolean:K8:9)
			$vt_file:="Field_5.png"
			
		: ($vl_type=Is time:K8:8)
			$vt_file:="Field_4.png"
			
		: ($vl_type=Is longint:K8:6)
			$vt_file:="Field_7.png"
			
		: ($vl_type=Is integer:K8:5)
			$vt_file:="Field_6.png"
			
		: ($vl_type=Is integer 64 bits:K8:25)
			$vt_file:="Field_8.png"
			
			//: ($vl_type=_o_Is float)
			//$vt_file:="Field_10.png"
			
		: ($vl_type=Is picture:K8:10)
			$vt_file:="Field_12.png"
			
		: ($vl_type=Is BLOB:K8:12)
			$vt_file:="Field_11.png"
			
		Else 
			$vt_file:=""
			
	End case 
	
	If (Length:C16($vt_file)>0)
		$vo_file:=Folder:C1567(fk resources folder:K87:11).folder("Pictures").file($vt_file)
	End if 
	
Function getPict($vt_bildname : Text)->$vb_picture : Picture
	var $vo_file : 4D:C1709.File
	
	$vo_file:=Folder:C1567(fk resources folder:K87:11).folder("Pictures").file($vt_bildname+".png")
	
	If ($vo_file.exists)
		READ PICTURE FILE:C678($vo_file.platformPath; $vb_picture)
	End if 
	