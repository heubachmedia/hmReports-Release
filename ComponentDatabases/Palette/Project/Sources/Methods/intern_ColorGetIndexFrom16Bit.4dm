//%attributes = {}
C_LONGINT:C283($vl_red; $vl_green; $vl_blue; $vl_index)

$vl_red:=$1
$vl_green:=$2
$vl_blue:=$3

$vl_index:=hmRep_RGB2Index($vl_red; $vl_green; $vl_blue)

If ($vl_index=-1)
	$vl_index:=0
Else 
	$vl_index:=$vl_index+1
End if 

$0:=$vl_index
