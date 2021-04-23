//%attributes = {}
C_LONGINT:C283($vl_tableno; $vl_fieldno; $vl_type)
C_PICTURE:C286($vb_bild)

$vl_tableno:=$1
$vl_fieldno:=$2

If (Is field number valid:C1000($vl_tableno; $vl_fieldno))
	
	$vl_type:=0
	GET FIELD PROPERTIES:C258($vl_tableno; $vl_fieldno; $vl_type)
	
	$vb_bild:=intern_GetTypePicture($vl_type)
	
End if 

$0:=$vb_bild
