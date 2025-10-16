//%attributes = {}
C_LONGINT:C283($i; $vl_pos1; $vl_pos2)
C_POINTER:C301($vp_objects; $vp_object_name; $vp_object_top)

$vl_pos1:=$1
$vl_pos2:=$2
$vp_objects:=$3

$vp_object_name:=OBJECT_GetPointer("tt_objects")
$vp_object_top:=OBJECT_GetPointer("tl_objects_top")

For ($i; 1; Size of array:C274($vp_object_name->))
	
	If ($vp_object_top->{$i}>=$vl_pos1) & ($vp_object_top->{$i}<=$vl_pos2)
		
		APPEND TO ARRAY:C911($vp_objects->; $vp_object_name->{$i})
		
	End if 
	
End for 
