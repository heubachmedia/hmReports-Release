If (Form event code:C388=On After Edit:K2:43) | (Form event code:C388=On Data Change:K2:15)
	hmRep_SET REPORT PROPERTY(Form:C1466.area; hmRep_rprop_name; 0; Get edited text:C655)
End if 
