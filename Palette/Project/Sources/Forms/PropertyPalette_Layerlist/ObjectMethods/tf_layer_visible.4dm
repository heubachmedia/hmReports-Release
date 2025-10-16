C_LONGINT:C283($vl_area; $vl_pos; $i; $vl_prop_long)
C_POINTER:C301($vp_object_layer_id; $vp_object_layer_visible)
C_BOOLEAN:C305($vf_visible; $vf_other_visible)
C_TEXT:C284($vt_prop_text)

If (Form event code:C388=On Data Change:K2:15)
	
	$vl_area:=OBJECT_GetLongint("vl_current_area")
	$vl_pos:=Listbox_GetPosObject("tf_listbox_layerlist")
	
	$vp_object_layer_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_layer_id")
	$vp_object_layer_visible:=OBJECT Get pointer:C1124(Object named:K67:5; "tf_layer_visible")
	
	If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object_layer_id->))
		
		$vf_visible:=$vp_object_layer_visible->{$vl_pos}
		
		If (Not:C34($vf_visible))  //nachgucken, ob noch andere aktive Layer sind
			
			ARRAY LONGINT:C221($tl_layerIDs; 0)
			ARRAY TEXT:C222($tt_layernames; 0)
			
			hmRep_GET LAYER LIST($vl_area; $tl_layerIDs; $tt_layernames)
			
			$vf_other_visible:=False:C215
			
			For ($i; 1; Size of array:C274($tl_layerIDs))
				
				If ($tl_layerIDs{$i}#$vp_object_layer_id->{$vl_pos})
					
					$vl_prop_long:=0
					$vt_prop_text:=""
					hmRep_GET LAYER PROPERTY($vl_area; $tl_layerIDs{$i}; hmRep_lprop_Visible; $vl_prop_long; $vt_prop_text)
					
					If ($vl_prop_long=1)
						$vf_other_visible:=True:C214
						$i:=Size of array:C274($tl_layerIDs)+1
					End if 
					
				End if 
				
			End for 
			
			If (Not:C34($vf_other_visible))
				
				BEEP:C151
				$vf_visible:=True:C214
				$vp_object_layer_visible->{$vl_pos}:=$vf_visible
				
			End if 
			
		End if 
		
		hmRep_SET LAYER PROPERTY($vl_area; $vp_object_layer_id->{$vl_pos}; hmRep_lprop_Visible; Num:C11($vf_visible); "")
		
	End if 
	
End if 
