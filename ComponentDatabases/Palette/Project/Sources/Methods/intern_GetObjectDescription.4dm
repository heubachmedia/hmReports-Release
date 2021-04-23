//%attributes = {}
C_LONGINT:C283($vl_typ; $vl_area; $vl_object_id)
C_TEXT:C284($vt_object_text; $vt_object_name; $vt_text)

$vl_area:=$1
$vl_object_id:=$2

$vl_typ:=intern_GetObjectPropertyLong($vl_area; $vl_object_id; hmRep_oprop_Type)

If ($vl_typ=hmRep_ObjType_Text)
	
	$vt_object_text:=Substring:C12(intern_GetObjectPropertyText($vl_area; $vl_object_id; hmRep_oprop_Text); 1; 100)
	
Else 
	
	$vt_object_text:=""
	
End if 

$vt_object_name:=intern_GetObjectPropertyText($vl_area; $vl_object_id; hmRep_oprop_Name)

If ($vt_object_name="")
	
	If ($vt_object_text="")
		$vt_text:=intern_GetLocalizedObjectType2($vl_typ)
	Else 
		$vt_text:=$vt_object_text
	End if 
	
Else 
	$vt_text:=$vt_object_name+" ("+intern_GetLocalizedObjectType2($vl_typ)+")"
End if 

$0:=$vt_text
