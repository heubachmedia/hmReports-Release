//%attributes = {}
//qqq;a;PM;OBJECT_GetCurrentArrayIndex;C;0001

//Created: C 18.04.11 15:18   projektis 3.2 r 03

C_TEXT:C284($vt_object)
C_POINTER:C301($vp_object)
C_LONGINT:C283($vl_index)

$vt_object:=$1

$vl_index:=0
$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_object)
//$vl_type:=Type($vp_object->)

If (Not:C34(Is nil pointer:C315($vp_object)))
	
	$vl_index:=$vp_object->
	
End if 

$0:=$vl_index
