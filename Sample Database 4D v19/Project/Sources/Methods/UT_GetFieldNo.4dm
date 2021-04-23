//%attributes = {}
C_LONGINT:C283($i; $vl_datei; $vl_feldnummer)
C_TEXT:C284($vt_feldname)

$vl_datei:=$1
$vt_feldname:=$2

$vl_feldnummer:=0

For ($i; 1; Get last field number:C255($vl_datei))
	
	If (Is field number valid:C1000($vl_datei; $i))
		
		If (Field name:C257($vl_datei; $i)=$vt_feldname)
			$vl_feldnummer:=$i
			$i:=32768
		End if 
		
	End if 
	
End for 

$0:=$vl_feldnummer
