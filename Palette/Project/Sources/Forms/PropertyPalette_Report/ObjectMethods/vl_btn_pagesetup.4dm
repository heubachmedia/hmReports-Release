var $vl_result : Integer

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_result:=hmRep_Page Setup(Form:C1466.area; 1)
	
	Form:C1466.setSize()
	
End if 
