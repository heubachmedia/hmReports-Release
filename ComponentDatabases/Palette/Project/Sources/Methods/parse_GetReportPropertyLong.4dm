//%attributes = {}
C_LONGINT:C283($vl_area; $vl_temp; $vl_selector)
C_TEXT:C284($vt_text)

$vl_area:=$1
$vl_selector:=$2

$vt_text:=""
$vl_temp:=0
hmRep_GET REPORT PROPERTY($vl_area; $vl_selector; $vl_temp; $vt_text)

$0:=$vl_temp
