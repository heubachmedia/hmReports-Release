//%attributes = {}
#DECLARE($vl_area : Integer; $vl_event : Integer; $vt_report : Text)->$vl_result : Integer

Case of 
	: ($vl_event=hmRep_OnError)
		
	: ($vl_event=hmRep_OnCreateNewReport)
		
	: ($vl_event=hmRep_OnOutsideDrop)
		hmRep_Palette_drop($vl_area)
		
End case 
