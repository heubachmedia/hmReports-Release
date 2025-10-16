C_LONGINT:C283($vl_area; $vl_result)

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	$vl_result:=hmRep_Page Setup($vl_area; 1)
	
	pal_update_page_SetSize($vl_area)
	
End if 
