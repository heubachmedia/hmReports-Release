//%attributes = {}
C_LONGINT:C283($vl_area; $vl_temp; $vl_selector; $vl_page)
C_TEXT:C284($vt_text)

$vl_area:=$1
$vl_selector:=$2

$vl_page:=hmRep_Get Current Page($vl_area)

$vt_text:=""
$vl_temp:=0
hmRep_GET PAGE PROPERTY($vl_area; $vl_page; $vl_selector; $vl_temp; $vt_text)

$0:=$vl_temp
