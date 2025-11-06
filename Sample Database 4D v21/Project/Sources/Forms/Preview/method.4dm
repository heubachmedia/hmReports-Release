Case of 
	: (Form event code:C388=On Load:K2:1)
		Form:C1466.preview:=Form:C1466.pics[Form:C1466.currentpage-1]
		Form:C1466.infotext:=String:C10(Form:C1466.currentpage)+"/"+String:C10(Form:C1466.pics.length)
		
	: (Form event code:C388=On Close Box:K2:21)
		CANCEL:C270
		
End case 
