//%attributes = {}
C_POINTER:C301($vp_object1; $vp_object2; $vp_object3; $vp_object_tabcaption1; $vp_object_tabcaption2)
C_LONGINT:C283($vl_active; $vl_area)
C_TEXT:C284($vt_caption)

$vl_active:=$1

$vp_object1:=OBJECT Get pointer:C1124(Object named:K67:5; "vl_btn_layerlist")
$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "vl_btn_objectlist")
$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "vl_btn_database")

$vp_object_tabcaption1:=OBJECT Get pointer:C1124(Object named:K67:5; "vt_tab_caption1")
$vp_object_tabcaption2:=OBJECT Get pointer:C1124(Object named:K67:5; "vt_tab_caption2")

Case of 
	: ($vl_active=1)
		$vp_object1->:=1
		$vp_object2->:=0
		$vp_object3->:=0
		$vt_caption:=Get localized string:C991("EBENEN_")
		
	: ($vl_active=2)
		$vp_object1->:=0
		$vp_object2->:=1
		$vp_object3->:=0
		$vt_caption:=Get localized string:C991("OBJECTLIST")
		
	: ($vl_active=3)
		$vp_object1->:=0
		$vp_object2->:=0
		$vp_object3->:=1
		$vt_caption:=Get localized string:C991("FELDER_UND_VARIABLEN")
		
End case 

$vp_object_tabcaption1->:=$vt_caption
$vp_object_tabcaption2->:=$vt_caption

OBJECT SET VISIBLE:C603(*; "subform_layerlist"; $vl_active=1)
OBJECT SET VISIBLE:C603(*; "subform_objectlist"; $vl_active=2)
OBJECT SET VISIBLE:C603(*; "subform_referencelist"; $vl_active=3)

$vl_area:=OBJECT_GetLongint("vl_current_area")

pal_updatetabbar($vl_area)
