C_LONGINT:C283($vl_area; $vl_pos; $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue; $vl_color; $vl_newcolor)
C_POINTER:C301($vp_object_layer_id; $vp_object_layer_color)

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	$vl_pos:=Listbox_GetPosObject("tf_listbox_layerlist")
	
	$vp_object_layer_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_layer_id")
	$vp_object_layer_color:=OBJECT Get pointer:C1124(Object named:K67:5; "tb_layer_color")
	
	If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object_layer_id->))
		
		$vl_object_framecolor_red:=0
		$vl_object_framecolor_green:=0
		$vl_object_framecolor_blue:=0
		hmRep_GET COLOR($vl_area; hmRep_clr_LayerColor; $vp_object_layer_id->{$vl_pos}; $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue)
		
		$vl_color:=intern_Color16BitTo8Bit($vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue)
		
		$vl_newcolor:=Select RGB color:C956($vl_color)
		
		If (OK=1)
			
			intern_COLOR8BITTO16BIT($vl_newcolor; ->$vl_object_framecolor_red; ->$vl_object_framecolor_green; ->$vl_object_framecolor_blue)
			
			hmRep_SET COLOR($vl_area; hmRep_clr_LayerColor; $vp_object_layer_id->{$vl_pos}; $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue)
			$vp_object_layer_color->{$vl_pos}:=pal_getcolorsvg($vl_newcolor)
			
		End if 
		
	End if 
	
	
End if 
