//%attributes = {}
#DECLARE($vl_area : Integer; $vl_event : Integer)->$vl_result : Integer

$vl_result:=0

Case of 
	: ($vl_event=hmRep_OnOutsideDrop)
		hmRep_Palette_drop($vl_area)
		
End case 
