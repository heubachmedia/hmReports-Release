C_LONGINT:C283($vl_area; $vl_pos)
C_POINTER:C301($vp_object_layer_id)

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	
	$vl_pos:=Listbox_GetPosObject("tf_listbox_layerlist")
	
	If ($vl_pos>0)
		
		If (intern_confirm("msg_delete_layer"))
			
			$vp_object_layer_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_layer_id")
			
			If ($vp_object_layer_id->{$vl_pos}=hmRep_Get Current Layer($vl_area))
				
				intern_Alert("msg_cannot_delete_active_layer")
				
			Else 
				
				hmRep_DELETE LAYER($vl_area; $vp_object_layer_id->{$vl_pos})
				
				CALL SUBFORM CONTAINER:C1086(-2001)
				
			End if 
			
		End if 
		
	End if 
	
End if 
