var $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue; $vl_color; $vl_newcolor : Integer

If (Form event code:C388=On Clicked:K2:4)
	
	If (Form:C1466.listCurrent#Null:C1517)
		
		$vl_object_framecolor_red:=0
		$vl_object_framecolor_green:=0
		$vl_object_framecolor_blue:=0
		hmRep_GET COLOR(Form:C1466.area; hmRep_clr_LayerColor; Form:C1466.listCurrent.id; $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue)
		
		$vl_color:=intern_Color16BitTo8Bit($vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue)
		
		$vl_newcolor:=Select RGB color:C956($vl_color)
		
		If (OK=1)
			
			Form:C1466.listCurrent.color:=$vl_newcolor
			intern_COLOR8BITTO16BIT($vl_newcolor; ->$vl_object_framecolor_red; ->$vl_object_framecolor_green; ->$vl_object_framecolor_blue)
			
			hmRep_SET COLOR(Form:C1466.area; hmRep_clr_LayerColor; Form:C1466.listCurrent.id; $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue)
			
		End if 
		
	End if 
	
	
End if 
