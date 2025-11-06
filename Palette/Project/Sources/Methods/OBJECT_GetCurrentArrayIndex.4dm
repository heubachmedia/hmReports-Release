//%attributes = {}
#DECLARE($vt_object : Text)->$vl_index : Integer

var $vp_object : Pointer

$vl_index:=0
$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_object)
//$vl_type:=Type($vp_object->)

If (Not:C34(Is nil pointer:C315($vp_object)))
	
	$vl_index:=$vp_object->
	
End if 
