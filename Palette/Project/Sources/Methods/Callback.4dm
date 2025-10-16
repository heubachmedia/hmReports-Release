//%attributes = {}
C_LONGINT:C283($vl_area; $vl_event; $vl_result)

$vl_area:=$1
$vl_event:=$2

$vl_result:=0

Case of 
	: ($vl_event=hmRep_OnOutsideDrop)
		
		hmRep_Palette_drop($vl_area)
		
End case 

$0:=$vl_result
