//%attributes = {"preemptive":"capable"}
#DECLARE($vp_array : Pointer; $vp_array_contents : Pointer; $vt_path : Text)

var $vt_language; $vt_xml; $vt_element; $vt_child; $vt_child2; $vt_resname; $vt_text : Text
var $i; $vl_count : Integer

If (Test path name:C476($vt_path)=Is a document:K24:1)
	
	$vt_xml:=DOM Parse XML source:C719($vt_path)
	
	$vt_element:=DOM Find XML element:C864($vt_xml; "xliff/file/body/group")
	
	$vl_count:=DOM Count XML elements:C726($vt_element; "trans-unit")
	
	ARR_Resize($vp_array; $vl_count)
	ARR_Resize($vp_array_contents; $vl_count)
	
	$vt_child:=DOM Get first child XML element:C723($vt_element)
	
	For ($i; 1; $vl_count)
		
		$vt_resname:=""
		DOM GET XML ATTRIBUTE BY NAME:C728($vt_child; "resname"; $vt_resname)
		
		$vt_child2:=DOM Get first child XML element:C723($vt_child)
		
		If ($vt_language#"de")
			$vt_child2:=DOM Get next sibling XML element:C724($vt_child2)
		End if 
		
		$vt_text:=""
		DOM GET XML ELEMENT VALUE:C731($vt_child2; $vt_text)
		$vp_array_contents->{$i}:=$vt_text
		$vp_array->{$i}:=$vt_resname
		
		If ($i<$vl_count)
			$vt_child:=DOM Get next sibling XML element:C724($vt_child)
		End if 
		
	End for 
	
	DOM CLOSE XML:C722($vt_xml)
	
End if 
