//%attributes = {}
C_LONGINT:C283($i; $vl_area; $vl_ruler_unit; $vl_height; $vl_level; $vl_pos; $vl_pos1; $vl_pos2; $vl_table_no; $vl_field_no)
C_REAL:C285($vz_width; $vz_height; $vz_top_offset)
C_TEXT:C284($vt_path; $vt_method; $vt_xml; $vt_name; $vt_report_uuid; $vt_xml_editor; $vt_xml_section; $vt_breakOnField; $vt_tablename; $vt_fieldname)
C_BOOLEAN:C305($vf_is_report; $vf_first)
C_TIME:C306($vu_ref)

$vt_path:=""
$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->

If (Length:C16($vt_path)=0)
	
	$vu_ref:=Open document:C264(""; Get pathname:K24:6)
	
	If (OK=1)
		$vt_path:=document
	End if 
	
End if 

If (Test path name:C476($vt_path)=Is a document:K24:1)
	
	$vt_method:=Method called on error:C704
	ON ERR CALL:C155("PP_Error")
	
	$vt_xml:=DOM Parse XML source:C719($vt_path)
	
	If (OK=1)
		
		$vz_width:=DOM_GetAttributeReal($vt_xml; "pageWidth")
		$vz_height:=DOM_GetAttributeReal($vt_xml; "pageHeight")
		$vt_name:=DOM_GetAttributeText($vt_xml; "name")
		
		$vt_report_uuid:=hmRep_Create Report($vl_area; $vz_width; $vz_height; $vt_name)
		hmRep_SET CURRENT REPORT($vl_area; $vt_report_uuid)
		
		//=================================================================
		//Report properties
		
		$vt_xml_editor:=DOM Find XML element:C864($vt_xml; "Report/Editor")
		
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowObjectBounds; DOM_GetAttributeReal($vt_xml_editor; "showObjBorders"); "")
		
		$vl_ruler_unit:=DOM_GetAttributeReal($vt_xml_editor; "rulerUnits")
		
		Case of 
			: ($vl_ruler_unit=1)  //points
				hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_RulerUnit; 1; "")
				
			: ($vl_ruler_unit=2)  //mm
				hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_RulerUnit; 3; "")
				
			: ($vl_ruler_unit=3)  //inch
				hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_RulerUnit; 2; "")
				
		End case 
		
		If (DOM_GetAttributeReal($vt_xml; "simple")=1)
			
			hmRep_SET PAGE PROPERTY($vl_area; 1; hmRep_pprop_Show_SectionCapt; 0; "")
			hmRep_SET PAGE PROPERTY($vl_area; 1; hmRep_pprop_Show_SectionLines; 0; "")
			hmRep_SET PAGE PROPERTY($vl_area; 1; hmRep_pprop_Show_Sections; 0; "")
			hmRep_SET PAGE PROPERTY($vl_area; 1; hmRep_pprop_PrintAsReport; 0; "")
			
			$vf_is_report:=False:C215
			
		Else 
			
			$vf_is_report:=True:C214
			
		End if 
		
		ARRAY REAL:C219($tz_pageMargins; 0)
		PP_GetBounds($vt_xml; "pageMargins"; ->$tz_pageMargins)
		
		hmRep_SET PAGE PROPERTY($vl_area; 1; hmRep_pprop_margin_left; $tz_pageMargins{1}; "")
		hmRep_SET PAGE PROPERTY($vl_area; 1; hmRep_pprop_margin_top; $tz_pageMargins{2}; "")
		hmRep_SET PAGE PROPERTY($vl_area; 1; hmRep_pprop_margin_right; $tz_pageMargins{3}; "")
		hmRep_SET PAGE PROPERTY($vl_area; 1; hmRep_pprop_margin_bottom; $tz_pageMargins{4}; "")
		
		//=================================================================
		
		If ($vf_is_report)
			
			For ($i; 1; 8)
				
				hmRep_SET SECTION HEIGHT($vl_area; $i; 1; 0)
				hmRep_SET SECTION PROPERTY($vl_area; $i; 1; hmRep_sprop_Use; 0; "")
				hmRep_SET SECTION PROPERTY($vl_area; $i; 1; hmRep_sprop_PrintOnReport; 0; "")
				
			End for 
			
			ARRAY TEXT:C222($tt_sections; 5)
			ARRAY LONGINT:C221($tl_sections_types; 5)
			$tt_sections{1}:="Header"
			$tl_sections_types{1}:=hmRep_Section_Pageheader
			$tt_sections{2}:="BreakHeader"
			$tl_sections_types{2}:=hmRep_Section_Detailheader
			$tt_sections{3}:="Body"
			$tl_sections_types{3}:=hmRep_Section_Detail
			$tt_sections{4}:="BreakFooter"
			$tl_sections_types{4}:=hmRep_Section_Detailfooter
			$tt_sections{5}:="Footer"
			$tl_sections_types{5}:=hmRep_Section_Pagefooter
			
			$vz_top_offset:=$tz_pageMargins{2}
			$vz_top_offset:=0
			
			$vf_first:=True:C214
			
			ARRAY LONGINT:C221($tl_element_types; 0)
			ARRAY TEXT:C222($tt_element_ids; 0)
			
			DOM GET XML CHILD NODES:C1081($vt_xml; $tl_element_types; $tt_element_ids)
			
			For ($i; 1; Size of array:C274($tl_element_types))
				
				If ($tl_element_types{$i}=XML ELEMENT:K45:20)
					
					$vt_name:=""
					DOM GET XML ELEMENT NAME:C730($tt_element_ids{$i}; $vt_name)
					
					$vl_pos:=Find in array:C230($tt_sections; $vt_name)
					
					If ($vl_pos>0)
						
						$vl_height:=DOM_GetAttributeReal($tt_element_ids{$i}; "height")
						$vl_level:=DOM_GetAttributeReal($tt_element_ids{$i}; "level")
						$vt_name:=DOM_GetAttributeText($tt_element_ids{$i}; "name")
						$vt_breakOnField:=DOM_GetAttributeText($tt_element_ids{$i}; "breakOnField")
						
						If ($vl_level=0)
							$vl_level:=1
						End if 
						
						If ($vl_level>1)
							$vl_level:=$vl_level-1
						End if 
						
						If ($vf_first)
							
							$vl_height:=$vl_height-$tz_pageMargins{2}
							If ($vl_height<0)
								$vl_height:=0
							End if 
							
						End if 
						
						If ($vl_level>1)
							
							hmRep_SET SECTION COUNT($vl_area; $tl_sections_types{$vl_pos}; $vl_level)
							
						End if 
						
						hmRep_SET SECTION HEIGHT($vl_area; $tl_sections_types{$vl_pos}; $vl_level; $vl_height)
						hmRep_SET SECTION PROPERTY($vl_area; $tl_sections_types{$vl_pos}; $vl_level; hmRep_sprop_Name; 0; $vt_name)
						hmRep_SET SECTION PROPERTY($vl_area; $tl_sections_types{$vl_pos}; $vl_level; hmRep_sprop_Use; 1; "")
						hmRep_SET SECTION PROPERTY($vl_area; $tl_sections_types{$vl_pos}; $vl_level; hmRep_sprop_PrintOnReport; 1; "")
						
						If (Length:C16($vt_breakOnField)>0)
							
							hmRep_SET SECTION PROPERTY($vl_area; $tl_sections_types{$vl_pos}; $vl_level; hmRep_sprop_VisibleOption; hmRep_svisible_ValueChanges; "")
							hmRep_SET SECTION PROPERTY($vl_area; $tl_sections_types{$vl_pos}; $vl_level; hmRep_sprop_Object; 1; "")
							
							$vl_pos1:=Position:C15("["; $vt_breakOnField)
							$vl_pos2:=Position:C15("]"; $vt_breakOnField)
							
							$vt_tablename:=Substring:C12($vt_breakOnField; $vl_pos1+1; $vl_pos2-$vl_pos1-1)
							$vt_fieldname:=Substring:C12($vt_breakOnField; $vl_pos2+1)
							
							$vl_table_no:=UT_GetTableNo($vt_tablename)
							$vl_field_no:=UT_GetFieldNo($vl_table_no; $vt_fieldname)
							
							If (Is field number valid:C1000($vl_table_no; $vl_field_no))
								
								hmRep_SET SECTION PROPERTY($vl_area; $tl_sections_types{$vl_pos}; $vl_level; hmRep_sprop_TableNo; $vl_table_no; "")
								hmRep_SET SECTION PROPERTY($vl_area; $tl_sections_types{$vl_pos}; $vl_level; hmRep_sprop_FieldNo; $vl_field_no; "")
								
							End if 
							
						End if 
						
						PP_ParseElements($tt_element_ids{$i}; $vl_area; $vz_top_offset)
						
						If ($vf_first)
							
							$vz_top_offset:=$vz_top_offset+$tz_pageMargins{2}
							
							$vf_first:=False:C215
						End if 
						
						$vz_top_offset:=$vz_top_offset+$vl_height
						
					End if 
					
				End if 
				
			End for 
			
			
		Else 
			
			$vt_xml_section:=DOM Find XML element:C864($vt_xml; "Report/Page")
			
			If (OK=1)
				
				PP_ParseElements($vt_xml_section; $vl_area)
				
			End if 
			
		End if 
		
	End if 
	
	DOM CLOSE XML:C722($vt_xml)
	
	ON ERR CALL:C155($vt_method)
	
End if 
