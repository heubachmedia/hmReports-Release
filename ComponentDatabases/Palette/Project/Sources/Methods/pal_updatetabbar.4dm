//%attributes = {}
C_LONGINT:C283($vl_area; $vl_currenttab; $vl_last_area)

$vl_area:=$1

$vl_currenttab:=pal_getcurrenttab

Case of 
	: ($vl_currenttab=1)
		
		EXECUTE METHOD IN SUBFORM:C1085("subform_layerlist"; "pal_update_layerlist"; *; $vl_area)
		
	: ($vl_currenttab=2)
		
		EXECUTE METHOD IN SUBFORM:C1085("subform_objectlist"; "pal_update_objectlist"; *; $vl_area)
		
	: ($vl_currenttab=3)
		
		$vl_last_area:=0
		EXECUTE METHOD IN SUBFORM:C1085("subform_referencelist"; "pal_get_referencelist_area"; $vl_last_area)
		
		If ($vl_area#$vl_last_area)
			
			EXECUTE METHOD IN SUBFORM:C1085("subform_referencelist"; "pal_update_referencelist"; *; $vl_area; 1)
			
		End if 
		
End case 
