//%attributes = {}
C_TEXT:C284($vt_resfolder; $vt_path)
C_BLOB:C604($vx_blob)
C_POINTER:C301($vp_object)
C_LONGINT:C283($vl_area; $vl_index)

$vt_resfolder:=Get 4D folder:C485(Current resources folder:K5:16)

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_svg")

If (($vp_object->)>0)
	
	$vl_index:=$vp_object->
	$vt_path:=$vt_resfolder+$vp_object->{$vl_index}
	
	If (Test path name:C476($vt_path)=Is a document:K24:1)
		
		DOCUMENT TO BLOB:C525($vt_path; $vx_blob)
		
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_SVGrootFolder; 0; $vt_resfolder)
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_MaxUndos; -1; "")
		
		hmRep_BLOB TO REPORT($vl_area; hmRep_Import_SVG; $vx_blob)
		
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowSections; 0; "")
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowSecCapt; 0; "")
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowSecLines; 0; "")
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowObjectBounds; 0; "")
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_PrintAsReport; 0; "")
		
		hmRep_START UNDO($vl_area)
		
		hmRep_Palette_Update("palette"; $vl_area)
		
	End if 
	
Else 
	BEEP:C151
End if 
