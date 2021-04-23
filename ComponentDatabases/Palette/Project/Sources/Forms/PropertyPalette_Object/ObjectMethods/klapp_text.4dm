C_LONGINT:C283($vl_area)

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	pal_set_object_positions($vl_area)
	
End if 
