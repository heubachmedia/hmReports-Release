//%attributes = {}
//qqq;a;PM;OBJECT_SetReal;C;0001

//Created: C 10.01.11 16:27   projektis 3.2 a 01

C_TEXT:C284($vt_object)
C_REAL:C285($vz_value)
C_POINTER:C301($vp_object)

$vt_object:=$1
$vz_value:=$2

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_object)

If (Not:C34(Is nil pointer:C315($vp_object)))
	$vp_object->:=$vz_value
End if 
