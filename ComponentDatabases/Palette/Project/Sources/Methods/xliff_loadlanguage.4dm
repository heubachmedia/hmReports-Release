//%attributes = {}
C_POINTER:C301($vp_array; $vp_tt_resnames)
C_TEXT:C284($vt_path; $vt_language; $vt_xml; $vt_element; $vt_child; $vt_child2; $vt_resname; $vt_text)
C_LONGINT:C283($i; $vl_count; $vl_pos)

$vp_array:=$1
$vt_language:=$2

$vt_path:=OBJECT_GetText("vt_path")+$vt_language+".lproj"+":"+"Main.xlf"
$vp_tt_resnames:=OBJECT_GetPointer("tt_resnames")

If (Test path name:C476($vt_path)=Is a document:K24:1)
	
	$vt_xml:=DOM Parse XML source:C719($vt_path)
	
	$vt_element:=DOM Find XML element:C864($vt_xml; "xliff/file/body/group")
	
	$vl_count:=DOM Count XML elements:C726($vt_element; "trans-unit")
	
	ARR_Resize($vp_array; Size of array:C274($vp_tt_resnames->))
	
	$vt_child:=DOM Get first child XML element:C723($vt_element)
	
	For ($i; 1; $vl_count)
		
		$vt_resname:=""
		DOM GET XML ATTRIBUTE BY NAME:C728($vt_child; "resname"; $vt_resname)
		
		$vl_pos:=Find in array:C230($vp_tt_resnames->; $vt_resname)
		
		If ($vl_pos>0)
			
			$vt_child2:=DOM Get first child XML element:C723($vt_child)
			
			If ($vt_language#"de")
				$vt_child2:=DOM Get next sibling XML element:C724($vt_child2)
			End if 
			
			$vt_text:=""
			DOM GET XML ELEMENT VALUE:C731($vt_child2; $vt_text)
			$vp_array->{$vl_pos}:=$vt_text
			
		Else 
			//ALERT("Resname \""+$vt_resname+"\" nicht gefunden!")
		End if 
		
		If ($i<$vl_count)
			$vt_child:=DOM Get next sibling XML element:C724($vt_child)
		End if 
		
	End for 
	
	DOM CLOSE XML:C722($vt_xml)
	
End if 
