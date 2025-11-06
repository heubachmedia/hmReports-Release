//%attributes = {"preemptive":"capable"}
#DECLARE($vl_area : Integer; $vl_selector : Integer)->$vt_text : Text

var $vl_temp : Integer

$vt_text:=""
$vl_temp:=0
hmRep_GET REPORT PROPERTY($vl_area; $vl_selector; $vl_temp; $vt_text)
