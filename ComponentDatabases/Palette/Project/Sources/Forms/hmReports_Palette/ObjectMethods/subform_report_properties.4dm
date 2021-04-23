C_LONGINT:C283($vl_area)

Case of 
	: (Form event code:C388=-2001)
		
		If (pal_getcurrenttab=2)
			
			$vl_area:=OBJECT_GetLongint("vl_current_area")
			
			pal_updatetabbar($vl_area)
			
		End if 
		
End case 
