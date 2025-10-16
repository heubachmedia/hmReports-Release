//%attributes = {}
C_LONGINT:C283($vl_ID; $vl_selector; $vl_prop_long; $vl_area)
C_TEXT:C284($vt_prop_text)

$vl_area:=$1
$vl_ID:=$2
$vl_selector:=$3

$vl_prop_long:=0
$vt_prop_text:=""
hmRep_GET VSTRUCTURE PROPERTY($vl_area; $vl_ID; $vl_selector; $vl_prop_long; $vt_prop_text)

$0:=$vt_prop_text
