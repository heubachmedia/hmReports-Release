//%attributes = {}
C_LONGINT:C283($i; $vl_pos; $vl_top_for_move; $vl_top_for_move2; $vl_move_offset; $vl_left; $vl_top; $vl_right; $vl_bottom; $vl_hoehe)
C_POINTER:C301($vp_object_name; $vp_object_top)

$vl_top_for_move:=$1
$vl_top_for_move2:=$2
$vl_move_offset:=$3

$vp_object_name:=OBJECT_GetPointer("tt_objects")
$vp_object_top:=OBJECT_GetPointer("tl_objects_top")

ARRAY TEXT:C222($tt_objects; 0)
pal_get_objects_with_position($vl_top_for_move; $vl_top_for_move2; ->$tt_objects)

For ($i; 1; Size of array:C274($tt_objects))
	
	$vl_pos:=Find in array:C230($vp_object_name->; $tt_objects{$i})
	
	If ($vl_pos>0)
		
		$vl_left:=0
		$vl_top:=0
		$vl_right:=0
		$vl_bottom:=0
		
		OBJECT GET COORDINATES:C663(*; $tt_objects{$i}; $vl_left; $vl_top; $vl_right; $vl_bottom)
		
		$vl_hoehe:=$vl_bottom-$vl_top
		
		OBJECT MOVE:C664(*; $tt_objects{$i}; $vl_left; $vp_object_top->{$vl_pos}-$vl_move_offset; $vl_right; $vp_object_top->{$vl_pos}+$vl_hoehe-$vl_move_offset; *)
		
	End if 
	
End for 
