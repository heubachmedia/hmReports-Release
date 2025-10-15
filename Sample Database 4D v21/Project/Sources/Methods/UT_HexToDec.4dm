//%attributes = {}
C_TEXT:C284($vt_hex; $vt_char)
C_LONGINT:C283($i; $j; $vl_result; $vl_bitpos; $vl_dec)

$vt_hex:=$1

$vl_result:=0

$vl_bitpos:=0

For ($i; Length:C16($vt_hex); 1; -1)
	
	$vt_char:=$vt_hex[[$i]]
	
	Case of 
		: ($vt_char="a")
			$vl_dec:=10
		: ($vt_char="b")
			$vl_dec:=11
		: ($vt_char="c")
			$vl_dec:=12
		: ($vt_char="d")
			$vl_dec:=13
		: ($vt_char="e")
			$vl_dec:=14
		: ($vt_char="f")
			$vl_dec:=15
			
		Else 
			$vl_dec:=Num:C11($vt_char)
			
	End case 
	
	For ($j; 0; 3)
		
		If ($vl_dec ?? $j)
			$vl_result:=$vl_result ?+ ($vl_bitpos+$j)
		End if 
		
	End for 
	
	$vl_bitpos:=$vl_bitpos+4
	
End for 

$0:=$vl_result
