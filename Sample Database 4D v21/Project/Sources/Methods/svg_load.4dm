//%attributes = {}
var $vp_object : Pointer
var $vl_area; $vl_index : Integer
var $vo_file : 4D:C1709.File

$vl_area:=OBJECT Get value:C1743("reparea")

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_svg")

If (($vp_object->)>0)
	
	$vl_index:=$vp_object->
	$vo_file:=Folder:C1567(fk resources folder:K87:11).file($vp_object->{$vl_index})
	
	If ($vo_file.exists)
		
		//hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_SVGrootFolder; 0; $vt_resfolder)
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_MaxUndos; -1; "")
		
		cs:C1710.hmReportsSVG.new($vl_area; $vo_file.getContent()).import()
		
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowSections; 0; "")
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowSecCapt; 0; "")
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowSecLines; 0; "")
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowObjectBounds; 0; "")
		hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_PrintAsReport; 0; "")
		
		hmRep_START UNDO($vl_area)
		
		Form:C1466.palette.paletteUpdate()
		
	End if 
	
Else 
	BEEP:C151
End if 
