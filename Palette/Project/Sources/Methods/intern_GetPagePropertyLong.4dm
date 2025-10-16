//%attributes = {}
C_LONGINT:C283($vl_area; $vl_pageNo; $vl_selector)
C_REAL:C285($vz_prop_real)
C_TEXT:C284($vt_prop_text)

$vl_area:=$1
$vl_pageNo:=$2
$vl_selector:=$3

$vz_prop_real:=0
$vt_prop_text:=""
hmRep_GET PAGE PROPERTY($vl_area; $vl_pageNo; $vl_selector; $vz_prop_real; $vt_prop_text)

$0:=$vz_prop_real
