var $vl_current_page; $vl_pages : Integer

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_current_page:=hmRep_Get Current Page(Form:C1466.area)
	$vl_pages:=hmRep_Count Pages(Form:C1466.area)
	
	If ($vl_current_page<$vl_pages)
		
		hmRep_SET CURRENT PAGE(Form:C1466.area; $vl_current_page+1)
		Form:C1466.update()
		
		OBJECT SET ENABLED:C1123(*; "vl_previous_page"; hmRep_Get Current Page(Form:C1466.area)>1)
		OBJECT SET ENABLED:C1123(*; "vl_next_page"; hmRep_Get Current Page(Form:C1466.area)<hmRep_Count Pages(Form:C1466.area))
		
		CALL SUBFORM CONTAINER:C1086(-2001)
		
	End if 
	
End if 
