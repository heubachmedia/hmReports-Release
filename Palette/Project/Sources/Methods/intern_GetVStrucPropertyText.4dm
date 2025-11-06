//%attributes = {}
#DECLARE($vl_area : Integer; $vl_ID : Integer; $vl_selector : Integer)->$vt_prop_text : Text

var $vl_prop_long : Integer

$vl_prop_long:=0
$vt_prop_text:=""
hmRep_GET VSTRUCTURE PROPERTY($vl_area; $vl_ID; $vl_selector; $vl_prop_long; $vt_prop_text)
