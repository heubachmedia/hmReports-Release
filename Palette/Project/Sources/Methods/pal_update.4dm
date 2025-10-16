//%attributes = {}
C_LONGINT:C283($vl_area; $vl_formevent)

$vl_area:=$1
$vl_formevent:=$2

If ($vl_formevent=On Load:K2:1)
	
	pal_settabbar(1)
	
	EXECUTE METHOD IN SUBFORM:C1085("subform_object_properties"; "pal_update_object_onload"; *; $vl_area)
	
	//Else 
	//
	//$vf_update:=OBJECT_GetText ("vt_current_report_uuid")#hmRep_Get Current Report ($vl_area)
	
End if 

OBJECT_SetLongint("vl_current_area"; $vl_area)
OBJECT_SetText("vt_current_report_uuid"; hmRep_Get Current Report($vl_area))

pal_updatetabbar($vl_area)

pal_update_properties($vl_area)
