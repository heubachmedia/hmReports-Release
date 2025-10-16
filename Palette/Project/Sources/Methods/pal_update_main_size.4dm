//%attributes = {}
C_LONGINT:C283($vl_width; $vl_height; $vl_width_palette; $vl_height_palette)

$vl_width:=$1
$vl_height:=$2

$vl_width_palette:=400
$vl_height_palette:=300

OBJECT MOVE:C664(*; "hmReports_Pluginarea"; 0; 0; $vl_width-$vl_width_palette; $vl_height; *)

OBJECT MOVE:C664(*; "palette_subform"; $vl_width-$vl_width_palette; 0; $vl_width; $vl_height; *)

EXECUTE METHOD IN SUBFORM:C1085("palette_subform"; "pal_update_palette_size"; *; $vl_height)
