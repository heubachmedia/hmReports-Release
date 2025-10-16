//%attributes = {"invisible":true,"shared":true}
C_TEXT:C284($vt_subform)
C_LONGINT:C283($vl_left; $vl_top; $vl_right; $vl_bottom; $vl_area; $vl_area; $vl_height)

$vt_subform:=$1
$vl_area:=$2

If (Count parameters:C259>2)
	
	$vl_height:=$3
	
Else 
	
	$vl_left:=0
	$vl_top:=0
	$vl_right:=0
	$vl_bottom:=0
	OBJECT GET COORDINATES:C663(*; $vt_subform; $vl_left; $vl_top; $vl_right; $vl_bottom)
	
	$vl_height:=$vl_bottom-$vl_top
	
End if 

EXECUTE METHOD IN SUBFORM:C1085($vt_subform; "pal_update_palette_size"; *; $vl_height)
EXECUTE METHOD IN SUBFORM:C1085($vt_subform; "pal_update"; *; $vl_area; On Load:K2:1)
