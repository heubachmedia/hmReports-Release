//%attributes = {}
C_LONGINT:C283($vl_window; $vl_area)

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->

ARRAY PICTURE:C279(tb_pictures; 0)
hmRep_RENDER TO PICTURE($vl_area; tb_pictures; hmRep_PicType_PNG; 0; 0; 0)

If (Size of array:C274(tb_pictures)>0)
	
	$vl_window:=Open form window:C675("Preview"; Plain window:K34:13)
	DIALOG:C40("Preview")
	
Else 
	
	ALERT:C41("No preview available!")
	
End if 
