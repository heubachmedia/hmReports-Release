//%attributes = {}
C_LONGINT:C283($vl_area; $vl_objectID; $vl_objecttype)

$vl_area:=$1
$vl_objectID:=$2

$vl_objecttype:=intern_GetObjectType($vl_area; $vl_objectID)

$0:=intern_GetLocalizedObjectType2($vl_objecttype)
