//%attributes = {}
C_TEXT:C284($vt_text)
C_LONGINT:C283($vl_mainversion)

$vt_text:=Application version:C493(*)

$vl_mainversion:=Num:C11(Substring:C12($vt_text; 5; 2))

$0:=$vl_mainversion
