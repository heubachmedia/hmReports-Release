//%attributes = {}
C_LONGINT:C283($i; $vl_count)
C_TEXT:C284($vt_attr_name; $vt_attr_wert; $vt_element; $vt_attribute)
C_BOOLEAN:C305($vf_ok)

$vt_element:=$1
$vt_attribute:=$2

$vf_ok:=False:C215

$vl_count:=DOM Count XML attributes:C727($vt_element)

For ($i; 1; $vl_count)
	
	$vt_attr_name:=""
	$vt_attr_wert:=""
	
	DOM GET XML ATTRIBUTE BY INDEX:C729($vt_element; $i; $vt_attr_name; $vt_attr_wert)
	
	$vf_ok:=$vt_attr_name=$vt_attribute
	
	If ($vf_ok)
		$i:=$vl_count+1
	End if 
	
End for 

$0:=$vf_ok
