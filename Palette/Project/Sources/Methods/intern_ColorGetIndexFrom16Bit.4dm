//%attributes = {"preemptive":"capable"}
#DECLARE($vl_red : Integer; $vl_green : Integer; $vl_blue : Integer)->$vl_index : Integer

$vl_index:=hmRep_RGB2Index($vl_red; $vl_green; $vl_blue)

If ($vl_index=-1)
	$vl_index:=0
Else 
	$vl_index:=$vl_index+1
End if 
