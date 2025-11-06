//%attributes = {"preemptive":"capable"}
#DECLARE($vl_area : Integer)->$vt_unit : Text

var $vl_unit : Integer

$vl_unit:=parse_GetReportPropertyLong($vl_area; hmRep_rprop_RulerUnit)

Case of 
	: ($vl_unit=1)
		$vt_unit:=Localized string:C991("pixel")
		
	: ($vl_unit=2)
		$vt_unit:=Localized string:C991("zoll")
		
	: ($vl_unit=3)
		$vt_unit:=Localized string:C991("mm")
		
	Else 
		$vt_unit:=""
		
End case 
