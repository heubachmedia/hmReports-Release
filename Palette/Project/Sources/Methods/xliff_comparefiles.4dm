//%attributes = {}
var $vt_source1; $vt_source2; $vt_text : Text
var $i; $vl_pos : Integer

$vt_source1:=Get 4D folder:C485(Current resources folder:K5:16)+"fr.lproj"+":"+"Main.xlf"
$vt_source2:="Macintosh HD:4D:C-Entwicklung:XCode_hmReports:2_0:Forms:fr.lproj:Main.xlf"

ARRAY TEXT:C222($tt_names1; 0)
ARRAY TEXT:C222($tt_contents1; 0)

ARRAY TEXT:C222($tt_names2; 0)
ARRAY TEXT:C222($tt_contents2; 0)

xliff_comparefiles2(->$tt_names1; ->$tt_contents1; $vt_source1)
xliff_comparefiles2(->$tt_names2; ->$tt_contents2; $vt_source2)

$vt_text:=""

$vt_text:=$vt_text+("="*50)+Char:C90(Carriage return:K15:38)
$vt_text:=$vt_text+"Nicht vorhanden in "+$vt_source1+Char:C90(Carriage return:K15:38)
$vt_text:=$vt_text+Char:C90(Carriage return:K15:38)

For ($i; 1; Size of array:C274($tt_names2))
	
	If (Find in array:C230($tt_names1; $tt_names2{$i})=-1)
		
		$vt_text:=$vt_text+$tt_names2{$i}+Char:C90(Carriage return:K15:38)
		
	End if 
	
End for 

$vt_text:=$vt_text+("="*50)+Char:C90(Carriage return:K15:38)
$vt_text:=$vt_text+"Nicht vorhanden in "+$vt_source2+Char:C90(Carriage return:K15:38)
$vt_text:=$vt_text+Char:C90(Carriage return:K15:38)

For ($i; 1; Size of array:C274($tt_names1))
	
	If (Find in array:C230($tt_names2; $tt_names1{$i})=-1)
		
		$vt_text:=$vt_text+$tt_names1{$i}+Char:C90(Carriage return:K15:38)
		
	End if 
	
End for 

$vt_text:=$vt_text+("="*50)+Char:C90(Carriage return:K15:38)
$vt_text:=$vt_text+"Geändert"+Char:C90(Carriage return:K15:38)
$vt_text:=$vt_text+Char:C90(Carriage return:K15:38)

For ($i; 1; Size of array:C274($tt_names1))
	
	$vl_pos:=Find in array:C230($tt_names2; $tt_names1{$i})
	If ($vl_pos>0)
		
		If (Not:C34(String_Compare($tt_contents1{$i}; $tt_contents2{$vl_pos})))
			
			$vt_text:=$vt_text+$tt_names1{$i}+Char:C90(Carriage return:K15:38)
			$vt_text:=$vt_text+"1: "+$tt_contents1{$i}+Char:C90(Carriage return:K15:38)
			$vt_text:=$vt_text+"2: "+$tt_contents2{$vl_pos}+Char:C90(Carriage return:K15:38)
			
		End if 
		
	End if 
	
End for 

SET TEXT TO PASTEBOARD:C523($vt_text)

BEEP:C151
