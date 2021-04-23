C_LONGINT:C283($vl_area)

Case of 
	: (Form event code:C388=-2001)
		
		$vl_area:=OBJECT_GetLongint("vl_current_area")
		pal_update($vl_area; 0)
		
End case 
