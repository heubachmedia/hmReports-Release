C_POINTER:C301($vp_tt_resnames; $vp_tt_de; $vp_tt_en; $vp_tt_fr; $vp_tt_es; $vp_tt_ja)

If (Form event code:C388=On Clicked:K2:4)
	
	$vp_tt_resnames:=OBJECT_GetPointer("tt_resnames")
	$vp_tt_de:=OBJECT_GetPointer("tt_de")
	$vp_tt_en:=OBJECT_GetPointer("tt_en")
	$vp_tt_fr:=OBJECT_GetPointer("tt_fr")
	$vp_tt_es:=OBJECT_GetPointer("tt_es")
	$vp_tt_ja:=OBJECT_GetPointer("tt_ja")
	
	SORT ARRAY:C229($vp_tt_resnames->; $vp_tt_de->; $vp_tt_en->; $vp_tt_fr->; $vp_tt_es->; $vp_tt_ja->; >)
	
	xliff_writelanguage($vp_tt_de; "de")
	xliff_writelanguage($vp_tt_en; "en")
	xliff_writelanguage($vp_tt_fr; "fr")
	xliff_writelanguage($vp_tt_es; "es")
	xliff_writelanguage($vp_tt_ja; "ja")
	
End if 
