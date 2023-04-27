//%attributes = {}
//$1=Text
//$2=Empfangsarray Textarray
//$3=Trennzeichen ASCII-Code Num
//{$4=True=Trennzeichen mit entfernen/default=True}
//{$5=Anfangszeichen ASCII-Code Num/das Trennzeichen gilt nur, wenn danach das Anfangszeichen oder Ende des Textes ist}

//Konvertiert Text in Arrays mit den jeweiligem Trennungszeichen

C_TEXT:C284($vt_line; $vt_substring; $vt_text; $vt_charbegin)
C_LONGINT:C283($i; $vl_size; $vl_textlen; $vl_trennzeichen)
C_BOOLEAN:C305($vf_cut; $vf_umbruch)
C_POINTER:C301($vp_array)

$vt_text:=$1
$vp_array:=$2
$vl_trennzeichen:=$3

$vl_textlen:=Length:C16($vt_text)

If (Count parameters:C259>3)
	$vf_cut:=$4
Else 
	$vf_cut:=True:C214
End if 

If (Count parameters:C259>4)
	$vt_charbegin:=Char:C90($5)
Else 
	$vt_charbegin:=""
End if 

ARR_Resize($vp_array; 0)  //C 07.06.06

$vt_line:=""
For ($i; 1; $vl_textlen)
	$vt_substring:=$vt_text[[$i]]
	$vf_umbruch:=Character code:C91($vt_substring)=$vl_trennzeichen
	
	If ($vf_umbruch) & (Length:C16($vt_charbegin)>0) & ($i<$vl_textlen)
		$vf_umbruch:=$vt_text[[$i+1]]=$vt_charbegin
	End if 
	
	If ($vf_umbruch)
		$vl_size:=Size of array:C274($vp_array->)+1
		INSERT IN ARRAY:C227($vp_array->; $vl_size)
		If ($vf_cut)
			$vp_array->{$vl_size}:=$vt_line
		Else 
			$vp_array->{$vl_size}:=$vt_line+Char:C90($vl_trennzeichen)
		End if 
		$vt_line:=""
	Else 
		$vt_line:=$vt_line+$vt_substring
	End if 
End for 

If (Length:C16($vt_line)>0)
	$vl_size:=Size of array:C274($vp_array->)+1
	INSERT IN ARRAY:C227($vp_array->; $vl_size)
	$vp_array->{$vl_size}:=$vt_line
End if 
