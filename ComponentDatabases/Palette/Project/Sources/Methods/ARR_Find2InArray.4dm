//%attributes = {}
//$1=Pointer auf Array 1
//$2=Pointer auf Array 2
//$3=Longint 1
//$4=Longint 2
//{$5=Von Pos}

C_POINTER:C301($vp_array1; $vp_array2)
C_LONGINT:C283($vl_long1; $vl_long2; $vl_result; $vl_pos)

$vp_array1:=$1
$vp_array2:=$2
$vl_long1:=$3
$vl_long2:=$4

If (Count parameters:C259>4)
	$vl_pos:=$5-1
Else 
	$vl_pos:=0
End if 

$vl_result:=-1

Repeat 
	$vl_pos:=Find in array:C230($vp_array1->; $vl_long1; $vl_pos+1)
	If ($vl_pos>0)
		If ($vp_array2->{$vl_pos}=$vl_long2)
			$vl_result:=$vl_pos
			$vl_pos:=-1
		End if 
	End if 
	
Until ($vl_pos<0)

$0:=$vl_result
