//%attributes = {}
C_LONGINT:C283($vl_area; $vl_1; $vl_2)
C_TEXT:C284($vt_unit)

$vl_area:=$1

//Größe

$vl_1:=parse_GetPagePropertyLong($vl_area; hmRep_pprop_pagewidth)
$vl_2:=hmRep_Pixel To Rulerunit($vl_area; $vl_1)

OBJECT_SetRealAndRound("vz_rep_breite"; hmRep_Pixel To Rulerunit($vl_area; parse_GetPagePropertyLong($vl_area; hmRep_pprop_pagewidth)); 2)
OBJECT_SetRealAndRound("vz_rep_hoehe"; hmRep_Pixel To Rulerunit($vl_area; parse_GetPagePropertyLong($vl_area; hmRep_pprop_pageheight)); 2)

OBJECT_SetRealAndRound("vz_margin_left"; hmRep_Pixel To Rulerunit($vl_area; parse_GetPagePropertyLong($vl_area; hmRep_pprop_margin_left)); 2)
OBJECT_SetRealAndRound("vz_margin_top"; hmRep_Pixel To Rulerunit($vl_area; parse_GetPagePropertyLong($vl_area; hmRep_pprop_margin_top)); 2)
OBJECT_SetRealAndRound("vz_margin_right"; hmRep_Pixel To Rulerunit($vl_area; parse_GetPagePropertyLong($vl_area; hmRep_pprop_margin_right)); 2)
OBJECT_SetRealAndRound("vz_margin_bottom"; hmRep_Pixel To Rulerunit($vl_area; parse_GetPagePropertyLong($vl_area; hmRep_pprop_margin_bottom)); 2)

$vt_unit:=intern_GetUnitName($vl_area)
OBJECT_SetText("vt_rep_rulerunit1"; $vt_unit)
OBJECT_SetText("vt_rep_rulerunit2"; $vt_unit)
OBJECT_SetText("vt_rep_rulerunit3"; $vt_unit)
