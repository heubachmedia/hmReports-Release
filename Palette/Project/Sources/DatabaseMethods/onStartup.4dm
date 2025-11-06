var $vl_error : Integer

If (Is compiled mode:C492)
	
	QUIT 4D:C291
	
Else 
	
	SET DATABASE PARAMETER:C642(Debug log recording:K37:34; 0)
	
	$vl_error:=hmRep_Register("")
	
End if 
