//%attributes = {}
C_TEXT:C284($vt_report)
C_LONGINT:C283($vl_pos; $vl_ID; $vl_area)
C_POINTER:C301($vp_object_id; $vp_object_name)

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->

hmRep_DELETE REPORT($vl_area; "")  //deletes all Reports in the Area

$vt_report:=hmRep_Get Current Report($vl_area)

Write(->[Reports:11])

CREATE RECORD:C68([Reports:11])
[Reports:11]Name:3:="My new report"
[Reports:11]UUID:2:=$vt_report

hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_name; 0; [Reports:11]Name:3)

SET BLOB SIZE:C606($vx_blob; 0)
hmRep_REPORT TO BLOB($vl_area; $vx_blob)

[Reports:11]Blob:4:=$vx_blob

SAVE RECORD:C53([Reports:11])

$vl_ID:=[Reports:11]ID:1

Editor_InitReportList

$vp_object_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_reports")
$vp_object_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_reports")

$vl_pos:=Find in array:C230($vp_object_id->; $vl_ID)
If ($vl_pos>0)
	$vp_object_name->:=$vl_pos
End if 

ReadOnly(->[Reports:11])

hmRep_Palette_Update("palette"; $vl_area)
