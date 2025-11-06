property area; framecolor_popup; fillcolor_popup; textcolor_popup : Integer
property doLoad; klapp_allgemein; klapp_groesse; klapp_optionen; klapp_rahmen; klapp_text; klapp_unterbericht : Boolean
property formObjects : Collection

Class constructor($vl_area : Integer)
	This:C1470.area:=$vl_area
	This:C1470.doLoad:=True:C214
	This:C1470.klapp_allgemein:=True:C214
	This:C1470.klapp_groesse:=True:C214
	This:C1470.klapp_optionen:=True:C214
	This:C1470.klapp_rahmen:=True:C214
	This:C1470.klapp_text:=True:C214
	This:C1470.klapp_unterbericht:=True:C214
	This:C1470.formObjects:=[]
	This:C1470.framecolor_popup:=0
	This:C1470.fillcolor_popup:=0
	This:C1470.textcolor_popup:=0
	
Function onLoad()
	var $i; $vl_left; $vl_top; $vl_right; $vl_bottom : Integer
	var $vp_object : Pointer
	var $vc_barcodes : Collection
	
	ARRAY TEXT:C222($tt_Objekte; 0)
	ARRAY POINTER:C280($tp_Variablen; 0)
	ARRAY INTEGER:C220($tg_Seiten; 0)
	
	FORM GET OBJECTS:C898($tt_Objekte; $tp_Variablen; $tg_Seiten)
	
	For ($i; 1; Size of array:C274($tt_Objekte))
		
		$vl_left:=0
		$vl_top:=0
		$vl_right:=0
		$vl_bottom:=0
		
		OBJECT GET COORDINATES:C663(*; $tt_Objekte{$i}; $vl_left; $vl_top; $vl_right; $vl_bottom)
		
		This:C1470.formObjects.push({name: $tt_Objekte{$i}; top: $vl_top})
		
	End for 
	
	//Einige Arrays initalisieren
	//Fontlist
	
	ARRAY TEXT:C222($tt_fontlist; 0)
	hmRep_GET FONTS(This:C1470.area; $tt_fontlist)
	SORT ARRAY:C229($tt_fontlist; >)
	
	$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_fontlist")
	If (Not:C34(Is nil pointer:C315($vp_object)))
		ARR_Copy(->$tt_fontlist; $vp_object)
	End if 
	
	$vp_object:=OBJECT_InitArray("tt_object_verticalsizing"; Text array:K8:16)
	ARR_Resize($vp_object; 5)
	
	$vp_object->{1}:=Localized string:C991("Keine")
	$vp_object->{2}:=Localized string:C991("move_under_object")
	$vp_object->{3}:=Localized string:C991("grow")
	$vp_object->{4}:=Localized string:C991("move")
	$vp_object->{5}:=Localized string:C991("move")+"/"+Localized string:C991("grow")
	$vp_object->:=1
	
	//Barcode Liste
	
	ARRAY LONGINT:C221($tl_barcode_ID; 0)
	ARRAY TEXT:C222($tt_barcode_Name; 0)
	
	$vc_barcodes:=hmRep_Get Barcode List
	$vc_barcodes:=$vc_barcodes.orderBy("name asc")
	
	COLLECTION TO ARRAY:C1562($vc_barcodes; $tl_barcode_ID; "symbology"; $tt_barcode_Name; "name")
	
	SORT ARRAY:C229($tt_barcode_Name; $tl_barcode_ID; >)
	
	$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_barcode")
	If (Not:C34(Is nil pointer:C315($vp_object)))
		ARR_Copy(->$tt_barcode_Name; $vp_object)
		
		INSERT IN ARRAY:C227($vp_object->; 1; 2)
		$vp_object->{1}:=Localized string:C991("Keine")
		$vp_object->{2}:="-"
		
	End if 
	
	$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_barcode")
	If (Not:C34(Is nil pointer:C315($vp_object)))
		ARR_Copy(->$tl_barcode_ID; $vp_object)
		INSERT IN ARRAY:C227($vp_object->; 1; 2)
	End if 
	
Function setPositions()
	var $vl_move_offset : Integer
	var $vc_areas; $vc_objects : Collection
	var $vo_area : Object
	
	If (This:C1470.doLoad)
		This:C1470.onLoad()
		This:C1470.doLoad:=False:C215
	End if 
	
	$vc_areas:=[]
	$vc_areas.push({area: This:C1470.klapp_allgemein; pos1: 20; pos2: 90})
	$vc_areas.push({area: This:C1470.klapp_groesse; pos1: 110; pos2: 160})
	$vc_areas.push({area: This:C1470.klapp_optionen; pos1: 180; pos2: 350})
	$vc_areas.push({area: This:C1470.klapp_rahmen; pos1: 370; pos2: 540})
	$vc_areas.push({area: This:C1470.klapp_text; pos1: 560; pos2: 790})
	$vc_areas.push({area: This:C1470.klapp_unterbericht; pos1: 810; pos2: 860})
	
	$vl_move_offset:=0
	
	For each ($vo_area; $vc_areas)
		
		$vc_objects:=This:C1470.getObjectsByPosition($vo_area.pos1; $vo_area.pos2-1)
		
		This:C1470.moveObjects($vo_area.pos1-20; $vo_area.pos2; $vl_move_offset)
		
		If ($vo_area.area)
			This:C1470.setObjectsVisible($vc_objects; True:C214)
		Else 
			This:C1470.setObjectsVisible($vc_objects; False:C215)
			$vl_move_offset:=$vl_move_offset+($vo_area.pos2-$vo_area.pos1)
		End if 
		
	End for each 
	
	This:C1470.updateObject("")
	
Function getObjectsByPosition($vl_pos1 : Integer; $vl_pos2 : Integer) : Collection
	return (This:C1470.formObjects.query("(top >= :1) && (top <= :2)"; $vl_pos1; $vl_pos2))
	
Function setObjectsVisible($vc_objects : Collection; $vf_visible : Boolean)
	var $vo_obj : Object
	
	For each ($vo_obj; $vc_objects)
		OBJECT SET VISIBLE:C603(*; $vo_obj.name; $vf_visible)
	End for each 
	
Function moveObjects($vl_top_for_move : Integer; $vl_top_for_move2 : Integer; $vl_move_offset : Integer)
	var $vl_left; $vl_top; $vl_right; $vl_bottom; $vl_hoehe : Integer
	var $vc_objects : Collection
	var $vo_object : Object
	
	$vc_objects:=This:C1470.getObjectsByPosition($vl_top_for_move; $vl_top_for_move2)
	
	For each ($vo_object; $vc_objects)
		
		$vl_left:=0
		$vl_top:=0
		$vl_right:=0
		$vl_bottom:=0
		
		OBJECT GET COORDINATES:C663(*; $vo_object.name; $vl_left; $vl_top; $vl_right; $vl_bottom)
		
		$vl_hoehe:=$vl_bottom-$vl_top
		
		OBJECT MOVE:C664(*; $vo_object.name; $vl_left; $vo_object.top-$vl_move_offset; $vl_right; $vo_object.top+$vl_hoehe-$vl_move_offset; *)
		
	End for each 
	
Function updateObject($vt_objectname : Text)
	var $i; $vl_type_multi; $vl_pos; $vl_size; $vl_anz_pages; $vl_area : Integer
	var $vt_current_report; $vt_unit : Text
	var $vp_object; $vp_object2; $vp_object3; $vp_object4 : Pointer
	var $vf_object_text; $vf_object_subreport; $vf_publish : Boolean
	var $vc_objects : Collection
	var $vo_obj : cs:C1710.object
	
	ARRAY LONGINT:C221($tl_selected_objects; 0)
	
	hmRep_GET OBJECT LIST(This:C1470.area; hmRep_scope_Selected; 1; $tl_selected_objects)
	
	If (Size of array:C274($tl_selected_objects)>0)
		
		$vc_objects:=[]
		
		For ($i; 1; Size of array:C274($tl_selected_objects))
			$vc_objects.push(cs:C1710.object.new(This:C1470.area; $tl_selected_objects{$i}))
		End for 
		
		//=================================================================
		
		$vl_type_multi:=-1  //Hier steht der Typ aller Objekte drin, wenn alle Objekte den selben Typ haben, wenn nicht, dann -1
		$vf_object_text:=False:C215
		$vf_object_subreport:=False:C215
		
		For each ($vo_obj; $vc_objects)
			
			If ($vo_obj.type=$vl_type_multi) | ($vl_type_multi=-1)
				$vl_type_multi:=$vo_obj.type
			Else 
				$vl_type_multi:=-1
				break
			End if 
			
		End for each 
		
		For each ($vo_obj; $vc_objects)
			
			Case of 
				: ($vo_obj.type=hmRep_ObjType_Text)
					$vf_object_text:=True:C214
					
				: ($vo_obj.type=hmRep_ObjType_Subreport)
					$vf_object_subreport:=True:C214
					
			End case 
			
		End for each 
		
		//=================================================================
		//Allgemein
		
		If (This:C1470.klapp_allgemein)
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vt_obj_name")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Name; "vt_obj_name")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_id")
				This:C1470.updateSetMulti($vc_objects; -7; "vl_obj_id")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vt_obj_typ")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Type; "vt_obj_typ")
			End if 
			
		End if 
		
		//=================================================================
		//Größe
		
		If (This:C1470.klapp_groesse)
			
			$vt_unit:=intern_GetUnitName(This:C1470.area)
			
			OBJECT SET VALUE:C1742("vt_rep_rulerunit1"; $vt_unit)
			OBJECT SET VALUE:C1742("vt_rep_rulerunit2"; $vt_unit)
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_left")
				This:C1470.updateSetMulti($vc_objects; -1; "vz_left")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_top")
				This:C1470.updateSetMulti($vc_objects; -2; "vz_top")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_right")
				This:C1470.updateSetMulti($vc_objects; -3; "vz_right")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_bottom")
				This:C1470.updateSetMulti($vc_objects; -4; "vz_bottom")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_width")
				This:C1470.updateSetMulti($vc_objects; -5; "vz_width")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_height")
				This:C1470.updateSetMulti($vc_objects; -6; "vz_height")
			End if 
			
		End if 
		
		//=================================================================
		//Optionen
		
		If (This:C1470.klapp_optionen)
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_antialiasing")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Antialiasing; "vl_obj_antialiasing")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_print")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Print; "vl_obj_print")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_moveable")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Moveable; "vl_obj_moveable")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_resizeable")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Resizeable; "vl_obj_resizeable")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_fixedprinting")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_FixedPrinting; "vl_obj_fixedprinting")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_rotation")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Rotation; "vz_obj_rotation")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_variableheight")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_VariableHeight; "vl_obj_variableheight")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="tt_object_verticalsizing")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_VerticalSizing; "tt_object_verticalsizing")
			End if 
			
		End if 
		
		//=================================================================
		//Rahmen und Hintergrund
		
		If (This:C1470.klapp_rahmen)
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_rahmenanzeigen")
				OBJECT SET ENABLED:C1123(*; "vl_obj_rahmenanzeigen"; $vl_type_multi#hmRep_ObjType_Line)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_ShowFrame; "vl_obj_rahmenanzeigen")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="framecolor")
				OBJECT SET ENABLED:C1123(*; "framecolor_button"; $vl_type_multi#hmRep_ObjType_Line)
				OBJECT SET VISIBLE:C603(*; "framecolor_popup"; $vl_type_multi#hmRep_ObjType_Line)
				OBJECT SET VISIBLE:C603(*; "framecolor_multi"; $vl_type_multi#hmRep_ObjType_Line)
				This:C1470.updateSetMulti($vc_objects; hmRep_clr_ObjectFramecolor+1000; "framecolor")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_framealpha")
				This:C1470.updateSetMulti($vc_objects; hmRep_clr_ObjectFramecolor+2000; "vz_obj_framealpha")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_framesize")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Penwidth; "vz_obj_framesize")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_rounding")
				OBJECT SET ENABLED:C1123(*; "vz_obj_rounding_stepper"; $vl_type_multi#hmRep_ObjType_Line)
				OBJECT SET VISIBLE:C603(*; "vz_obj_rounding_multi"; $vl_type_multi#hmRep_ObjType_Line)
				OBJECT SET ENTERABLE:C238(*; "vz_obj_rounding"; $vl_type_multi#hmRep_ObjType_Line)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Rounding; "vz_obj_rounding")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_hintergrundanz")
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_ShowFill; "vl_obj_hintergrundanz")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="fillcolor")
				This:C1470.updateSetMulti($vc_objects; hmRep_clr_ObjectFillcolor+1000; "fillcolor")
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_fillalpha")
				This:C1470.updateSetMulti($vc_objects; hmRep_clr_ObjectFillcolor+2000; "vz_obj_fillalpha")
			End if 
			
		End if 
		
		//=================================================================
		//Text
		
		If (This:C1470.klapp_text)
			
			If ($vt_objectname="") | ($vt_objectname="tt_fontlist")
				
				OBJECT SET ENABLED:C1123(*; "tt_fontlist"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Fontname; "tt_fontlist")
				
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="tz_fontsize")
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tz_fontsize")
				If (Not:C34(Is nil pointer:C315($vp_object)))
					
					ARR_Resize($vp_object; 14)
					
					$vp_object->{0}:=0
					$vp_object->{1}:=8
					$vp_object->{2}:=9
					$vp_object->{3}:=10
					$vp_object->{4}:=12
					$vp_object->{5}:=13
					$vp_object->{6}:=14
					$vp_object->{7}:=16
					$vp_object->{8}:=18
					$vp_object->{9}:=20
					$vp_object->{10}:=22
					$vp_object->{11}:=26
					$vp_object->{12}:=32
					$vp_object->{13}:=48
					$vp_object->{14}:=72
					
				End if 
				
				OBJECT SET ENABLED:C1123(*; "tz_fontsize"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Fontsize; "tz_fontsize")
				
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="tt_alignment")
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_alignment")
				
				If (Not:C34(Is nil pointer:C315($vp_object)))
					
					ARR_Resize($vp_object; 4)
					
					$vp_object->{1}:=Localized string:C991("standard")
					$vp_object->{2}:=Localized string:C991("links")
					$vp_object->{3}:=Localized string:C991("zentriert")
					$vp_object->{4}:=Localized string:C991("rechts")
					
				End if 
				
				OBJECT SET ENABLED:C1123(*; "tt_alignment"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Alignment; "tt_alignment")
				
			End if 
			
			If ($vt_objectname="") | ($vt_objectname="vl_obj_fett")
				OBJECT SET ENABLED:C1123(*; "vl_obj_fett"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Fontstyle; "vl_obj_fett")
			End if 
			
			If ($vt_objectname="") | ($vt_objectname="vl_obj_kursiv")
				OBJECT SET ENABLED:C1123(*; "vl_obj_kursiv"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Fontstyle; "vl_obj_kursiv")
			End if 
			
			If ($vt_objectname="") | ($vt_objectname="vl_obj_unterstrichen")
				OBJECT SET ENABLED:C1123(*; "vl_obj_unterstrichen"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Fontstyle; "vl_obj_unterstrichen")
			End if 
			
			If ($vt_objectname="") | ($vt_objectname="vl_obj_durchgestrichen")
				OBJECT SET ENABLED:C1123(*; "vl_obj_durchgestrichen"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Fontstyle; "vl_obj_durchgestrichen")
			End if 
			
			If ($vt_objectname="") | ($vt_objectname="textcolor")
				OBJECT SET ENABLED:C1123(*; "textcolor_button"; $vf_object_text)
				OBJECT SET VISIBLE:C603(*; "textcolor_popup"; $vf_object_text)
				OBJECT SET VISIBLE:C603(*; "textcolor_multi"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_clr_ObjectTextcolor+1000; "textcolor")
			End if 
			
			If ($vt_objectname="") | ($vt_objectname="vz_obj_textalpha")
				OBJECT SET ENABLED:C1123(*; "vz_obj_textalpha"; $vf_object_text)
				OBJECT SET ENABLED:C1123(*; "vz_obj_textalpha_stepper"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_clr_ObjectTextcolor+2000; "vz_obj_textalpha")
			End if 
			
			If ($vt_objectname="") | ($vt_objectname="vl_obj_textumbruch")
				OBJECT SET ENABLED:C1123(*; "vl_obj_textumbruch"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Wordwrap; "vl_obj_textumbruch")
			End if 
			
			If ($vt_objectname="") | ($vt_objectname="tt_barcode")
				
				OBJECT SET ENABLED:C1123(*; "tt_barcode"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Barcode; "tt_barcode")
				
			End if 
			
			If ($vt_objectname="") | ($vt_objectname="vz_obj_linespacing")
				OBJECT SET ENABLED:C1123(*; "vz_obj_linespacing"; $vf_object_text)
				OBJECT SET ENABLED:C1123(*; "vz_obj_linespacing_stepper"; $vf_object_text)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_Linespacing; "vz_obj_linespacing")
			End if 
			
		End if 
		
		//=================================================================
		//Unterbericht
		
		If (This:C1470.klapp_unterbericht)
			
			If ($vt_objectname="") | ($vt_objectname="tt_subreport_name")
				
				$vt_current_report:=hmRep_Get Current Report($vl_area)
				
				ARRAY TEXT:C222($tt_reports_name; 0)
				ARRAY TEXT:C222($tt_reports_uuid; 0)
				
				hmRep_GET REPORT LIST($vl_area; $tt_reports_uuid)
				
				$vl_pos:=Find in array:C230($tt_reports_uuid; $vt_current_report)
				If ($vl_pos>0)
					
					$vl_anz_pages:=hmRep_Count Pages($vl_area)
					
					$vf_publish:=False:C215
					
					For ($i; 1; $vl_anz_pages)
						
						If (intern_GetPagePropertyLong($vl_area; $i; hmRep_pprop_PublishAsSubreport)=1)
							$vf_publish:=True:C214
						End if 
						
					End for 
					
					If (Not:C34($vf_publish))
						DELETE FROM ARRAY:C228($tt_reports_uuid; $vl_pos)
					End if 
					
				End if 
				
				$vl_size:=Size of array:C274($tt_reports_uuid)
				
				If ($vl_size>0)
					
					ARR_Resize(->$tt_reports_name; $vl_size)
					
					For ($i; 1; $vl_size)
						
						hmRep_SET CURRENT REPORT($vl_area; $tt_reports_uuid{$i})
						
						$tt_reports_name{$i}:=parse_GetReportPropertyText($vl_area; hmRep_rprop_name)
						
					End for 
					
					hmRep_SET CURRENT REPORT($vl_area; $vt_current_report)
					
					INSERT IN ARRAY:C227($tt_reports_uuid; 1; 2)
					INSERT IN ARRAY:C227($tt_reports_name; 1; 2)
					
					$tt_reports_name{1}:=Localized string:C991("Keine")
					$tt_reports_name{2}:="-"
					
				Else 
					
					INSERT IN ARRAY:C227($tt_reports_name; 1)
					INSERT IN ARRAY:C227($tt_reports_uuid; 1)
					
					$tt_reports_name{1}:=Localized string:C991("Keine")
					
				End if 
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_name")
				$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_uuid")
				
				ARR_Copy(->$tt_reports_name; $vp_object)
				ARR_Copy(->$tt_reports_uuid; $vp_object2)
				
				$vp_object->:=1
				
				OBJECT SET ENABLED:C1123(*; "tt_subreport_name"; $vf_object_subreport)
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_SubreportUUID; "tt_subreport_name")
				
			End if 
			
			If (Length:C16($vt_objectname)=0) | ($vt_objectname="tt_subreport_page")
				
				$vt_current_report:=hmRep_Get Current Report($vl_area)
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_name")
				$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_uuid")
				
				$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_subreport_pages")
				$vp_object4:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_page")
				
				$vl_pos:=$vp_object->
				
				ARR_Resize($vp_object3; 0)
				ARR_Resize($vp_object4; 0)
				
				If ($vp_object2->{$vl_pos}=$vt_current_report)  //Eigener Report
					
					$vl_anz_pages:=hmRep_Count Pages($vl_area)
					
					For ($i; 1; $vl_anz_pages)
						
						If (intern_GetPagePropertyLong($vl_area; $i; hmRep_pprop_PublishAsSubreport)=1)
							
							APPEND TO ARRAY:C911($vp_object3->; hmRep_Get Page ID From Number($vl_area; $i))
							APPEND TO ARRAY:C911($vp_object4->; String:C10($i))
							
						End if 
						
					End for 
					
					OBJECT SET ENABLED:C1123(*; "tt_subreport_page"; $vf_object_subreport)
					
				Else 
					
					If (Length:C16($vp_object2->{$vl_pos})=0)
						
						APPEND TO ARRAY:C911($vp_object3->; 0)
						APPEND TO ARRAY:C911($vp_object4->; Localized string:C991("aktuelle_seite"))
						OBJECT SET ENABLED:C1123(*; "tt_subreport_page"; False:C215)
						
					Else 
						
						APPEND TO ARRAY:C911($vp_object3->; 0)
						APPEND TO ARRAY:C911($vp_object4->; Localized string:C991("aktuelle_seite"))
						APPEND TO ARRAY:C911($vp_object3->; 0)
						APPEND TO ARRAY:C911($vp_object4->; "-")
						
						hmRep_SET CURRENT REPORT($vl_area; $vp_object2->{$vl_pos})
						$vl_anz_pages:=hmRep_Count Pages($vl_area)
						
						For ($i; 1; $vl_anz_pages)
							
							APPEND TO ARRAY:C911($vp_object3->; hmRep_Get Page ID From Number($vl_area; $i))
							APPEND TO ARRAY:C911($vp_object4->; String:C10($i))
							
						End for 
						
						hmRep_SET CURRENT REPORT($vl_area; $vt_current_report)
						OBJECT SET ENABLED:C1123(*; "tt_subreport_page"; $vf_object_subreport)
						
					End if 
					
				End if 
				
				This:C1470.updateSetMulti($vc_objects; hmRep_oprop_SubreportPageID; "tt_subreport_page")
				
			End if 
			
			//If ($vt_objectname="") | ($vt_objectname="tt_subreport_darstellung")
			//
			//$vp_object:=OBJECT Get pointer(Object named;"tt_subreport_darstellung")
			//
			//ARR_Resize ($vp_object;2)
			//$vp_object->{1}:=Get localized string("On_Background")
			//$vp_object->{2}:=Get localized string("Scaled_to_Fit")
			//
			//OBJECT SET ENABLED(*;"tt_subreport_darstellung";$vf_object_subreport)
			//pal_update_object_setmulti (->$tl_selected_objects;->$tl_selected_objects_types;hmRep_oprop_Pictureformat;$vl_area;"tt_subreport_darstellung")
			//
			//End if 
			
		End if 
		
	End if 
	
Function updateSetMulti($vc_object : Collection; $vl_selector : Integer; $vt_objectname : Text)
	var $vp_object; $vp_object2; $vp_object3; $vp_object4 : Pointer
	var $vt_last_value; $vt_value; $vt_uuid : Text
	var $vl_red; $vl_green; $vl_blue; $vl_fontstyle; $vl_pos; $vl_pageid : Integer
	var $vf_multi : Boolean
	var $vz_last_value; $vz_value; $vz_left; $vz_top; $vz_right; $vz_bottom; $vz_alpha : Real
	var $vo_obj : cs:C1710.object
	
	$vf_multi:=False:C215  //Alle Eigenschaften gleich?
	
	If ($vl_selector=hmRep_oprop_Name) | ($vl_selector=hmRep_oprop_Fontname) | ($vl_selector=hmRep_oprop_SubreportUUID)
		
		For each ($vo_obj; $vc_object)
			
			$vt_last_value:=$vo_obj.getPropText($vl_selector)
			
			If ($vc_object.indexOf($vo_obj)=0)
				
				$vt_value:=$vt_last_value
				
				Case of 
					: ($vl_selector=hmRep_oprop_Fontname)
						
						$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_fontlist")
						If (Not:C34(Is nil pointer:C315($vp_object)))
							$vp_object->{0}:=$vt_value
						End if 
						
					: ($vl_selector=hmRep_oprop_SubreportUUID)
						
						If ($vo_obj.type=hmRep_ObjType_Subreport)
							
							$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_name")
							$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_uuid")
							$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_subreport_pages")
							
							If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object2)))
								
								$vl_pos:=Find in array:C230($vp_object2->; $vt_value)
								
								If ($vl_pos>0)
									
									$vp_object->:=$vl_pos
									
								Else 
									
									If (Size of array:C274($vp_object->)=1)
										
										APPEND TO ARRAY:C911($vp_object->; "-")
										APPEND TO ARRAY:C911($vp_object2->; "")
										APPEND TO ARRAY:C911($vp_object3->; 0)
										
									End if 
									
									APPEND TO ARRAY:C911($vp_object->; "? "+$vo_obj.getPropText(hmRep_oprop_SubreportName)+" ?")
									APPEND TO ARRAY:C911($vp_object2->; $vt_value)
									APPEND TO ARRAY:C911($vp_object3->; $vo_obj.getPropReal(hmRep_oprop_SubreportPageID))
									
									$vp_object->:=Size of array:C274($vp_object->)
									
								End if 
								
							End if 
							
						End if 
						
					Else 
						OBJECT SET VALUE:C1742($vt_objectname; $vt_value)
						
				End case 
				
			Else 
				
				If (Not:C34(String_Compare($vt_value; $vt_last_value)))
					$vf_multi:=True:C214
					break
				End if 
				
			End if 
			
		End for each 
		
	Else 
		
		For each ($vo_obj; $vc_object)
			
			If ($vl_selector=-1) | ($vl_selector=-2) | ($vl_selector=-3) | ($vl_selector=-4) | ($vl_selector=-5) | ($vl_selector=-6)
				
				$vz_left:=0
				$vz_top:=0
				$vz_right:=0
				$vz_bottom:=0
				
				hmRep_GET OBJECT RECT(This:C1470.area; $vo_obj.id; $vz_left; $vz_top; $vz_right; $vz_bottom)
				
				$vz_left:=Round:C94(hmRep_Pixel To Rulerunit(This:C1470.area; $vz_left); 2)
				$vz_top:=Round:C94(hmRep_Pixel To Rulerunit(This:C1470.area; $vz_top); 2)
				$vz_right:=Round:C94(hmRep_Pixel To Rulerunit(This:C1470.area; $vz_right); 2)
				$vz_bottom:=Round:C94(hmRep_Pixel To Rulerunit(This:C1470.area; $vz_bottom); 2)
				
			End if 
			
			Case of 
				: ($vl_selector=-1)
					$vz_last_value:=$vz_left
					
				: ($vl_selector=-2)
					$vz_last_value:=$vz_top
					
				: ($vl_selector=-3)
					$vz_last_value:=$vz_right
					
				: ($vl_selector=-4)
					$vz_last_value:=$vz_bottom
					
				: ($vl_selector=-5)
					$vz_last_value:=$vz_right-$vz_left
					
				: ($vl_selector=-6)
					$vz_last_value:=$vz_bottom-$vz_top
					
				: ($vl_selector=-7)
					$vz_last_value:=$vo_obj.id
					
				: ($vl_selector=(hmRep_clr_ObjectFramecolor+1000))
					
					$vl_red:=0
					$vl_green:=0
					$vl_blue:=0
					$vz_alpha:=0
					hmRep_GET COLOR WITH ALPHA(This:C1470.area; hmRep_clr_ObjectFramecolor; $vo_obj.id; $vl_red; $vl_green; $vl_blue; $vz_alpha)
					$vz_last_value:=intern_Color16BitTo8Bit($vl_red; $vl_green; $vl_blue)
					
					This:C1470.framecolor_popup:=intern_ColorGetIndexFrom16Bit($vl_red; $vl_green; $vl_blue)
					
				: ($vl_selector=(hmRep_clr_ObjectFramecolor+2000))
					
					$vl_red:=0
					$vl_green:=0
					$vl_blue:=0
					$vz_alpha:=0
					
					hmRep_GET COLOR WITH ALPHA(This:C1470.area; hmRep_clr_ObjectFramecolor; $vo_obj.id; $vl_red; $vl_green; $vl_blue; $vz_alpha)
					$vz_last_value:=$vz_alpha
					
				: ($vl_selector=(hmRep_clr_ObjectFillcolor+1000))
					
					$vl_red:=0
					$vl_green:=0
					$vl_blue:=0
					$vz_alpha:=0
					
					hmRep_GET COLOR WITH ALPHA(This:C1470.area; hmRep_clr_ObjectFillcolor; $vo_obj.id; $vl_red; $vl_green; $vl_blue; $vz_alpha)
					$vz_last_value:=intern_Color16BitTo8Bit($vl_red; $vl_green; $vl_blue)
					
					This:C1470.fillcolor_popup:=intern_ColorGetIndexFrom16Bit($vl_red; $vl_green; $vl_blue)
					
				: ($vl_selector=(hmRep_clr_ObjectFillcolor+2000))
					
					$vl_red:=0
					$vl_green:=0
					$vl_blue:=0
					$vz_alpha:=0
					
					hmRep_GET COLOR WITH ALPHA(This:C1470.area; hmRep_clr_ObjectFillcolor; $vo_obj.id; $vl_red; $vl_green; $vl_blue; $vz_alpha)
					$vz_last_value:=$vz_alpha
					
				: ($vl_selector=(hmRep_clr_ObjectTextcolor+1000))
					
					$vl_red:=0
					$vl_green:=0
					$vl_blue:=0
					$vz_alpha:=0
					
					hmRep_GET COLOR WITH ALPHA(This:C1470.area; hmRep_clr_ObjectTextcolor; $vo_obj.id; $vl_red; $vl_green; $vl_blue; $vz_alpha)
					$vz_last_value:=intern_Color16BitTo8Bit($vl_red; $vl_green; $vl_blue)
					
					This:C1470.textcolor_popup:=intern_ColorGetIndexFrom16Bit($vl_red; $vl_green; $vl_blue)
					
				: ($vl_selector=(hmRep_clr_ObjectTextcolor+2000))
					
					$vl_red:=0
					$vl_green:=0
					$vl_blue:=0
					$vz_alpha:=0
					
					hmRep_GET COLOR WITH ALPHA(This:C1470.area; hmRep_clr_ObjectTextcolor; $vo_obj.id; $vl_red; $vl_green; $vl_blue; $vz_alpha)
					$vz_last_value:=$vz_alpha
					
				: ($vl_selector=hmRep_oprop_Fontstyle) & ($vt_objectname="vl_obj_fett")
					$vl_fontstyle:=$vo_obj.getPropReal($vl_selector)
					$vz_last_value:=Num:C11(($vl_fontstyle & Bold:K14:2)>0)
					
				: ($vl_selector=hmRep_oprop_Fontstyle) & ($vt_objectname="vl_obj_kursiv")
					$vl_fontstyle:=$vo_obj.getPropReal($vl_selector)
					$vz_last_value:=Num:C11(($vl_fontstyle & Italic:K14:3)>0)
					
				: ($vl_selector=hmRep_oprop_Fontstyle) & ($vt_objectname="vl_obj_unterstrichen")
					$vl_fontstyle:=$vo_obj.getPropReal($vl_selector)
					$vz_last_value:=Num:C11(($vl_fontstyle & Underline:K14:4)>0)
					
				: ($vl_selector=hmRep_oprop_Fontstyle) & ($vt_objectname="vl_obj_durchgestrichen")
					$vl_fontstyle:=$vo_obj.getPropReal($vl_selector)
					$vz_last_value:=Num:C11(($vl_fontstyle & 8)>0)
					
				: ($vl_selector=hmRep_oprop_SubreportPageID)
					
					If ($vo_obj.type=hmRep_ObjType_Subreport)
						
						$vl_pageid:=$vo_obj.getPropReal(hmRep_oprop_SubreportPageID)
						
						$vt_uuid:=$vo_obj.getPropText(hmRep_oprop_SubreportUUID)
						
						If (Length:C16($vt_uuid)>0)
							
							If ($vl_pageid=0)
								$vz_last_value:=0
							Else 
								$vz_last_value:=$vl_pageid
							End if 
							
						Else 
							$vz_last_value:=0
						End if 
						
						$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_subreport_pages")
						$vp_object4:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_page")
						
						$vl_pos:=Find in array:C230($vp_object3->; $vz_last_value)
						
						If ($vl_pos>0)
							$vp_object4->:=$vl_pos
						Else 
							$vp_object4->:=0
						End if 
						
					End if 
					
				Else 
					$vz_last_value:=$vo_obj.getPropReal($vl_selector)
					
			End case 
			
			If ($vc_object.indexOf($vo_obj)=0)
				
				$vz_value:=$vz_last_value
				
				Case of 
					: ($vl_selector=hmRep_oprop_Type)
						OBJECT SET VALUE:C1742($vt_objectname; $vo_obj.typeName)
						
					: ($vl_selector=hmRep_oprop_Penwidth)
						OBJECT SET VALUE:C1742("vz_obj_framesize_stepper"; $vz_value)
						OBJECT SET VALUE:C1742($vt_objectname; $vz_value)
						
					: ($vl_selector=hmRep_oprop_Linespacing)
						OBJECT SET VALUE:C1742("vz_obj_linespacing_stepper"; $vz_value)
						OBJECT SET VALUE:C1742($vt_objectname; $vz_value)
						
					: ($vl_selector=hmRep_oprop_Rounding)
						OBJECT SET VALUE:C1742("vz_obj_rounding_stepper"; $vz_value)
						OBJECT SET VALUE:C1742($vt_objectname; $vz_value)
						
					: ($vl_selector=(hmRep_clr_ObjectFramecolor+1000))
						OBJECT SET RGB COLORS:C628(*; $vt_objectname; 0; $vz_value)
						
					: ($vl_selector=(hmRep_clr_ObjectFillcolor+1000))
						OBJECT SET RGB COLORS:C628(*; $vt_objectname; 0; $vz_value)
						
					: ($vl_selector=(hmRep_clr_ObjectTextcolor+1000))
						OBJECT SET RGB COLORS:C628(*; $vt_objectname; 0; $vz_value)
						
					: ($vl_selector=hmRep_oprop_Fontsize)
						
						$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tz_fontsize")
						If (Not:C34(Is nil pointer:C315($vp_object)))
							$vp_object->{0}:=$vz_value
						End if 
						
					: ($vl_selector=hmRep_oprop_Alignment)
						
						$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_alignment")
						If (Not:C34(Is nil pointer:C315($vp_object)))
							$vp_object->:=$vz_value
						End if 
						
					: ($vl_selector=(hmRep_clr_ObjectFramecolor+2000))
						OBJECT SET VALUE:C1742("vz_obj_framealpha_stepper"; $vz_value)
						OBJECT SET VALUE:C1742($vt_objectname; $vz_value)
						
					: ($vl_selector=(hmRep_clr_ObjectFillcolor+2000))
						OBJECT SET VALUE:C1742("vz_obj_fillalpha_stepper"; $vz_value)
						OBJECT SET VALUE:C1742($vt_objectname; $vz_value)
						
					: ($vl_selector=(hmRep_clr_ObjectTextcolor+2000))
						OBJECT SET VALUE:C1742("vz_obj_textalpha_stepper"; $vz_value)
						OBJECT SET VALUE:C1742($vt_objectname; $vz_value)
						
					: ($vl_selector=hmRep_oprop_Barcode)
						
						$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_barcode")
						$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_barcode")
						
						If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object2)))
							
							$vl_pos:=Find in array:C230($vp_object2->; $vz_value)
							
							If ($vl_pos>0)
								$vp_object->:=$vl_pos
							Else 
								$vp_object->:=1
							End if 
							
						End if 
						
					: ($vl_selector=hmRep_oprop_SubreportPageID)
						
					: ($vl_selector=hmRep_oprop_Pictureformat)
						
						//If ($vl_type=hmRep_ObjType_Subreport)
						//
						//$vp_object:=OBJECT Get pointer(Object named;"tt_subreport_darstellung")
						//
						//If (Not(Nil($vp_object)))
						//
						//Case of 
						//: ($vz_value=2)
						//$vp_object->:=2
						//
						//: ($vz_value=3)
						//$vp_object->:=1
						//
						//Else 
						//$vp_object->:=1
						//
						//End case 
						//
						//End if 
						//
						//End if 
						
					: ($vl_selector=hmRep_oprop_VerticalSizing)
						
						$vp_object:=OBJECT_GetPointer("tt_object_verticalsizing")
						
						If (Not:C34(Is nil pointer:C315($vp_object)))
							
							$vp_object->:=$vz_value+1
							
						End if 
						
					Else 
						OBJECT SET VALUE:C1742($vt_objectname; $vz_value)
						
				End case 
				
			Else 
				
				If ($vz_last_value#$vz_value)
					$vf_multi:=True:C214
					break
				End if 
				
			End if 
			
		End for each 
		
	End if 
	
	If ($vf_multi)
		
		OBJECT SET VISIBLE:C603(*; $vt_objectname+"_multi"; True:C214)
		OBJECT SET VISIBLE:C603(*; $vt_objectname; False:C215)
		
		Case of 
			: ($vl_selector=hmRep_oprop_ShowFrame)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			: ($vl_selector=hmRep_oprop_ShowFill)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			: ($vl_selector=hmRep_oprop_Fontstyle)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			: ($vl_selector=hmRep_oprop_Wordwrap)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			: ($vl_selector=hmRep_oprop_Antialiasing)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			: ($vl_selector=hmRep_oprop_Print)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			: ($vl_selector=hmRep_oprop_Moveable)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			: ($vl_selector=hmRep_oprop_Resizeable)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			: ($vl_selector=hmRep_oprop_FixedPrinting)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			: ($vl_selector=hmRep_oprop_VariableHeight)
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; 2)
				
			Else 
				OBJECT SET VALUE:C1742($vt_objectname+"_multi"; Localized string:C991("multiple_values"))
				
		End case 
		
	Else 
		
		OBJECT SET VISIBLE:C603(*; $vt_objectname+"_multi"; False:C215)
		OBJECT SET VISIBLE:C603(*; $vt_objectname; True:C214)
		
	End if 
	
Function clickMulti()
	var $vt_objectname : Text
	
	$vt_objectname:=OBJECT Get name:C1087(Object current:K67:2)
	$vt_objectname:=Replace string:C233($vt_objectname; "_multi"; "")
	
	OBJECT SET VISIBLE:C603(*; $vt_objectname+"_multi"; False:C215)
	OBJECT SET VISIBLE:C603(*; $vt_objectname; True:C214)
	GOTO OBJECT:C206(*; $vt_objectname)
	
	Case of 
		: ($vt_objectname="vl_obj_rahmenanzeigen")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_ShowFrame; $vt_objectname)
			
		: ($vt_objectname="vl_obj_hintergrundanz")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_ShowFill; $vt_objectname)
			
		: ($vt_objectname="vl_obj_fett")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_Fontstyle; $vt_objectname)
			
		: ($vt_objectname="vl_obj_kursiv")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_Fontstyle; $vt_objectname)
			
		: ($vt_objectname="vl_obj_unterstrichen")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_Fontstyle; $vt_objectname)
			
		: ($vt_objectname="vl_obj_durchgestrichen")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_Fontstyle; $vt_objectname)
			
		: ($vt_objectname="vl_obj_textumbruch")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_Wordwrap; $vt_objectname)
			
		: ($vt_objectname="vl_obj_antialiasing")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_Antialiasing; $vt_objectname)
			
		: ($vt_objectname="vl_obj_print")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_Print; $vt_objectname)
			
		: ($vt_objectname="vl_obj_moveable")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_Moveable; $vt_objectname)
			
		: ($vt_objectname="vl_obj_resizeable")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_Resizeable; $vt_objectname)
			
		: ($vt_objectname="vl_obj_fixedprinting")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_FixedPrinting; $vt_objectname)
			
		: ($vt_objectname="vl_obj_variableheight")
			OBJECT SET VALUE:C1742($vt_objectname; 0)
			This:C1470.changeObject(hmRep_oprop_VariableHeight; $vt_objectname)
			
	End case 
	
Function changeObject($vl_selector : Integer; $vt_objectname : Text)
	
	Case of 
		: (Form event code:C388=On Data Change:K2:15) | (Form event code:C388=On Clicked:K2:4)
			This:C1470.setMultiProps($vl_selector; $vt_objectname)
			
		: (Form event code:C388=On Losing Focus:K2:8)
			This:C1470.updateObject($vt_objectname)
			
	End case 
	
Function setMultiProps($vl_selector : Integer; $vt_objectname : Text)
	var $i; $vl_red; $vl_green; $vl_blue; $vl_color; $vl_8bitcolor; $vl_type; $vl_alignment; $vl_fontstyle; $vl_font_bold; $vl_font_italic; $vl_font_underline; $vl_barcode; $vl_pos; $vl_page; $vl_font_strikethrough : Integer
	var $vt_fontname; $vt_uuid : Text
	var $vz_left; $vz_top; $vz_right; $vz_bottom; $vz_width; $vz_height; $vz_value; $vz_fontsize; $vz_alpha : Real
	var $vf_ok : Boolean
	var $vp_object; $vp_object2; $vp_object3 : Pointer
	var $vo_obj : cs:C1710.object
	
	ARRAY LONGINT:C221($tl_selected_objects; 0)
	hmRep_GET OBJECT LIST(This:C1470.area; hmRep_scope_Selected; 1; $tl_selected_objects)
	
	$vf_ok:=True:C214
	
	For ($i; 1; Size of array:C274($tl_selected_objects))
		
		$vo_obj:=cs:C1710.object.new(This:C1470.area; $tl_selected_objects{$i})
		
		$vl_type:=$vo_obj.type
		
		Case of 
			: ($vl_selector=-1)  //Größe
				
				$vz_left:=0
				$vz_top:=0
				$vz_right:=0
				$vz_bottom:=0
				hmRep_GET OBJECT RECT(This:C1470.area; $tl_selected_objects{$i}; $vz_left; $vz_top; $vz_right; $vz_bottom)
				
				Case of 
					: ($vt_objectname="vz_left")
						$vz_left:=hmRep_Rulerunit To Pixel(This:C1470.area; OBJECT Get value:C1743($vt_objectname))
						
					: ($vt_objectname="vz_top")
						$vz_top:=hmRep_Rulerunit To Pixel(This:C1470.area; OBJECT Get value:C1743($vt_objectname))
						
					: ($vt_objectname="vz_right")
						$vz_right:=hmRep_Rulerunit To Pixel(This:C1470.area; OBJECT Get value:C1743($vt_objectname))
						
					: ($vt_objectname="vz_bottom")
						$vz_bottom:=hmRep_Rulerunit To Pixel(This:C1470.area; OBJECT Get value:C1743($vt_objectname))
						
					: ($vt_objectname="vz_width")
						$vz_width:=hmRep_Rulerunit To Pixel(This:C1470.area; OBJECT Get value:C1743($vt_objectname))
						$vz_right:=$vz_left+$vz_width
						
					: ($vt_objectname="vz_height")
						$vz_height:=hmRep_Rulerunit To Pixel(This:C1470.area; OBJECT Get value:C1743($vt_objectname))
						$vz_bottom:=$vz_top+$vz_height
						
				End case 
				
				hmRep_SET OBJECT RECT(This:C1470.area; $tl_selected_objects{$i}; $vz_left; $vz_top; $vz_right; $vz_bottom)
				
			: ($vl_selector=hmRep_oprop_Name)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; 0; OBJECT Get value:C1743($vt_objectname))
				
			: ($vl_selector=hmRep_oprop_ShowFrame)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				
			: ($vl_selector=hmRep_oprop_ShowFill)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				
			: (($vl_selector=(hmRep_clr_ObjectFramecolor+1000)) & ($vt_objectname="framecolor_popup")) | (($vl_selector=(hmRep_clr_ObjectFillcolor+1000)) & ($vt_objectname="fillcolor_popup")) | (($vl_selector=(hmRep_clr_ObjectTextcolor+1000)) & ($vt_objectname="textcolor_popup"))
				
				$vl_color:=OBJECT Get value:C1743($vt_objectname)
				$vl_color:=$vl_color-1
				
				$vl_red:=0
				$vl_green:=0
				$vl_blue:=0
				
				$vz_alpha:=0
				hmRep_GET COLOR WITH ALPHA(This:C1470.area; $vl_selector-1000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				
				hmRep_INDEX2RGB($vl_color; $vl_red; $vl_green; $vl_blue)
				
				hmRep_SET COLOR WITH ALPHA(This:C1470.area; $vl_selector-1000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				
			: (($vl_selector=(hmRep_clr_ObjectFramecolor+1000)) & ($vt_objectname="framecolor_button")) | (($vl_selector=(hmRep_clr_ObjectFillcolor+1000)) & ($vt_objectname="fillcolor_button")) | (($vl_selector=(hmRep_clr_ObjectTextcolor+1000)) & ($vt_objectname="textcolor_button"))
				
				If ($i=1)
					
					$vl_red:=0
					$vl_green:=0
					$vl_blue:=0
					$vz_alpha:=0
					
					hmRep_GET COLOR WITH ALPHA(This:C1470.area; $vl_selector-1000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
					
					$vl_8bitcolor:=intern_Color16BitTo8Bit($vl_red; $vl_green; $vl_blue)
					
					$vl_8bitcolor:=Select RGB color:C956($vl_8bitcolor)
					
					If (OK=1)
						
						intern_COLOR8BITTO16BIT($vl_8bitcolor; ->$vl_red; ->$vl_green; ->$vl_blue)
						
					Else 
						$vf_ok:=False:C215
					End if 
					
				End if 
				
				If ($vf_ok)
					
					hmRep_SET COLOR WITH ALPHA(This:C1470.area; $vl_selector-1000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
					
				End if 
				
			: ($vl_selector=hmRep_oprop_Penwidth)
				
				$vz_value:=OBJECT Get value:C1743($vt_objectname)
				
				If ($vz_value<=0)
					$vz_value:=0.25
				End if 
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; $vz_value; "")
				
			: ($vl_selector=hmRep_oprop_Rounding)
				
				If ($vl_type=hmRep_ObjType_Rect)
					
					$vz_value:=OBJECT Get value:C1743($vt_objectname)
					
					If ($vz_value<=0)
						$vz_value:=0
					End if 
					
					hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; $vz_value; "")
					
				End if 
				
			: ($vl_selector=hmRep_oprop_Fontname)
				
				If ($vl_type=hmRep_ObjType_Text)
					
					$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_objectname)
					
					If (Not:C34(Is nil pointer:C315($vp_object)))
						
						$vt_fontname:=$vp_object->{0}
						hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; 0; $vt_fontname)
						
					End if 
					
				End if 
				
			: ($vl_selector=hmRep_oprop_Fontsize)
				
				If ($vl_type=hmRep_ObjType_Text)
					
					$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_objectname)
					
					If (Not:C34(Is nil pointer:C315($vp_object)))
						
						$vz_fontsize:=$vp_object->{0}
						hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; $vz_fontsize; "")
						
					End if 
					
				End if 
				
			: ($vl_selector=hmRep_oprop_Alignment)
				
				If ($vl_type=hmRep_ObjType_Text)
					
					$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_objectname)
					
					If (Not:C34(Is nil pointer:C315($vp_object)))
						
						$vl_alignment:=$vp_object->
						hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; $vl_alignment; "")
						
					End if 
					
				End if 
				
			: ($vl_selector=hmRep_oprop_Fontstyle)
				
				If ($vl_type=hmRep_ObjType_Text)
					
					$vl_fontstyle:=$vo_obj.getPropReal(hmRep_oprop_Fontstyle)
					
					$vl_font_bold:=Num:C11(($vl_fontstyle & Bold:K14:2)>0)
					$vl_font_italic:=Num:C11(($vl_fontstyle & Italic:K14:3)>0)
					$vl_font_underline:=Num:C11(($vl_fontstyle & Underline:K14:4)>0)
					$vl_font_strikethrough:=Num:C11(($vl_fontstyle & 8)>0)
					
					Case of 
						: ($vt_objectname="vl_obj_fett")
							$vl_font_bold:=OBJECT Get value:C1743($vt_objectname)
							
						: ($vt_objectname="vl_obj_kursiv")
							$vl_font_italic:=OBJECT Get value:C1743($vt_objectname)
							
						: ($vt_objectname="vl_obj_unterstrichen")
							$vl_font_underline:=OBJECT Get value:C1743($vt_objectname)
							
						: ($vt_objectname="vl_obj_durchgestrichen")
							$vl_font_strikethrough:=OBJECT Get value:C1743($vt_objectname)
							
					End case 
					
					$vl_fontstyle:=$vl_font_bold+($vl_font_italic*2)+($vl_font_underline*4)+($vl_font_strikethrough*8)
					
					hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; $vl_fontstyle; "")
					
				End if 
				
			: ($vl_selector=(hmRep_clr_ObjectFramecolor+2000)) | ($vl_selector=(hmRep_clr_ObjectTextcolor+2000)) | ($vl_selector=(hmRep_clr_ObjectFillcolor+2000))
				
				$vl_red:=0
				$vl_green:=0
				$vl_blue:=0
				$vz_alpha:=0
				
				hmRep_GET COLOR WITH ALPHA(This:C1470.area; $vl_selector-2000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				
				$vz_alpha:=OBJECT Get value:C1743($vt_objectname)
				
				hmRep_SET COLOR WITH ALPHA(This:C1470.area; $vl_selector-2000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				
			: ($vl_selector=hmRep_oprop_Wordwrap)
				
				If ($vl_type=hmRep_ObjType_Text)
					hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				End if 
				
			: ($vl_selector=hmRep_oprop_Antialiasing)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				
			: ($vl_selector=hmRep_oprop_Print)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				
			: ($vl_selector=hmRep_oprop_Moveable)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				
			: ($vl_selector=hmRep_oprop_Resizeable)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				
			: ($vl_selector=hmRep_oprop_FixedPrinting)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				
			: ($vl_selector=hmRep_oprop_VariableHeight)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				
			: ($vl_selector=hmRep_oprop_VerticalSizing)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetCurrentArrayIndex($vt_objectname)-1; "")
				
			: ($vl_selector=hmRep_oprop_Barcode)
				
				If ($vl_type=hmRep_ObjType_Text)
					
					$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_barcode")
					$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_barcode")
					
					If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object2)))
						
						$vl_pos:=$vp_object->
						
						If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object2->))
							
							$vl_barcode:=$vp_object2->{$vl_pos}
							
							hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; $vl_barcode; "")
							
						End if 
						
					End if 
					
				End if 
				
			: ($vl_selector=hmRep_oprop_SubreportUUID)
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_name")
				$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_uuid")
				
				If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object2)))
					
					$vl_pos:=$vp_object->
					
					If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object2->))
						
						$vt_uuid:=$vp_object2->{$vl_pos}
						
						hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; 0; $vt_uuid)
						
					End if 
					
				End if 
				
			: ($vl_selector=hmRep_oprop_SubreportPageID)
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_page")
				$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_subreport_pages")
				
				If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object3)))
					
					$vl_pos:=$vp_object->
					$vl_page:=$vp_object3->{$vl_pos}
					
					hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; hmRep_oprop_SubreportPageID; $vl_page; "")
					
				End if 
				
			: ($vl_selector=hmRep_oprop_Pictureformat)
				
				//If ($vl_type=hmRep_ObjType_Subreport)
				//
				//$vp_object:=OBJECT Get pointer(Object named;"tt_subreport_darstellung")
				//
				//If (Not(Nil($vp_object)))
				//
				//Case of 
				//: ($vp_object->=1)
				//hmRep_SET OBJECT PROPERTY ($vl_area;$tl_selected_objects{$i};hmRep_oprop_Pictureformat;3;"")
				//
				//: ($vp_object->=2)
				//hmRep_SET OBJECT PROPERTY ($vl_area;$tl_selected_objects{$i};hmRep_oprop_Pictureformat;2;"")
				//
				//Else 
				//hmRep_SET OBJECT PROPERTY ($vl_area;$tl_selected_objects{$i};hmRep_oprop_Pictureformat;3;"")
				//
				//End case 
				//
				//End if 
				//
				//End if 
				
			: ($vl_selector=hmRep_oprop_Rotation)
				
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; OBJECT Get value:C1743($vt_objectname); "")
				
			: ($vl_selector=hmRep_oprop_Linespacing)
				
				If ($vl_type=hmRep_ObjType_Text)
					
					$vz_value:=OBJECT Get value:C1743($vt_objectname)
					
					If ($vz_value<=0)
						$vz_value:=0
					End if 
					
					hmRep_SET OBJECT PROPERTY(This:C1470.area; $tl_selected_objects{$i}; $vl_selector; $vz_value; "")
					
				End if 
				
		End case 
		
		If (Not:C34($vf_ok))
			break
		End if 
		
	End for 
	
	This:C1470.updateObject("")
	
Function updateFromOutside()
	EXECUTE METHOD IN SUBFORM:C1085("subform_object_properties"; Formula:C1597($1.setPositions()); *; This:C1470)
	