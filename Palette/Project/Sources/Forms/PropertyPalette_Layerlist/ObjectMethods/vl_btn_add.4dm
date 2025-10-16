C_LONGINT:C283($vl_layer_id; $vl_area; $vl_pos)
C_POINTER:C301($vp_object_layer_id)

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	$vl_layer_id:=hmRep_Create Layer($vl_area; "")
	
	pal_update_layerlist($vl_area)
	
	$vp_object_layer_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_layer_id")
	
	$vl_pos:=Find in array:C230($vp_object_layer_id->; $vl_layer_id)
	If ($vl_pos>0)
		
		LISTBOX SELECT ROW:C912(*; "tf_listbox_layerlist"; $vl_pos)
		EDIT ITEM:C870(*; "tt_layer_name"; $vl_pos)
		
	End if 
	
End if 
