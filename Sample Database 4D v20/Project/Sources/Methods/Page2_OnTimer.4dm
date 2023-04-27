//%attributes = {}
C_LONGINT:C283($vl_area)
C_TEXT:C284($vt_text)
C_REAL:C285($vz_alpha)

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea2")->

$vt_text:=""
$vz_alpha:=0

hmRep_GET OBJECT PROPERTY($vl_area; tl_slideshow_pics{vl_slideshow_current_pic}; hmRep_oprop_Alpha; $vz_alpha; $vt_text)

$vz_alpha:=$vz_alpha-1

If ($vz_alpha<0)
	
	vl_slideshow_current_pic:=vl_slideshow_current_pic-1
	$vz_alpha:=100
	
End if 

If (vl_slideshow_current_pic=1)
	
	SET TIMER:C645(0)
	vf_slide:=False:C215
	
	hmRep_SET OBJECT PROPERTY($vl_area; tl_slideshow_pics{vl_slideshow_current_pic}; hmRep_oprop_Visible; 1; "")
	hmRep_SET OBJECT PROPERTY($vl_area; tl_slideshow_pics{vl_slideshow_current_pic+1}; hmRep_oprop_Visible; 1; "")
	
Else 
	
	hmRep_SET OBJECT PROPERTY($vl_area; tl_slideshow_pics{vl_slideshow_current_pic-1}; hmRep_oprop_Visible; 1; "")
	hmRep_SET OBJECT PROPERTY($vl_area; tl_slideshow_pics{vl_slideshow_current_pic}; hmRep_oprop_Visible; 1; "")
	hmRep_SET OBJECT PROPERTY($vl_area; tl_slideshow_pics{vl_slideshow_current_pic}; hmRep_oprop_Alpha; $vz_alpha; "")
	
End if 

