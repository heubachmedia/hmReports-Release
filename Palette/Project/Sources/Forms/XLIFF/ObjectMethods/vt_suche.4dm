C_TEXT:C284($vt_text)
C_LONGINT:C283($i)
C_POINTER:C301($vp_tt_resnames; $vp_tt_de; $vp_tt_en; $vp_tt_fr; $vp_tt_es; $vp_tt_ja)

If (Form event code:C388=On After Edit:K2:43)
	
	$vt_text:=Get edited text:C655
	
	If (Length:C16($vt_text)>0)
		$vt_text:="@"+$vt_text+"@"
	End if 
	
	$vp_tt_resnames:=OBJECT_GetPointer("tt_resnames")
	$vp_tt_de:=OBJECT_GetPointer("tt_de")
	$vp_tt_en:=OBJECT_GetPointer("tt_en")
	$vp_tt_fr:=OBJECT_GetPointer("tt_fr")
	$vp_tt_es:=OBJECT_GetPointer("tt_es")
	$vp_tt_ja:=OBJECT_GetPointer("tt_ja")
	
	For ($i; 1; Size of array:C274($vp_tt_resnames->))
		
		If (Length:C16($vt_text)=0)
			
			tf_invisible{$i}:=False:C215
			
		Else 
			
			tf_invisible{$i}:=Not:C34(($vp_tt_resnames->{$i}=$vt_text) | ($vp_tt_de->{$i}=$vt_text) | ($vp_tt_en->{$i}=$vt_text) | ($vp_tt_fr->{$i}=$vt_text) | ($vp_tt_es->{$i}=$vt_text) | ($vp_tt_ja->{$i}=$vt_text))
			
		End if 
		
	End for 
	
End if 
