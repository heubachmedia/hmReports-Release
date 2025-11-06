//%attributes = {"preemptive":"capable"}
#DECLARE($vl_area : Integer; $vl_selector : Integer)->$vl_temp : Integer

var $vt_text : Text

$vt_text:=""
$vl_temp:=0
hmRep_GET REPORT PROPERTY($vl_area; $vl_selector; $vl_temp; $vt_text)
