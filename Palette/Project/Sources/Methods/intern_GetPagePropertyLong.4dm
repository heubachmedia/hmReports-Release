//%attributes = {"preemptive":"capable"}
#DECLARE($vl_area : Integer; $vl_pageNo : Integer; $vl_selector : Integer)->$vz_prop_real : Real

var $vt_prop_text : Text

$vz_prop_real:=0
$vt_prop_text:=""
hmRep_GET PAGE PROPERTY($vl_area; $vl_pageNo; $vl_selector; $vz_prop_real; $vt_prop_text)
