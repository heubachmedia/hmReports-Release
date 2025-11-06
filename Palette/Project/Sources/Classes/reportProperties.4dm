property area : Integer

Class constructor($vl_area : Integer; $vt_subform : Text; $vl_height : Integer)
	This:C1470.area:=$vl_area
	
Function update()
	var $vl_pages; $vl_current_page : Integer
	
	OBJECT SET VALUE:C1742("vt_rep_reportname"; parse_GetReportPropertyText(This:C1470.area; hmRep_rprop_name))
	OBJECT SET VALUE:C1742("vt_rep_uuid"; parse_GetReportPropertyText(This:C1470.area; hmRep_rprop_UUID))
	
	This:C1470.setSize()
	
	OBJECT SET VALUE:C1742("vl_pagesetupsync"; parse_GetReportPropertyLong(This:C1470.area; hmRep_rprop_PageSetupSync))
	
	//Seite
	
	OBJECT SET VALUE:C1742("vl_printasreport"; This:C1470.getPagePropertyLong(hmRep_pprop_PrintAsReport))
	OBJECT SET VALUE:C1742("vl_seitenrahmen"; This:C1470.getPagePropertyLong(hmRep_pprop_Show_PageArea))
	OBJECT SET VALUE:C1742("vl_section_layout"; This:C1470.getPagePropertyLong(hmRep_pprop_Show_Sections))
	OBJECT SET VALUE:C1742("vl_section_captions"; This:C1470.getPagePropertyLong(hmRep_pprop_Show_SectionCapt))
	OBJECT SET VALUE:C1742("vl_section_lines"; This:C1470.getPagePropertyLong(hmRep_pprop_Show_SectionLines))
	OBJECT SET VALUE:C1742("vl_publish_as_subreport"; This:C1470.getPagePropertyLong(hmRep_pprop_PublishAsSubreport))
	
	$vl_pages:=hmRep_Count Pages(This:C1470.area)
	$vl_current_page:=hmRep_Get Current Page(This:C1470.area)
	
	OBJECT SET ENABLED:C1123(*; "vl_previous_page"; $vl_current_page>1)
	OBJECT SET ENABLED:C1123(*; "vl_next_page"; $vl_current_page<$vl_pages)
	
	OBJECT SET VALUE:C1742("vt_rep_page"; String:C10($vl_current_page)+"/"+String:C10($vl_pages))
	
Function setSize()
	var $vl_1; $vl_2 : Integer
	var $vt_unit : Text
	
	//Größe
	
	$vl_1:=This:C1470.getPagePropertyLong(hmRep_pprop_pagewidth)
	$vl_2:=hmRep_Pixel To Rulerunit(This:C1470.area; $vl_1)
	
	OBJECT_SetRealAndRound("vz_rep_breite"; hmRep_Pixel To Rulerunit(This:C1470.area; This:C1470.getPagePropertyLong(hmRep_pprop_pagewidth)); 2)
	OBJECT_SetRealAndRound("vz_rep_hoehe"; hmRep_Pixel To Rulerunit(This:C1470.area; This:C1470.getPagePropertyLong(hmRep_pprop_pageheight)); 2)
	
	OBJECT_SetRealAndRound("vz_margin_left"; hmRep_Pixel To Rulerunit(This:C1470.area; This:C1470.getPagePropertyLong(hmRep_pprop_margin_left)); 2)
	OBJECT_SetRealAndRound("vz_margin_top"; hmRep_Pixel To Rulerunit(This:C1470.area; This:C1470.getPagePropertyLong(hmRep_pprop_margin_top)); 2)
	OBJECT_SetRealAndRound("vz_margin_right"; hmRep_Pixel To Rulerunit(This:C1470.area; This:C1470.getPagePropertyLong(hmRep_pprop_margin_right)); 2)
	OBJECT_SetRealAndRound("vz_margin_bottom"; hmRep_Pixel To Rulerunit(This:C1470.area; This:C1470.getPagePropertyLong(hmRep_pprop_margin_bottom)); 2)
	
	$vt_unit:=intern_GetUnitName(This:C1470.area)
	OBJECT SET VALUE:C1742("vt_rep_rulerunit1"; $vt_unit)
	OBJECT SET VALUE:C1742("vt_rep_rulerunit2"; $vt_unit)
	OBJECT SET VALUE:C1742("vt_rep_rulerunit3"; $vt_unit)
	
Function getPagePropertyLong($vl_selector : Integer)->$vl_temp : Integer
	var $vl_page : Integer
	var $vt_text : Text
	
	$vl_page:=hmRep_Get Current Page(This:C1470.area)
	
	$vt_text:=""
	$vl_temp:=0
	hmRep_GET PAGE PROPERTY(This:C1470.area; $vl_page; $vl_selector; $vl_temp; $vt_text)
	
Function setPagePropertyLong($vl_selector : Integer; $vl_value : Integer)
	var $vl_page : Integer
	
	$vl_page:=hmRep_Get Current Page(This:C1470.area)
	
	hmRep_SET PAGE PROPERTY(This:C1470.area; $vl_page; $vl_selector; $vl_value; "")
	
Function updateFromOutside()
	EXECUTE METHOD IN SUBFORM:C1085("subform_report_properties"; Formula:C1597($1.update()); *; This:C1470)
	