C_LONGINT:C283($vl_area)

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	parse_SetPagePropertyLong($vl_area; hmRep_pprop_PublishAsSubreport; OBJECT_GetLongint("vl_publish_as_subreport"))
	
End if 
