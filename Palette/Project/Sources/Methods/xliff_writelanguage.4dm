//%attributes = {}
#DECLARE($vp_array : Pointer; $vt_language : Text)

var $vp_tt_resnames; $vp_tt_de : Pointer
var $vt_path; $vt_element; $vt_element2; $vt_xml : Text
var $i : Integer

$vt_path:=OBJECT Get value:C1743("vt_path")+$vt_language+".lproj"+":"+"Main.xlf"

$vp_tt_resnames:=OBJECT_GetPointer("tt_resnames")
$vp_tt_de:=OBJECT_GetPointer("tt_de")

If (Test path name:C476($vt_path)=Is a document:K24:1)
	DELETE DOCUMENT:C159($vt_path)
End if 

$vt_xml:=DOM Create XML Ref:C861("xliff")
DOM SET XML DECLARATION:C859($vt_xml; "UTF-8"; True:C214)
DOM SET XML ATTRIBUTE:C866($vt_xml; "version"; "1.0")

$vt_element:=DOM Create XML element:C865($vt_xml; "xliff/file"; "datatype"; "x-STR#"; "original"; "undefined"; "product-version"; "v14"; "source-language"; "en-US"; "target-language"; $vt_language)
$vt_element:=DOM Create XML element:C865($vt_xml; "xliff/file/body/group"; "id"; 15000)

For ($i; 1; Size of array:C274($vp_tt_resnames->))
	
	$vt_element:=DOM Create XML element:C865($vt_xml; "xliff/file/body/group/trans-unit"; "resname"; $vp_tt_resnames->{$i})
	$vt_element2:=DOM Create XML element:C865($vt_element; "source")
	DOM SET XML ELEMENT VALUE:C868($vt_element2; $vp_tt_de->{$i})
	$vt_element2:=DOM Create XML element:C865($vt_element; "target")
	DOM SET XML ELEMENT VALUE:C868($vt_element2; $vp_array->{$i})
	
End for 

DOM EXPORT TO FILE:C862($vt_xml; $vt_path)
DOM CLOSE XML:C722($vt_xml)
