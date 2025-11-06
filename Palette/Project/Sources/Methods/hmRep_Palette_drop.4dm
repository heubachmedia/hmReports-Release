//%attributes = {"invisible":true,"shared":true}
#DECLARE($vl_area : Integer)->$vl_result : Integer

var $vl_arrayindex; $vl_process; $vl_type; $vl_width; $vl_caption_offset; $vl_height; $vl_id1; $vl_id2; $vl_tableNo; $vl_fieldNo : Integer
var $vt_objectname; $vt_caption; $vt_varname : Text
var $vz_x; $vz_y : Real
var $vp_destination : Pointer

$vl_result:=0

$vl_arrayindex:=0
$vl_process:=0
$vz_x:=0
$vz_y:=0

$vp_destination:=->$vz_x

hmRep_DRAG AND DROP PROP($vl_area; $vp_destination; $vl_arrayindex; $vl_process; $vz_x; $vz_y)

$vl_tableNo:=0
$vl_fieldNo:=0
RESOLVE POINTER:C394($vp_destination; $vt_varname; $vl_tableNo; $vl_fieldNo)
$vt_varname:=Replace string:C233($vt_varname; "$"; "")

If ($vt_varname="vl_hl_referencelist") & ($vl_arrayindex>0) & ($vl_process=Current process:C322)
	
	$vl_ref:=0
	$vt_text:=""
	
	GET LIST ITEM:C378(*; "vl_hl_referencelist"; $vl_arrayindex; $vl_ref; $vt_text)
	
	If ($vl_ref>0)
		
		$vl_type:=intern_GetVStrucPropertyLong($vl_area; $vl_ref; hmRep_vprop_Type)
		
		$vl_width:=100
		$vl_caption_offset:=20
		$vl_height:=20
		
		If ($vl_type=hmRep_vstruc_Field) | ($vl_type=hmRep_vstruc_Variable)
			
			$vt_caption:=intern_GetVStrucPropertyText($vl_area; $vl_ref; hmRep_vprop_Caption)
			
			$vl_id1:=hmRep_Create Text($vl_area; $vz_x; $vz_y-$vl_caption_offset; $vz_x+$vl_width; $vz_y-$vl_caption_offset+$vl_height; $vt_caption)
			hmRep_SET OBJECT PROPERTY($vl_area; $vl_id1; hmRep_oprop_Fontstyle; Bold:K14:2; "")
			
			$vl_id2:=hmRep_Create Text($vl_area; $vz_x; $vz_y; $vz_x+$vl_width; $vz_y+$vl_height; $vt_caption)
			
			Case of 
				: ($vl_type=hmRep_vstruc_Field)
					
					$vl_tableNo:=intern_GetVStrucPropertyLong($vl_area; $vl_ref; hmRep_vprop_TableNo)
					$vl_fieldNo:=intern_GetVStrucPropertyLong($vl_area; $vl_ref; hmRep_vprop_FieldNo)
					
					If (Is table number valid:C999($vl_tableNo)) & (Is field number valid:C1000($vl_tableNo; $vl_fieldNo))
						hmRep_SET OBJECT DATA($vl_area; $vl_id2; hmRep_ObjData_4DInternal; ""; Table name:C256($vl_tableNo); Field name:C257($vl_tableNo; $vl_fieldNo); ""; 0)
					End if 
					
				: ($vl_type=hmRep_vstruc_Variable)
					
					$vt_objectname:=intern_GetVStrucPropertyText($vl_area; $vl_ref; hmRep_vprop_Variable)
					
					$vl_type:=hmRep_Get Variable Type($vt_objectname)
					
					If ($vl_type>=13) & ($vl_type<=22) | ($vl_type=34)  //Array
						hmRep_SET OBJECT DATA($vl_area; $vl_id2; hmRep_ObjData_Array; ""; ""; ""; $vt_objectname; 0)
					Else 
						hmRep_SET OBJECT DATA($vl_area; $vl_id2; hmRep_ObjData_Variable; ""; ""; ""; $vt_objectname; 0)
					End if 
					
			End case 
			
			ARRAY LONGINT:C221($tl_ids; 2)
			$tl_ids{1}:=$vl_id1
			$tl_ids{2}:=$vl_id2
			
			hmRep_SELECT OBJECTS($vl_area; $tl_ids; 0)
			
		End if 
		
	End if 
	
End if 
