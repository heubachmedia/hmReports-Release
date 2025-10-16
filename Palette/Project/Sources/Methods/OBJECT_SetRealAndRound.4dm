//%attributes = {}
C_TEXT:C284($vt_object)
C_REAL:C285($vz_value)
C_POINTER:C301($vp_object)
C_LONGINT:C283($vl_stellen)

$vt_object:=$1
$vz_value:=$2
$vl_stellen:=$3

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_object)

If (Not:C34(Is nil pointer:C315($vp_object)))
	$vp_object->:=Round:C94($vz_value; $vl_stellen)
End if 
