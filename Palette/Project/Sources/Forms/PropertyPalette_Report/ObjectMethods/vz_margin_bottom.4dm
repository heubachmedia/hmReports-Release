var $vz_value : Real

If (Form event code:C388=On Data Change:K2:15)
	
	$vz_value:=hmRep_Rulerunit To Pixel(Form:C1466.area; OBJECT Get value:C1743("vz_margin_bottom"))
	Form:C1466.setPagePropertyLong(hmRep_pprop_margin_bottom; $vz_value)
	Form:C1466.setSize()  //Init
	
End if 
