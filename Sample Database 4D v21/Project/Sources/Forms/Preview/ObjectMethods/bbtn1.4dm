If (Form event code:C388=On Clicked:K2:4)
	
	If (Form:C1466.currentpage<Form:C1466.pics.length)
		
		Form:C1466.currentpage:=Form:C1466.currentpage+1
		
		Form:C1466.preview:=Form:C1466.pics[Form:C1466.currentpage-1]
		Form:C1466.infotext:=String:C10(Form:C1466.currentpage)+"/"+String:C10(Form:C1466.pics.length)
		
	Else 
		
		BEEP:C151
		
	End if 
	
End if 
