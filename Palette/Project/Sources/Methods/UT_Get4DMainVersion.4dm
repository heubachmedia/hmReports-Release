//%attributes = {"preemptive":"capable"}
#DECLARE()->$vl_mainversion : Integer

var $vt_text : Text

$vt_text:=Application version:C493(*)

return (Num:C11(Substring:C12($vt_text; 5; 2)))
