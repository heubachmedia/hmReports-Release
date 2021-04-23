//%attributes = {}
C_LONGINT:C283($i; $vl_pos; $vl_area)
C_TEXT:C284($vt_report; $vt_currentreport)
C_POINTER:C301($vp_object_id; $vp_object_name)

$vp_object_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_reports")
$vp_object_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_reports")

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->

$vl_pos:=$vp_object_name->

If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object_id->))
	
	QUERY:C277([Reports:11]; [Reports:11]ID:1=$vp_object_id->{$vl_pos})
	
	ARRAY TEXT:C222($tt_reports; 0)
	hmRep_GET REPORT LIST($vl_area; $tt_reports)
	
	$vl_pos:=Find in array:C230($tt_reports; [Reports:11]UUID:2)
	
	If ($vl_pos>0)
		
		hmRep_SET CURRENT REPORT($vl_area; $tt_reports{$vl_pos})
		
	Else 
		
		$vt_report:=hmRep_Create Report($vl_area; 0; 0; "")
		hmRep_SET CURRENT REPORT($vl_area; $vt_report)
		hmRep_BLOB TO REPORT($vl_area; hmRep_Import_hmReports; [Reports:11]Blob:4)
		$vt_report:=hmRep_Get Current Report($vl_area)
		
		APPEND TO ARRAY:C911($tt_reports; $vt_report)
		
	End if 
	
	ARRAY LONGINT:C221($tl_scopes; 0)
	ARRAY LONGINT:C221($tl_scope_ids; 0)
	ARRAY TEXT:C222($tt_scope_uuids; 0)
	hmRep_GET REPORT DEPENDENCIES($vl_area; $tl_scopes; $tl_scope_ids; $tt_scope_uuids)
	
	For ($i; 1; Size of array:C274($tt_scope_uuids))
		
		If (Find in array:C230($tt_reports; $tt_scope_uuids{$i})=-1)
			
			QUERY:C277([Reports:11]; [Reports:11]UUID:2=$tt_scope_uuids{$i})
			
			If (Records in selection:C76([Reports:11])=1)
				
				$vt_currentreport:=hmRep_Get Current Report($vl_area)
				$vt_report:=hmRep_Create Report($vl_area; 0; 0; "")
				hmRep_SET CURRENT REPORT($vl_area; $vt_report)
				hmRep_BLOB TO REPORT($vl_area; hmRep_Import_hmReports; [Reports:11]Blob:4)
				hmRep_SET CURRENT REPORT($vl_area; $vt_currentreport)
				
				APPEND TO ARRAY:C911($tt_reports; $tt_scope_uuids{$i})
				
			End if 
			
		End if 
		
	End for 
	
Else 
	
	hmRep_DELETE REPORT($vl_area; "")
	
End if 

hmRep_Palette_Update("palette"; $vl_area)
