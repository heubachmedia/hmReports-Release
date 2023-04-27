//%attributes = {}
C_TEXT:C284($vt_area; $vt_attribute)
C_REAL:C285($vz_result)

$vt_area:=$1
$vt_attribute:=$2

$vz_result:=0
DOM GET XML ATTRIBUTE BY NAME:C728($vt_area; $vt_attribute; $vz_result)

If (OK=0)
	$vz_result:=0
End if 

$0:=$vz_result
