//%attributes = {}
C_LONGINT:C283($vl_type)
C_TEXT:C284($vt_path; $vt_file)

$vl_type:=$1

Case of 
	: ($vl_type=Is alpha field:K8:1)
		$vt_file:="Field_1.png"
		
	: ($vl_type=Is real:K8:4)
		$vt_file:="Field_9.png"
		
	: ($vl_type=Is text:K8:3) | ($vl_type=33)
		$vt_file:="Field_2.png"
		
	: ($vl_type=Is date:K8:7)
		$vt_file:="Field_3.png"
		
	: ($vl_type=Is boolean:K8:9)
		$vt_file:="Field_5.png"
		
	: ($vl_type=Is time:K8:8)
		$vt_file:="Field_4.png"
		
	: ($vl_type=Is longint:K8:6)
		$vt_file:="Field_7.png"
		
	: ($vl_type=Is integer:K8:5)
		$vt_file:="Field_6.png"
		
	: ($vl_type=Is integer 64 bits:K8:25)
		$vt_file:="Field_8.png"
		
	: ($vl_type=_o_Is float:K8:26)
		$vt_file:="Field_10.png"
		
	: ($vl_type=Is picture:K8:10)
		$vt_file:="Field_12.png"
		
	: ($vl_type=Is BLOB:K8:12)
		$vt_file:="Field_11.png"
		
	Else 
		$vt_file:=""
		
End case 

If ($vt_file#"")
	
	$vt_path:="Pictures"+Folder separator:K24:12+$vt_file
	
Else 
	
	$vt_path:=""
	
End if 

$0:=$vt_path
