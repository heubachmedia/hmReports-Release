//%attributes = {}
C_POINTER:C301($vp_objects)
C_BOOLEAN:C305($vf_visible)
C_LONGINT:C283($i)

$vp_objects:=$1
$vf_visible:=$2

For ($i; 1; Size of array:C274($vp_objects->))
	
	OBJECT SET VISIBLE:C603(*; $vp_objects->{$i}; $vf_visible)
	
End for 
