C_LONGINT:C283($vl_area)

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_PageSetupSync; OBJECT_GetLongint("vl_pagesetupsync"); "")
	
End if 
