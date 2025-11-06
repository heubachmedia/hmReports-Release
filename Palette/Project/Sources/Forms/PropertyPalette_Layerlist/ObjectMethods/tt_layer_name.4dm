Case of 
	: (Form event code:C388=On Before Data Entry:K2:39)
		
		If (Form:C1466.listCurrent#Null:C1517)
			Form:C1466.listCurrent.name:=Form:C1466.listCurrent.realName
		End if 
		
	: (Form event code:C388=On Losing Focus:K2:8)
		
		If (Form:C1466.listCurrent#Null:C1517)
			
			hmRep_SET LAYER PROPERTY(Form:C1466.area; Form:C1466.listCurrent.id; hmRep_lprop_Name; 0; Form:C1466.listCurrent.name)
			Form:C1466.listCurrent.realName:=Form:C1466.listCurrent.name
			
			If (hmRep_Get Current Layer(Form:C1466.area)=Form:C1466.listCurrent.id)
				Form:C1466.listCurrent.name:=Form:C1466.listCurrent.name+" ("+Localized string:C991("aktuelle_ebene")+")"
			End if 
			
			Form:C1466.list:=Form:C1466.list
			
		End if 
		
End case 
