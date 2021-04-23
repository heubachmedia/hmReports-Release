C_LONGINT:C283($vl_area; $vl_current_page)

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	$vl_current_page:=hmRep_Get Current Page($vl_area)
	
	If ($vl_current_page>1)
		
		hmRep_SET CURRENT PAGE($vl_area; $vl_current_page-1)
		pal_update_report($vl_area)
		
		OBJECT SET ENABLED:C1123(*; "vl_previous_page"; hmRep_Get Current Page($vl_area)>1)
		OBJECT SET ENABLED:C1123(*; "vl_next_page"; hmRep_Get Current Page($vl_area)<hmRep_Count Pages($vl_area))
		
		CALL SUBFORM CONTAINER:C1086(-2001)
		
	End if 
	
End if 
