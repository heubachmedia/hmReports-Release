//%attributes = {}
C_LONGINT:C283($i; $vl_size; $vl_area; $vl_left; $vl_top; $vl_right; $vl_bottom)
C_POINTER:C301($vp_object_name; $vp_object_top; $vp_object)
C_COLLECTION:C1488($vc_barcodes)

$vl_area:=$1

OBJECT_SetLongint("klapp_allgemein"; 1)
OBJECT_SetLongint("klapp_groesse"; 1)
OBJECT_SetLongint("klapp_optionen"; 1)
OBJECT_SetLongint("klapp_rahmen"; 1)
OBJECT_SetLongint("klapp_text"; 1)
OBJECT_SetLongint("klapp_unterbericht"; 1)

ARRAY TEXT:C222($tt_Objekte; 0)
ARRAY POINTER:C280($tp_Variablen; 0)
ARRAY INTEGER:C220($tg_Seiten; 0)

FORM GET OBJECTS:C898($tt_Objekte; $tp_Variablen; $tg_Seiten)

OBJECT_InitArray("tt_objects"; Text array:K8:16)
OBJECT_InitArray("tl_objects_top"; LongInt array:K8:19)

$vp_object_name:=OBJECT_GetPointer("tt_objects")
$vp_object_top:=OBJECT_GetPointer("tl_objects_top")

$vl_size:=Size of array:C274($tt_Objekte)

ARR_Copy(->$tt_Objekte; $vp_object_name)
ARR_Resize($vp_object_top; $vl_size)

For ($i; 1; $vl_size)
	
	$vl_left:=0
	$vl_top:=0
	$vl_right:=0
	$vl_bottom:=0
	
	OBJECT GET COORDINATES:C663(*; $tt_Objekte{$i}; $vl_left; $vl_top; $vl_right; $vl_bottom)
	
	$vp_object_top->{$i}:=$vl_top
	
End for 

//Einige Arrays initalisieren
//Fontlist

ARRAY TEXT:C222($tt_fontlist; 0)
hmRep_GET FONTS($vl_area; $tt_fontlist)
SORT ARRAY:C229($tt_fontlist; >)

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_fontlist")
If (Not:C34(Is nil pointer:C315($vp_object)))
	ARR_Copy(->$tt_fontlist; $vp_object)
End if 

$vp_object:=OBJECT_InitArray("tt_object_verticalsizing"; Text array:K8:16)
ARR_Resize($vp_object; 5)

$vp_object->{1}:=Get localized string:C991("Keine")
$vp_object->{2}:=Get localized string:C991("move_under_object")
$vp_object->{3}:=Get localized string:C991("grow")
$vp_object->{4}:=Get localized string:C991("move")
$vp_object->{5}:=Get localized string:C991("move")+"/"+Get localized string:C991("grow")
$vp_object->:=1

//Barcode Liste

ARRAY LONGINT:C221($tl_barcode_ID; 0)
ARRAY TEXT:C222($tt_barcode_Name; 0)

$vc_barcodes:=hmRep_Get Barcode List
$vc_barcodes:=$vc_barcodes.orderBy("name asc")

COLLECTION TO ARRAY:C1562($vc_barcodes; $tl_barcode_ID; "symbology"; $tt_barcode_Name; "name")

SORT ARRAY:C229($tt_barcode_Name; $tl_barcode_ID; >)

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_barcode")
If (Not:C34(Is nil pointer:C315($vp_object)))
	ARR_Copy(->$tt_barcode_Name; $vp_object)
	
	INSERT IN ARRAY:C227($vp_object->; 1; 2)
	$vp_object->{1}:=Get localized string:C991("Keine")
	$vp_object->{2}:="-"
	
End if 

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_barcode")
If (Not:C34(Is nil pointer:C315($vp_object)))
	ARR_Copy(->$tl_barcode_ID; $vp_object)
	INSERT IN ARRAY:C227($vp_object->; 1; 2)
End if 
