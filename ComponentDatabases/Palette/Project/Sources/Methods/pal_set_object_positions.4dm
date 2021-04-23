//%attributes = {}
C_LONGINT:C283($i; $vl_area; $vl_move_offset)

$vl_area:=$1

ARRAY TEXT:C222($tt_areas; 6)
ARRAY INTEGER:C220($tg_area_pos1; 6)
ARRAY INTEGER:C220($tg_area_pos2; 6)

$tt_areas{1}:="klapp_allgemein"
$tg_area_pos1{1}:=20
$tg_area_pos2{1}:=90

$tt_areas{2}:="klapp_groesse"
$tg_area_pos1{2}:=110
$tg_area_pos2{2}:=160

$tt_areas{3}:="klapp_optionen"
$tg_area_pos1{3}:=180
$tg_area_pos2{3}:=350

$tt_areas{4}:="klapp_rahmen"
$tg_area_pos1{4}:=370
$tg_area_pos2{4}:=540

$tt_areas{5}:="klapp_text"
$tg_area_pos1{5}:=560
$tg_area_pos2{5}:=790

$tt_areas{6}:="klapp_unterbericht"
$tg_area_pos1{6}:=810
$tg_area_pos2{6}:=860

$vl_move_offset:=0

For ($i; 1; Size of array:C274($tt_areas))
	
	ARRAY TEXT:C222($tt_objects; 0)
	pal_get_objects_with_position($tg_area_pos1{$i}; $tg_area_pos2{$i}-1; ->$tt_objects)
	
	pal_move_objects($tg_area_pos1{$i}-20; $tg_area_pos2{$i}; $vl_move_offset)
	
	If (OBJECT_GetLongint($tt_areas{$i})=1)
		
		pal_set_objects_visible(->$tt_objects; True:C214)
		
	Else 
		
		pal_set_objects_visible(->$tt_objects; False:C215)
		
		$vl_move_offset:=$vl_move_offset+($tg_area_pos2{$i}-$tg_area_pos1{$i})
		
	End if 
	
End for 

pal_update_object($vl_area)
