//%attributes = {"preemptive":"capable"}
#DECLARE($vl_color : Integer)->$vt_result : Text

var $vl_length : Integer

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
