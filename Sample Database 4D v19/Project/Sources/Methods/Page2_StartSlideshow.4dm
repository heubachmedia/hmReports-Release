//%attributes = {}
C_LONGINT:C283($i; $vl_area)

vf_slide:=True:C214

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea2")->

vl_slideshow_current_pic:=6

For ($i; 1; Size of array:C274(tl_slideshow_pics))
	hmRep_SET OBJECT PROPERTY($vl_area; tl_slideshow_pics{$i}; hmRep_oprop_Alpha; 100; "")
End for 

SET TIMER:C645(1)
