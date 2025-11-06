If (Form event code:C388=On Double Clicked:K2:5)
	
	If (Form:C1466.listCurrent#Null:C1517)
		
		hmRep_SET CURRENT LAYER(Form:C1466.area; Form:C1466.listCurrent.id)
		Form:C1466.update()
		
	End if 
	
End if 
