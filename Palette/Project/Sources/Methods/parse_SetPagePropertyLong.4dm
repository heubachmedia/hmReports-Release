//%attributes = {}
C_LONGINT:C283($vl_area; $vl_selector; $vl_page; $vl_value)

$vl_area:=$1
$vl_selector:=$2
$vl_value:=$3

$vl_page:=hmRep_Get Current Page($vl_area)

hmRep_SET PAGE PROPERTY($vl_area; $vl_page; $vl_selector; $vl_value; "")

