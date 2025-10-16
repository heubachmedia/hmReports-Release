//%attributes = {}
C_LONGINT:C283($vl_area; $vl_unit)
C_TEXT:C284($vt_unit)

$vl_area:=$1

$vl_unit:=parse_GetReportPropertyLong($vl_area; hmRep_rprop_RulerUnit)

Case of 
	: ($vl_unit=1)
		$vt_unit:=Get localized string:C991("pixel")
		
	: ($vl_unit=2)
		$vt_unit:=Get localized string:C991("zoll")
		
	: ($vl_unit=3)
		$vt_unit:=Get localized string:C991("mm")
		
	Else 
		$vt_unit:=""
		
End case 

$0:=$vt_unit
