//%attributes = {}
C_LONGINT:C283($vl_area; $vl_selector; $vl_id; $vl_color; $vl_alpha; $vl_red; $vl_green; $vl_blue)
C_TEXT:C284($vt_element; $vt_property; $vt_color)

$vl_area:=$1
$vt_element:=$2
$vt_property:=$3
$vl_selector:=$4
$vl_id:=$5

$vt_color:=DOM_GetAttributeText($vt_element; $vt_property)

If (Length:C16($vt_color)=9)
	
	$vt_color:=Delete string:C232($vt_color; 1; 1)
	
	$vl_color:=UT_HexToDec($vt_color)
	
	$vl_alpha:=($vl_color & 0xFF000000) >> 24
	$vl_alpha:=$vl_alpha/0x00FF*100
	
	$vl_red:=($vl_color & 0x00FF0000) >> 16
	$vl_red:=$vl_red*0x00FF
	
	$vl_green:=($vl_color & 0xFF00) >> 8
	$vl_green:=$vl_green*0x00FF
	
	$vl_blue:=($vl_color & 0x00FF)
	$vl_blue:=$vl_blue*0x00FF
	
	hmRep_SET COLOR WITH ALPHA($vl_area; $vl_selector; $vl_id; $vl_red; $vl_green; $vl_blue; $vl_alpha)
	
End if 
