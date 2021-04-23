//%attributes = {}
C_LONGINT:C283($vl_area; $vl_event; $vl_result)
C_TEXT:C284($vt_report)

$vl_area:=$1
$vl_event:=$2
$vt_report:=$3

Case of 
	: ($vl_event=hmRep_OnError)
		
	: ($vl_event=hmRep_OnCreateNewReport)
		
	: ($vl_event=hmRep_OnOutsideDrop)
		
		hmRep_Palette_drop($vl_area)
		
End case 

$0:=$vl_result
