C_LONGINT:C283($vl_area)
C_REAL:C285($vz_value)

If (Form event code:C388=On Data Change:K2:15)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	$vz_value:=hmRep_Rulerunit To Pixel($vl_area; OBJECT_GetReal("vz_margin_top"))
	parse_SetPagePropertyLong($vl_area; hmRep_pprop_margin_top; $vz_value)
	
	pal_update_page_SetSize($vl_area)  //Init
	
End if 
