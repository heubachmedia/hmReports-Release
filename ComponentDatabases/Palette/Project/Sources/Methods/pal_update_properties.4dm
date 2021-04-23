//%attributes = {}
C_BOOLEAN:C305($vf_update)
C_LONGINT:C283($vl_area)

$vl_area:=$1

$vf_update:=True:C214

ARRAY LONGINT:C221($tl_selected_objects; 0)
hmRep_GET OBJECT LIST($vl_area; hmRep_scope_Selected; 1; $tl_selected_objects)

Case of 
	: (Size of array:C274($tl_selected_objects)>0)
		
		OBJECT SET VISIBLE:C603(*; "subform_report_properties"; False:C215)
		OBJECT SET VISIBLE:C603(*; "subform_object_properties"; True:C214)
		
		OBJECT_SetText("vt_tab_prop_caption1"; Get localized string:C991("OBJEKTEIGENSCHAFTEN_"))
		OBJECT_SetText("vt_tab_prop_caption2"; Get localized string:C991("OBJEKTEIGENSCHAFTEN_"))
		
		If ($vf_update)
			
			EXECUTE METHOD IN SUBFORM:C1085("subform_object_properties"; "pal_set_object_positions"; *; $vl_area)
			
		End if 
		
	Else 
		
		OBJECT SET VISIBLE:C603(*; "subform_report_properties"; True:C214)
		OBJECT SET VISIBLE:C603(*; "subform_object_properties"; False:C215)
		
		OBJECT_SetText("vt_tab_prop_caption1"; Get localized string:C991("REPORTEIGENSCHAFTEN"))
		OBJECT_SetText("vt_tab_prop_caption2"; Get localized string:C991("REPORTEIGENSCHAFTEN"))
		
		If ($vf_update)
			
			EXECUTE METHOD IN SUBFORM:C1085("subform_report_properties"; "pal_update_report"; *; $vl_area)
			
		End if 
		
End case 
