//%attributes = {}
C_LONGINT:C283($i; $vl_id; $vl_area; $vl_width; $vl_height)
C_PICTURE:C286($vb_picture)
C_TEXT:C284($vt_file)

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea2")->

hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Toolbar; 0; "")
hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Pagelist; 0; "")
hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Menu; 0; "")
hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Tabbar; 0; "")
hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Tools; 0; "")
hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Rulers; 0; "")
hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Statusbar; 0; "")
hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_ContextualMenu; 0; "")
hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_SelectionRect; 0; "")

hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowGrid; 0; "")
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowSecCapt; 0; "")
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowSecLines; 0; "")
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowSections; 0; "")
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowPrintableArea; 0; "")
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowPageArea; 0; "")
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_pagewidth; 2000; "")
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_pageheight; 2000; "")
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowScrollbarH; 0; "")
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_ShowScrollbarV; 0; "")

hmRep_SET LAYER PROPERTY($vl_area; hmRep_Get Current Layer($vl_area); hmRep_lprop_LockObjects; 1; "")

vf_slide:=False:C215

ARRAY LONGINT:C221(tl_slideshow_pics; 0)
ARRAY LONGINT:C221(tl_slideshow_pics; 6)

For ($i; 1; 6)
	
	$vt_file:=Get 4D folder:C485(Current resources folder:K5:16)+"lasvegas"+String:C10($i)+".jpg"
	
	READ PICTURE FILE:C678($vt_file; $vb_picture)
	
	If (Picture size:C356($vb_picture)>0)
		
		PICTURE PROPERTIES:C457($vb_picture; $vl_width; $vl_height)
		
		$vl_id:=hmRep_Create Picture($vl_area; 0; 0; $vl_width; $vl_height)
		
		hmRep_SET PICTURE($vl_area; $vl_id; $vb_picture)
		hmRep_SET OBJECT PROPERTY($vl_area; $vl_id; hmRep_oprop_Visible; 0; "")
		
		tl_slideshow_pics{$i}:=$vl_id
		
	End if 
	
End for 
