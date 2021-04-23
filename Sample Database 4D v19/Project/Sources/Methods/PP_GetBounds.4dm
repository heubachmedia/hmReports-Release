//%attributes = {}
C_LONGINT:C283($i)
C_TEXT:C284($vt_element; $vt_property; $vt_bounds)
C_POINTER:C301($vp_array)

$vt_element:=$1
$vt_property:=$2
$vp_array:=$3

$vt_bounds:=DOM_GetAttributeText($vt_element; $vt_property)

ARRAY TEXT:C222($tt_bounds; 0)
ARR_TextToArray($vt_bounds; ->$tt_bounds; Character code:C91(";"))
ARR_Resize(->$tt_bounds; 4)
ARR_Resize($vp_array; 4)

For ($i; 1; 4)
	$vp_array->{$i}:=Num:C11($tt_bounds{$i}; ".")
End for 
