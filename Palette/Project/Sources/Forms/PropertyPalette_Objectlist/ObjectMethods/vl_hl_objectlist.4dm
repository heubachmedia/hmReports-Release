C_LONGINT:C283($i; $vl_area; $vl_layerID; $vl_ref)

If (Form event code:C388=On Selection Change:K2:29)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	$vl_layerID:=hmRep_Get Current Layer($vl_area)
	
	ARRAY LONGINT:C221($tl_refs; 0)
	$vl_ref:=Selected list items:C379(*; "vl_hl_objectlist"; $tl_refs; *)
	
	For ($i; Size of array:C274($tl_refs); 1; -1)
		
		If (intern_GetObjectPropertyLong($vl_area; $tl_refs{$i}; hmRep_oprop_LayerID)#$vl_layerID)
			DELETE FROM ARRAY:C228($tl_refs; $i)
		End if 
		
	End for 
	
	hmRep_SELECT OBJECTS($vl_area; $tl_refs; 0)
	
	CALL SUBFORM CONTAINER:C1086(-2002)
	
End if 
