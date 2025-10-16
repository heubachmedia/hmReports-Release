//%attributes = {}
C_LONGINT:C283($vl_zeile; $vl_spalte)
C_TEXT:C284($vt_listbox)

$vt_listbox:=$1

$vl_spalte:=0
$vl_zeile:=0
LISTBOX GET CELL POSITION:C971(*; $vt_listbox; $vl_spalte; $vl_zeile)

$0:=$vl_zeile
