//%attributes = {}
C_LONGINT:C283($vl_area; $vl_pages; $vl_current_page)

$vl_area:=$1

OBJECT_SetLongint("vl_current_area"; $vl_area)

OBJECT_SetText("vt_rep_reportname"; parse_GetReportPropertyText($vl_area; hmRep_rprop_name))
OBJECT_SetText("vt_rep_uuid"; parse_GetReportPropertyText($vl_area; hmRep_rprop_UUID))

pal_update_page_SetSize($vl_area)

OBJECT_SetLongint("vl_pagesetupsync"; parse_GetReportPropertyLong($vl_area; hmRep_rprop_PageSetupSync))

//Seite

OBJECT_SetLongint("vl_printasreport"; parse_GetPagePropertyLong($vl_area; hmRep_pprop_PrintAsReport))
OBJECT_SetLongint("vl_seitenrahmen"; parse_GetPagePropertyLong($vl_area; hmRep_pprop_Show_PageArea))
OBJECT_SetLongint("vl_section_layout"; parse_GetPagePropertyLong($vl_area; hmRep_pprop_Show_Sections))
OBJECT_SetLongint("vl_section_captions"; parse_GetPagePropertyLong($vl_area; hmRep_pprop_Show_SectionCapt))
OBJECT_SetLongint("vl_section_lines"; parse_GetPagePropertyLong($vl_area; hmRep_pprop_Show_SectionLines))
OBJECT_SetLongint("vl_publish_as_subreport"; parse_GetPagePropertyLong($vl_area; hmRep_pprop_PublishAsSubreport))

$vl_pages:=hmRep_Count Pages($vl_area)
$vl_current_page:=hmRep_Get Current Page($vl_area)

OBJECT SET ENABLED:C1123(*; "vl_previous_page"; $vl_current_page>1)
OBJECT SET ENABLED:C1123(*; "vl_next_page"; $vl_current_page<$vl_pages)

OBJECT_SetText("vt_rep_page"; String:C10($vl_current_page)+"/"+String:C10($vl_pages))
