C_LONGINT:C283($vl_area; $vl_pos)
C_POINTER:C301($vp_object_layer_id; $vp_object_layer_locked)

If (Form event code:C388=On Data Change:K2:15)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	$vl_pos:=Listbox_GetPosObject("tf_listbox_layerlist")
	
	$vp_object_layer_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_layer_id")
	$vp_object_layer_locked:=OBJECT Get pointer:C1124(Object named:K67:5; "tf_layer_locked")
	
	If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object_layer_id->))
		
		hmRep_SET LAYER PROPERTY($vl_area; $vp_object_layer_id->{$vl_pos}; hmRep_lprop_LockObjects; Num:C11($vp_object_layer_locked->{$vl_pos}); "")
		
	End if 
	
End if 
