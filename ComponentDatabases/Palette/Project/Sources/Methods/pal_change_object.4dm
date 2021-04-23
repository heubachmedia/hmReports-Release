//%attributes = {}
C_LONGINT:C283($vl_area; $vl_selector)
C_TEXT:C284($vt_objectname)

$vl_selector:=$1
$vt_objectname:=$2

Case of 
	: (Form event code:C388=On Data Change:K2:15) | (Form event code:C388=On Clicked:K2:4)
		
		pal_set_multi_object_props($vl_selector; $vt_objectname)
		
	: (Form event code:C388=On Losing Focus:K2:8)
		
		$vl_area:=OBJECT_GetLongint("vl_current_area")
		pal_update_object($vl_area; $vt_objectname)
		
End case 
