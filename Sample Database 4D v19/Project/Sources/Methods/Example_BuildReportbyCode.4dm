//%attributes = {}
C_LONGINT:C283($vl_area; $vl_result; $vl_detail_section_top; $vl_margin_top; $vl_object)
C_TEXT:C284($vt_value_text)

ALL RECORDS:C47([Customers:1])
ORDER BY:C49([Customers:1]; [Customers:1]Name:2; >)

$vl_area:=hmRep_New Offscreen Area(0; 0)

hmRep_SET SECTION HEIGHT($vl_area; hmRep_Section_Reportheader; 1; 0)
hmRep_SET SECTION HEIGHT($vl_area; hmRep_Section_Pageheader; 1; 10)
hmRep_SET SECTION HEIGHT($vl_area; hmRep_Section_Detailheader; 1; 20)
hmRep_SET SECTION HEIGHT($vl_area; hmRep_Section_Detail; 1; 20)
hmRep_SET SECTION HEIGHT($vl_area; hmRep_Section_Detailfooter; 1; 0)
hmRep_SET SECTION HEIGHT($vl_area; hmRep_Section_Pagefooter; 1; 20)
hmRep_SET SECTION HEIGHT($vl_area; hmRep_Section_Reportfooter; 1; 0)

hmRep_SET SECTION ITERATION($vl_area; 1; hmRep_Iteration_Table; Table:C252(->[Customers:1]); "")
hmRep_SET SECTION PROPERTY($vl_area; hmRep_Section_Detailheader; 1; hmRep_sprop_PrintAfterPageBreak; 1; "")

$vl_margin_top:=0
$vt_value_text:=""

hmRep_GET PAGE PROPERTY($vl_area; 1; hmRep_pprop_margin_top; $vl_margin_top; $vt_value_text)

$vl_detail_section_top:=10+20+$vl_margin_top

$vl_object:=hmRep_Create Text($vl_area; 20; $vl_detail_section_top-20; 120; $vl_detail_section_top; Field name:C257(->[Customers:1]Name:2))  //Column name
hmRep_SET OBJECT PROPERTY($vl_area; $vl_object; hmRep_oprop_Fontstyle; Bold:K14:2; "")

$vl_object:=hmRep_Create Text($vl_area; 20; $vl_detail_section_top; 120; $vl_detail_section_top+20; "")  //Data field
hmRep_SET OBJECT DATA($vl_area; $vl_object; hmRep_ObjData_4DInternal; ""; Table name:C256(->[Customers:1]); Field name:C257(->[Customers:1]Name:2); ""; 0)

$vl_result:=hmRep_Print($vl_area; 3)

hmRep_DELETE OFFSCREEN AREA($vl_area)
