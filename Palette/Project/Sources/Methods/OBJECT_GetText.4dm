//%attributes = {}
//qqq;a;PM;OBJECT_GetText;C;0001

//Created: C 10.02.11 11:51   projektis 3.2 a 04

C_TEXT:C284($vt_object)
C_TEXT:C284($vt_value)
C_POINTER:C301($vp_object)

$vt_object:=$1

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_object)

If (Not:C34(Is nil pointer:C315($vp_object)))
	
	If (Count parameters:C259>1)
		$vt_value:=$vp_object->{$2}
	Else 
		$vt_value:=$vp_object->
	End if 
	
Else 
	
	$vt_value:=""
	
End if 

$0:=$vt_value
