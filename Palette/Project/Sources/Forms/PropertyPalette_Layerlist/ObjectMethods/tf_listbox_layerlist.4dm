C_LONGINT:C283($vl_area; $vl_pos)
C_POINTER:C301($vp_object_layer_id)

Case of 
	: (Form event code:C388=On Double Clicked:K2:5)
		
		$vl_area:=OBJECT_GetLongint("vl_current_area")
		$vl_pos:=Listbox_GetPosObject("tf_listbox_layerlist")
		
		$vp_object_layer_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_layer_id")
		
		If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object_layer_id->))
			
			hmRep_SET CURRENT LAYER($vl_area; $vp_object_layer_id->{$vl_pos})
			
			pal_update_layerlist($vl_area)
			
		End if 
		
End case 
