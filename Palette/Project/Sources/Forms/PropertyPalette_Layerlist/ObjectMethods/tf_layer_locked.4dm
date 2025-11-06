If (Form event code:C388=On Data Change:K2:15)
	
	If (Form:C1466.listCurrent#Null:C1517)
		
		hmRep_SET LAYER PROPERTY(Form:C1466.area; Form:C1466.listCurrent.id; hmRep_lprop_LockObjects; Num:C11(Form:C1466.listCurrent.locked); "")
		
	End if 
	
End if 
