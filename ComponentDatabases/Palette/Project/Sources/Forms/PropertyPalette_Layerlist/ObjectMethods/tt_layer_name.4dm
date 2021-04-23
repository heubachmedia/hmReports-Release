C_LONGINT:C283($vl_pos; $vl_prop_long; $vl_area)
C_POINTER:C301($vp_object_layer_name; $vp_object_layer_id)
C_TEXT:C284($vt_prop_text)

Case of 
	: (Form event code:C388=On Before Data Entry:K2:39)
		
		$vl_area:=OBJECT_GetLongint("vl_current_area")
		$vl_pos:=Listbox_GetPosObject("tf_listbox_layerlist")
		
		$vp_object_layer_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_layer_name")
		$vp_object_layer_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_layer_id")
		
		If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object_layer_name->))
			
			$vl_prop_long:=0
			$vt_prop_text:=""
			hmRep_GET LAYER PROPERTY($vl_area; $vp_object_layer_id->{$vl_pos}; hmRep_lprop_Name; $vl_prop_long; $vt_prop_text)
			
			$vp_object_layer_name->{$vl_pos}:=$vt_prop_text
			
		End if 
		
	: (Form event code:C388=On Losing Focus:K2:8)
		
		$vl_area:=OBJECT_GetLongint("vl_current_area")
		$vl_pos:=Listbox_GetPosObject("tf_listbox_layerlist")
		
		$vp_object_layer_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_layer_name")
		$vp_object_layer_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_layer_id")
		
		If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object_layer_name->))
			
			hmRep_SET LAYER PROPERTY($vl_area; $vp_object_layer_id->{$vl_pos}; hmRep_lprop_Name; 0; $vp_object_layer_name->{$vl_pos})
			
			If (hmRep_Get Current Layer($vl_area)=$vp_object_layer_id->{$vl_pos})
				$vp_object_layer_name->{$vl_pos}:=$vp_object_layer_name->{$vl_pos}+" ("+Get localized string:C991("aktuelle_ebene")+")"
			End if 
			
		End if 
		
End case 
