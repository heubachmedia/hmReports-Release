property id; area; layer; group; type : Integer
property typeName : Text

Class constructor($vl_area : Integer; $vl_id : Integer)
	var $vt_objecttype : Text
	var $vo_info : Object
	
	This:C1470.id:=$vl_id
	This:C1470.area:=$vl_area
	
	$vo_info:=hmRep_Get Object(This:C1470.area; This:C1470.id)
	
	This:C1470.layer:=$vo_info.layer
	This:C1470.group:=$vo_info.group
	This:C1470.type:=$vo_info.type
	
	Case of 
		: (This:C1470.type=hmRep_ObjType_Unknown)
			$vt_objecttype:="unknown"
			
		: (This:C1470.type=hmRep_ObjType_Group)
			$vt_objecttype:="TypeGroup"
			
		: (This:C1470.type=hmRep_ObjType_Line)
			$vt_objecttype:="line"
			
		: (This:C1470.type=hmRep_ObjType_Oval)
			$vt_objecttype:="oval"
			
		: (This:C1470.type=hmRep_ObjType_Rect)
			$vt_objecttype:="rect"
			
		: (This:C1470.type=hmRep_ObjType_Text)
			$vt_objecttype:="text"
			
		: (This:C1470.type=hmRep_ObjType_Picture)
			$vt_objecttype:="picture"
			
		: (This:C1470.type=hmRep_ObjType_Arc)
			$vt_objecttype:="arc"
			
		: (This:C1470.type=hmRep_ObjType_Path)
			$vt_objecttype:="path"
			
		: (This:C1470.type=hmRep_ObjType_Freehand)
			$vt_objecttype:="freehand"
			
		: (This:C1470.type=hmRep_ObjType_Subreport)
			$vt_objecttype:="subreport"
			
		: (This:C1470.type=hmRep_ObjType_Chart)
			$vt_objecttype:="chart"
			
		Else 
			$vt_objecttype:="unknown"
			
	End case 
	
	This:C1470.typeName:=Localized string:C991($vt_objecttype)
	
Function getPropReal($vl_selector : Integer)->$vz_prop_real : Real
	var $vt_prop_text : Text
	
	$vz_prop_real:=0
	$vt_prop_text:=""
	hmRep_GET OBJECT PROPERTY(This:C1470.area; This:C1470.id; $vl_selector; $vz_prop_real; $vt_prop_text)
	
Function getPropText($vl_selector : Integer)->$vt_prop_text : Text
	var $vz_prop_real : Real
	
	$vz_prop_real:=0
	$vt_prop_text:=""
	hmRep_GET OBJECT PROPERTY(This:C1470.area; This:C1470.id; $vl_selector; $vz_prop_real; $vt_prop_text)
	
Function getDescription()->$vt_text : Text
	var $vt_object_text; $vt_object_name : Text
	
	If (This:C1470.type=hmRep_ObjType_Text)
		$vt_object_text:=Substring:C12(This:C1470.getPropText(hmRep_oprop_Text); 1; 100)
	Else 
		$vt_object_text:=""
	End if 
	
	$vt_object_name:=This:C1470.getPropText(hmRep_oprop_Name)
	
	If ($vt_object_name="")
		
		If (Length:C16($vt_object_text)=0)
			$vt_text:=This:C1470.typeName
		Else 
			$vt_text:=$vt_object_text
		End if 
		
	Else 
		$vt_text:=$vt_object_name+" ("+This:C1470.typeName+")"
	End if 
	