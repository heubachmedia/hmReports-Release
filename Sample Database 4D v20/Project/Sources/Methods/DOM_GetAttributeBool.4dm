//%attributes = {}
C_TEXT:C284($vt_area; $vt_attribute; $vt_result)

$vt_area:=$1
$vt_attribute:=$2

$vt_result:=""
DOM GET XML ATTRIBUTE BY NAME:C728($vt_area; $vt_attribute; $vt_result)

$0:=$vt_result="true"
