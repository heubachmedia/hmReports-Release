//%attributes = {}
C_LONGINT:C283($i; $vl_size)
C_TEXT:C284($vt_path)
C_POINTER:C301($vp_tt_resnames; $vp_tt_de; $vp_tt_en; $vp_tt_fr; $vp_tt_es; $vp_tt_ja)

$vt_path:=$1

OBJECT_SetText("vt_path"; $vt_path)

$vp_tt_resnames:=OBJECT_InitArray("tt_resnames"; Text array:K8:16)
$vp_tt_de:=OBJECT_InitArray("tt_de"; Text array:K8:16)
$vp_tt_en:=OBJECT_InitArray("tt_en"; Text array:K8:16)
$vp_tt_fr:=OBJECT_InitArray("tt_fr"; Text array:K8:16)
$vp_tt_es:=OBJECT_InitArray("tt_es"; Text array:K8:16)
$vp_tt_ja:=OBJECT_InitArray("tt_ja"; Text array:K8:16)
ARRAY BOOLEAN:C223(tf_invisible; 0)

xliff_loadresnames($vp_tt_resnames)
xliff_loadlanguage($vp_tt_de; "de")
xliff_loadlanguage($vp_tt_en; "en")
xliff_loadlanguage($vp_tt_fr; "fr")
xliff_loadlanguage($vp_tt_es; "es")
xliff_loadlanguage($vp_tt_ja; "ja")

$vl_size:=Size of array:C274($vp_tt_resnames->)

ARR_Resize(->tf_invisible; $vl_size)

For ($i; 1; $vl_size)
	tf_invisible{$i}:=False:C215
End for 

LISTBOX SORT COLUMNS:C916(*; "tf_xliff_listbox"; 1; >)

OBJECT_SetText("vt_suche"; "")
