C_LONGINT:C283($vl_area)

If (Form event code:C388=On After Edit:K2:43) | (Form event code:C388=On Data Change:K2:15)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_name; 0; Get edited text:C655)
	
End if 
