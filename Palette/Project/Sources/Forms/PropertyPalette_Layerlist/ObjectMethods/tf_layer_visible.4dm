var $i; $vl_prop_long : Integer
var $vf_visible; $vf_other_visible : Boolean
var $vt_prop_text : Text

If (Form event code:C388=On Data Change:K2:15)
	
	If (Form:C1466.listCurrent#Null:C1517)
		
		$vf_visible:=Form:C1466.listCurrent.visible
		
		If (Not:C34($vf_visible))  //nachgucken, ob noch andere aktive Layer sind
			
			ARRAY LONGINT:C221($tl_layerIDs; 0)
			ARRAY TEXT:C222($tt_layernames; 0)
			
			hmRep_GET LAYER LIST(Form:C1466.area; $tl_layerIDs; $tt_layernames)
			
			$vf_other_visible:=False:C215
			
			For ($i; 1; Size of array:C274($tl_layerIDs))
				
				If ($tl_layerIDs{$i}#Form:C1466.listCurrent.id)
					
					$vl_prop_long:=0
					$vt_prop_text:=""
					hmRep_GET LAYER PROPERTY(Form:C1466.area; $tl_layerIDs{$i}; hmRep_lprop_Visible; $vl_prop_long; $vt_prop_text)
					
					If ($vl_prop_long=1)
						$vf_other_visible:=True:C214
						$i:=Size of array:C274($tl_layerIDs)+1
					End if 
					
				End if 
				
			End for 
			
			If (Not:C34($vf_other_visible))
				
				BEEP:C151
				$vf_visible:=True:C214
				Form:C1466.listCurrent.visible:=$vf_visible
				
			End if 
			
		End if 
		
		hmRep_SET LAYER PROPERTY(Form:C1466.area; Form:C1466.listCurrent.id; hmRep_lprop_Visible; Num:C11($vf_visible); "")
		
	End if 
	
End if 
