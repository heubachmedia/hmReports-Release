var $i; $vl_layerID; $vl_ref : Integer
var $vo_obj : cs:C1710.object

If (Form event code:C388=On Selection Change:K2:29)
	
	$vl_layerID:=hmRep_Get Current Layer(Form:C1466.area)
	
	ARRAY LONGINT:C221($tl_refs; 0)
	$vl_ref:=Selected list items:C379(*; "vl_hl_objectlist"; $tl_refs; *)
	
	For ($i; Size of array:C274($tl_refs); 1; -1)
		
		$vo_obj:=cs:C1710.object.new(Form:C1466.area; $tl_refs{$i})
		
		If ($vo_obj.layer#$vl_layerID)
			DELETE FROM ARRAY:C228($tl_refs; $i)
		End if 
		
	End for 
	
	hmRep_SELECT OBJECTS(Form:C1466.area; $tl_refs; 0)
	
	Form:C1466.updateProperties()
	
End if 
