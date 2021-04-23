//%attributes = {}
C_LONGINT:C283($vl_hlist; $vl_area; $vl_layerID; $vl_pos; $vl_typ; $vl_groupID; $vl_anzahl)
C_POINTER:C301($vp_objects; $vp_layer; $vp_group; $vp_objects_selected)
C_TEXT:C284($vt_text)

$vl_area:=$1
$vl_layerID:=$2
$vl_groupID:=$3
$vp_objects:=$4
$vp_layer:=$5
$vp_group:=$6
$vp_objects_selected:=$7

$vl_hlist:=0

$vl_pos:=0

ARRAY TEXT:C222($tt_picturefilenames; 10)
$tt_picturefilenames{hmRep_ObjType_Rect}:="toolbar_rect"
$tt_picturefilenames{hmRep_ObjType_Text}:="toolbar_text"
$tt_picturefilenames{hmRep_ObjType_Oval}:="toolbar_circle"
$tt_picturefilenames{hmRep_ObjType_Line}:="toolbar_line"
$tt_picturefilenames{hmRep_ObjType_Group}:="toolbar_group"
$tt_picturefilenames{hmRep_ObjType_Picture}:="toolbar_picture"
$tt_picturefilenames{hmRep_ObjType_Arc}:="toolbar_arc"
$tt_picturefilenames{hmRep_ObjType_Path}:="toolbar_polygon"
$tt_picturefilenames{hmRep_ObjType_Freehand}:="toolbar_freehand"
$tt_picturefilenames{hmRep_ObjType_Subreport}:="toolbar_subreport"

ARRAY PICTURE:C279($tb_pictures; 0)
ARR_Resize(->$tb_pictures; 10)

Repeat 
	
	$vl_pos:=ARR_Find2InArray($vp_layer; $vp_group; $vl_layerID; $vl_groupID; $vl_pos+1)
	
	If ($vl_pos>0)
		
		If ($vl_hlist=0)
			$vl_hlist:=New list:C375
		End if 
		
		If ($vp_group->{$vl_pos}=$vl_groupID)
			
			$vl_anzahl:=Count in array:C907($vp_group->; $vp_objects->{$vl_pos})
			
			$vt_text:=intern_GetObjectDescription($vl_area; $vp_objects->{$vl_pos})
			$vl_typ:=intern_GetObjectPropertyLong($vl_area; $vp_objects->{$vl_pos}; hmRep_oprop_Type)
			
			//$vt_text:="Objekt "+String($vp_objects->{$vl_pos})
			
			If ($vl_anzahl>0)
				$vt_text:=$vt_text+" ("+String:C10($vl_anzahl)+")"
			End if 
			
			APPEND TO LIST:C376($vl_hlist; $vt_text; $vp_objects->{$vl_pos}; pal_update_objectlist_layer($vl_area; $vl_layerID; $vp_objects->{$vl_pos}; $vp_objects; $vp_layer; $vp_group; $vp_objects_selected); True:C214)
			SET LIST ITEM PARAMETER:C986($vl_hlist; $vp_objects->{$vl_pos}; Additional text:K28:7; String:C10($vp_objects->{$vl_pos}))
			
			
			If ($vl_typ>=1) & ($vl_typ<=10)
				
				If (Picture size:C356($tb_pictures{$vl_typ})=0)
					
					$tb_pictures{$vl_typ}:=intern_GetPicture($tt_picturefilenames{$vl_typ})
					
				End if 
				
				If (Picture size:C356($tb_pictures{$vl_typ})>0)
					
					SET LIST ITEM ICON:C950($vl_hlist; 0; $tb_pictures{$vl_typ})
					
				End if 
				
			End if 
			
		End if 
		
	End if 
	
Until ($vl_pos=-1)

$0:=$vl_hlist
