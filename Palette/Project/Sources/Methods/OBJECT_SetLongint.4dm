//%attributes = {}
//qqq;a;PM;OBJECT_SetLongint;C;0001

//Created: C 10.01.11 16:25   projektis 3.2 a 01

C_TEXT:C284($vt_object)
C_LONGINT:C283($vl_value)
C_POINTER:C301($vp_object)

$vt_object:=$1
$vl_value:=$2

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_object)

If (Not:C34(Is nil pointer:C315($vp_object)))
	$vp_object->:=$vl_value
End if 
