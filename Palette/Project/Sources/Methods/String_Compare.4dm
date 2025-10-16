//%attributes = {}
//qqq;a;PM;String_Compare;C;0001

//$1=Text 1
//$2=Text 2

//vergleicht, ob die beiden Texte gleich sind

C_TEXT:C284($vt_text1; $vt_text2)
C_BOOLEAN:C305($vf_OK)
C_LONGINT:C283($i; $vl_length)

$vt_text1:=$1
$vt_text2:=$2

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

$0:=$vf_OK
