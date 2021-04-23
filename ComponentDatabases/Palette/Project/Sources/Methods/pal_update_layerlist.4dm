//%attributes = {}
C_LONGINT:C283($vl_area; $vl_prop_long; $i; $vl_size; $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue; $vl_current_layer)
C_POINTER:C301($vp_object_layer_visible; $vp_object_layer_color; $vp_object_layer_name; $vp_object_layer_id; $vp_object_layer_locked)
C_TEXT:C284($vt_prop_text)

$vl_area:=$1

OBJECT_SetLongint("vl_current_area"; $vl_area)

$vp_object_layer_visible:=OBJECT Get pointer:C1124(Object named:K67:5; "tf_layer_visible")
$vp_object_layer_color:=OBJECT Get pointer:C1124(Object named:K67:5; "tb_layer_color")
$vp_object_layer_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_layer_name")
$vp_object_layer_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_layer_id")
$vp_object_layer_locked:=OBJECT Get pointer:C1124(Object named:K67:5; "tf_layer_locked")

OBJECT_InitArray("tl_layer_style"; LongInt array:K8:19)

ARRAY LONGINT:C221($tl_layerIDs; 0)
ARRAY TEXT:C222($tt_layernames; 0)

hmRep_GET LAYER LIST($vl_area; $tl_layerIDs; $tt_layernames)

$vl_size:=Size of array:C274($tl_layerIDs)

ARR_Resize($vp_object_layer_visible; $vl_size)
ARR_Resize($vp_object_layer_color; $vl_size)
ARR_Resize($vp_object_layer_name; $vl_size)
ARR_Resize($vp_object_layer_id; $vl_size)
ARR_Resize($vp_object_layer_locked; $vl_size)

$vl_current_layer:=hmRep_Get Current Layer($vl_area)

For ($i; 1; $vl_size)
	
	$vl_prop_long:=0
	$vt_prop_text:=""
	hmRep_GET LAYER PROPERTY($vl_area; $tl_layerIDs{$i}; hmRep_lprop_Visible; $vl_prop_long; $vt_prop_text)
	
	$vl_object_framecolor_red:=0
	$vl_object_framecolor_green:=0
	$vl_object_framecolor_blue:=0
	hmRep_GET COLOR($vl_area; hmRep_clr_LayerColor; $tl_layerIDs{$i}; $vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue)
	
	$vp_object_layer_visible->{$i}:=$vl_prop_long=1
	$vp_object_layer_name->{$i}:=$tt_layernames{$i}
	$vp_object_layer_color->{$i}:=pal_getcolorsvg(intern_Color16BitTo8Bit($vl_object_framecolor_red; $vl_object_framecolor_green; $vl_object_framecolor_blue))
	$vp_object_layer_id->{$i}:=$tl_layerIDs{$i}
	
	$vl_prop_long:=0
	$vt_prop_text:=""
	hmRep_GET LAYER PROPERTY($vl_area; $tl_layerIDs{$i}; hmRep_lprop_LockObjects; $vl_prop_long; $vt_prop_text)
	$vp_object_layer_locked->{$i}:=$vl_prop_long=1
	
	If ($vl_current_layer=$tl_layerIDs{$i})
		
		If ($vp_object_layer_name->{$i}#"")
			$vp_object_layer_name->{$i}:=$vp_object_layer_name->{$i}+" "
		End if 
		
		$vp_object_layer_name->{$i}:=$vp_object_layer_name->{$i}+"("+Get localized string:C991("aktuelle_ebene")+")"
		
	End if 
	
End for 
