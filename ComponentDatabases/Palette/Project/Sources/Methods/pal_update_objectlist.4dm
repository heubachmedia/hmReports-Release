//%attributes = {}
C_LONGINT:C283(vl_hl_objectlist; $i; $vl_size; $vl_area; $vl_current_page; $vl_anzahl)
C_PICTURE:C286($vb_icon)
C_TEXT:C284($vt_text)

$vl_area:=$1

OBJECT_SetLongint("vl_current_area"; $vl_area)

If (Is a list:C621(vl_hl_objectlist))
	CLEAR LIST:C377(vl_hl_objectlist; *)
End if 

vl_hl_objectlist:=New list:C375

$vl_current_page:=hmRep_Get Current Page($vl_area)

ARRAY LONGINT:C221($tl_objects; 0)
hmRep_GET OBJECT LIST($vl_area; hmRep_scope_Page; $vl_current_page; $tl_objects)

ARRAY LONGINT:C221($tl_objects_selected; 0)
hmRep_GET OBJECT LIST($vl_area; hmRep_scope_Selected; 1; $tl_objects_selected)

$vl_size:=Size of array:C274($tl_objects)

ARRAY LONGINT:C221($tl_layer; $vl_size)
ARRAY LONGINT:C221($tl_group; $vl_size)

For ($i; 1; $vl_size)
	
	$tl_layer{$i}:=intern_GetObjectPropertyLong($vl_area; $tl_objects{$i}; hmRep_oprop_LayerID)
	$tl_group{$i}:=intern_GetObjectPropertyLong($vl_area; $tl_objects{$i}; hmRep_oprop_GroupID)
	
End for 

ARRAY LONGINT:C221($tl_layerIDs; 0)
ARRAY TEXT:C222($tt_layernames; 0)

hmRep_GET LAYER LIST($vl_area; $tl_layerIDs; $tt_layernames)

$vb_icon:=intern_GetPicture("toolbar_layer")

For ($i; 1; Size of array:C274($tl_layerIDs))
	
	$vl_anzahl:=Count in array:C907($tl_layer; $tl_layerIDs{$i})
	
	$vt_text:=$tt_layernames{$i}
	
	If ($vl_anzahl>0)
		$vt_text:=$vt_text+" ("+String:C10($vl_anzahl)+")"
	End if 
	
	APPEND TO LIST:C376(vl_hl_objectlist; $vt_text; -$tl_layerIDs{$i}; pal_update_objectlist_layer($vl_area; $tl_layerIDs{$i}; 0; ->$tl_objects; ->$tl_layer; ->$tl_group; ->$tl_objects_selected); True:C214)
	//SET LIST ITEM PARAMETER(vl_hl_objectlist;-$tl_layerIDs{$i};Additional text;String($tl_layerIDs{$i}))
	SET LIST ITEM ICON:C950(vl_hl_objectlist; 0; $vb_icon)
	
End for 

If (Size of array:C274($tl_objects_selected)>0)
	SET LIST PROPERTIES:C387(vl_hl_objectlist; _o_Ala Macintosh:K28:1; 0; 18; 1; 1; 0)
	SELECT LIST ITEMS BY REFERENCE:C630(vl_hl_objectlist; $tl_objects_selected{1}; $tl_objects_selected)
End if 
