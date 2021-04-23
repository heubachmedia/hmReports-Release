//%attributes = {"invisible":true,"shared":true}
C_TEXT:C284($vt_subform)
C_LONGINT:C283($vl_area; $vl_formevent)

$vt_subform:=$1
$vl_area:=$2
$vl_formevent:=Form event code:C388

If ($vl_formevent=On Load:K2:1) | ($vl_formevent=On Clicked:K2:4) | ($vl_formevent=On Double Clicked:K2:5) | ($vl_formevent=On Plug in Area:K2:16) | ($vl_formevent=On Timer:K2:25) | ($vl_formevent=0)
	
	EXECUTE METHOD IN SUBFORM:C1085($vt_subform; "pal_update"; *; $vl_area; $vl_formevent)
	
End if 
