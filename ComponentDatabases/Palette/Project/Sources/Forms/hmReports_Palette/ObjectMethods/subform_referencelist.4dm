C_LONGINT:C283($vl_area)

Case of 
	: (Form event code:C388=-2001)
		
		$vl_area:=OBJECT_GetLongint("vl_current_area")
		pal_update($vl_area; 0)
		
	: (Form event code:C388=-2002)  //Nur Property Liste aktualisieren
		
		$vl_area:=OBJECT_GetLongint("vl_current_area")
		pal_update_properties($vl_area)
		
		
End case 
