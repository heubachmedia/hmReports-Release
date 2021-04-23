//%attributes = {}
C_PICTURE:C286($vb_bild)
C_TEXT:C284($vt_path)
C_LONGINT:C283($vl_type)

$vl_type:=$1

$vt_path:=intern_GetTypePicturePath($vl_type)

If ($vt_path#"")
	
	$vt_path:=Get 4D folder:C485(Current resources folder:K5:16)+$vt_path
	
	READ PICTURE FILE:C678($vt_path; $vb_bild)
	
End if 

$0:=$vb_bild
