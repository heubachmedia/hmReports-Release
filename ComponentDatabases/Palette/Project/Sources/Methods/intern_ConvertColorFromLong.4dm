//%attributes = {}
C_LONGINT:C283($vl_color; $vl_length)
C_TEXT:C284($vt_result)

$vl_color:=$1

If ($vl_color<0)
	$vt_result:="none"
Else 
	
	$vt_result:=String:C10($vl_color; "&x")
	
	If (Length:C16($vt_result)=6)
		$vt_result:="00"+Substring:C12($vt_result; 3)
	Else 
		$vt_result:=Substring:C12($vt_result; 5)
	End if 
	
	$vt_result:="#"+$vt_result
	
	$vl_length:=Length:C16($vt_result)
	
	If ($vl_length<7)
		$vt_result:=$vt_result+((7-$vl_length)*"0")
	End if 
	
End if 

$0:=$vt_result
