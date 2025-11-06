property visible; locked : Boolean
property name; realName : Text
property id; color : Integer

Class constructor($vl_area : Integer; $vl_id : Integer)
	var $vl_current_layer; $vl_prop_long; $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue : Integer
	var $vt_prop_text : Text
	
	$vl_current_layer:=hmRep_Get Current Layer($vl_area)
	
	$vl_prop_long:=0
	$vt_prop_text:=""
	hmRep_GET LAYER PROPERTY($vl_area; $vl_id; hmRep_lprop_Visible; $vl_prop_long; $vt_prop_text)
	
	$vl_object_framecolor_red:=0
	$vl_object_framecolor_green:=0
	$vl_object_framecolor_blue:=0
	hmRep_GET COLOR($vl_area; hmRep_clr_LayerColor; $vl_id; $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue)
	
	This:C1470.visible:=$vl_prop_long=1
	
	$vl_prop_long:=0
	$vt_prop_text:=""
	hmRep_GET LAYER PROPERTY($vl_area; $vl_id; hmRep_lprop_Name; $vl_prop_long; $vt_prop_text)
	
	This:C1470.color:=intern_Color16BitTo8Bit($vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue)
	
	This:C1470.name:=$vt_prop_text
	This:C1470.realName:=$vt_prop_text
	This:C1470.id:=$vl_id
	
	$vl_prop_long:=0
	$vt_prop_text:=""
	hmRep_GET LAYER PROPERTY($vl_area; $vl_id; hmRep_lprop_LockObjects; $vl_prop_long; $vt_prop_text)
	This:C1470.locked:=$vl_prop_long=1
	
	If ($vl_current_layer=$vl_id)
		
		If (Length:C16(This:C1470.name)>0)
			This:C1470.name:=This:C1470.name+" "
		End if 
		
		This:C1470.name:=This:C1470.name+"("+Localized string:C991("aktuelle_ebene")+")"
		
	End if 
	
Function get colorPicture()->$vb_picture : Picture
	var $vt_area; $vt_fillcolor; $vt_ref : Text
	
	$vt_area:=DOM Create XML Ref:C861("svg")
	
	DOM SET XML ATTRIBUTE:C866($vt_area; "xmlns"; "http://www.w3.org/2000/svg"; "xmlns:xlink"; "http://www.w3.org/1999/xlink")
	
	DOM SET XML ATTRIBUTE:C866($vt_area; "width"; 20; "height"; 20)
	
	$vt_fillcolor:=intern_ConvertColorFromLong(This:C1470.color)
	
	$vt_ref:=DOM Create XML element:C865($vt_area; "/svg/rect"; "x"; 0; "y"; 0; "width"; 20; "height"; 20; "stroke"; "none"; "fill"; $vt_fillcolor)
	
	SVG EXPORT TO PICTURE:C1017($vt_area; $vb_picture; Own XML data source:K45:18)
	