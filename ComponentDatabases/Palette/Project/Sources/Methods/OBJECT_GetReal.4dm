//%attributes = {}
C_TEXT:C284($vt_object)
C_REAL:C285($vz_result)
C_POINTER:C301($vp_object)

$vt_object:=$1

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_object)

If (Not:C34(Is nil pointer:C315($vp_object)))
	$vz_result:=$vp_object->
Else 
	$vz_result:=0
End if 

$0:=$vz_result
