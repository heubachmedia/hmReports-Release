//%attributes = {"preemptive":"capable"}
//qqq;a;PM;String_Compare;C;0001

//$1=Text 1
//$2=Text 2

//vergleicht, ob die beiden Texte gleich sind

#DECLARE($vt_text1 : Text; $vt_text2 : Text)->$vf_OK : Boolean

var $i; $vl_length : Integer

$vf_OK:=True:C214

$vl_length:=Length:C16($vt_text1)

If ($vl_length=Length:C16($vt_text2))
	
	For ($i; 1; $vl_length)
		If (Character code:C91($vt_text1[[$i]])#Character code:C91($vt_text2[[$i]]))
			$i:=$vl_length+1
			$vf_OK:=False:C215
		End if 
	End for 
	
Else 
	$vf_OK:=False:C215
End if 
