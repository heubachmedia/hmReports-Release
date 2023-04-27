//%attributes = {}
C_LONGINT:C283($vl_temp; $vl_pos; $vl_id; $vl_area)
C_TEXT:C284($vt_report; $vt_name)
C_BLOB:C604($vx_blob)
C_BOOLEAN:C305($vf_update)
C_POINTER:C301($vp_object_id; $vp_object_name)

$vp_object_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_reports")
$vp_object_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_reports")

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->

$vt_report:=hmRep_Get Current Report($vl_area)

$vf_update:=False:C215

QUERY:C277([Reports:11]; [Reports:11]UUID:2=$vt_report)

If (Records in selection:C76([Reports:11])=0)
	
	CREATE RECORD:C68([Reports:11])
	[Reports:11]UUID:2:=$vt_report
	SAVE RECORD:C53([Reports:11])
	
	QUERY:C277([Reports:11]; [Reports:11]UUID:2=$vt_report)
	$vf_update:=True:C214
	
End if 

If (Records in selection:C76([Reports:11])=1)
	
	Write(->[Reports:11])
	
	SET BLOB SIZE:C606($vx_blob; 0)
	hmRep_REPORT TO BLOB($vl_area; $vx_blob)
	
	[Reports:11]Blob:4:=$vx_blob
	
	$vl_temp:=0
	$vt_name:=""
	hmRep_GET REPORT PROPERTY($vl_area; hmRep_rprop_name; $vl_temp; $vt_name)
	
	[Reports:11]Name:3:=$vt_name
	SAVE RECORD:C53([Reports:11])
	
	ReadOnly(->[Reports:11])
	
	$vl_pos:=Find in array:C230($vp_object_id->; [Reports:11]ID:1)
	If ($vl_pos>0)
		$vp_object_name->{$vl_pos}:=$vt_name
	End if 
	
End if 

$vl_id:=[Reports:11]ID:1

If ($vf_update)
	Editor_InitReportList
End if 

$vl_pos:=Find in array:C230($vp_object_id->; $vl_id)

If ($vl_pos>0)
	$vp_object_name->:=$vl_pos
End if 
