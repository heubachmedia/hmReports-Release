C_LONGINT:C283($i; $vl_area; $vl_pages; $vl_current_page; $vl_ref)
C_TEXT:C284($vt_menu)

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	$vl_pages:=hmRep_Count Pages($vl_area)
	$vl_current_page:=hmRep_Get Current Page($vl_area)
	
	If ($vl_pages>1)  //ab mehr als 1 Seite Popup anzeigen
		
		$vt_menu:=Create menu:C408
		
		For ($i; 1; $vl_pages)
			APPEND MENU ITEM:C411($vt_menu; String:C10($i))
			SET MENU ITEM PARAMETER:C1004($vt_menu; -1; String:C10($i))
			
			If ($i=$vl_current_page)
				
				SET MENU ITEM MARK:C208($vt_menu; -1; Char:C90(18))
				
			End if 
			
		End for 
		
		$vl_ref:=Num:C11(Dynamic pop up menu:C1006($vt_menu; String:C10($vl_current_page)))
		
		RELEASE MENU:C978($vt_menu)
		
		If ($vl_ref>0) & ($vl_ref#$vl_current_page)
			
			hmRep_SET CURRENT PAGE($vl_area; $vl_ref)
			pal_update_report($vl_area)
			
			OBJECT SET ENABLED:C1123(*; "vl_previous_page"; hmRep_Get Current Page($vl_area)>1)
			OBJECT SET ENABLED:C1123(*; "vl_next_page"; hmRep_Get Current Page($vl_area)<hmRep_Count Pages($vl_area))
			
			CALL SUBFORM CONTAINER:C1086(-2001)
			
		End if 
		
	End if 
	
End if 
