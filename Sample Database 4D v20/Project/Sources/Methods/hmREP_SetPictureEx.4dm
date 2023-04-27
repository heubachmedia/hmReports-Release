//%attributes = {}
C_LONGINT:C283($vl_area; $vl_id; $vl_width; $vl_height)
C_PICTURE:C286($vb_picture)
C_BOOLEAN:C305($vf_ok)

$vl_area:=$1
$vb_picture:=$2

ARRAY TEXT:C222($tt_types; 0)
hmRep_GET PICTURE TYPES($vb_picture; $tt_types)

If (Size of array:C274($tt_types)>0)
	
	$vf_ok:=True:C214
	
	Case of 
		: (Position:C15("image/jpg"; $tt_types{1})>0)
		: (Position:C15("image/png"; $tt_types{1})>0)
		: (Position:C15("image/bmp"; $tt_types{1})>0)
		: (Position:C15("image/tiff"; $tt_types{1})>0)
		: (Position:C15("image/gif"; $tt_types{1})>0)
		: (Position:C15("image/x-pict"; $tt_types{1})>0)
			
			CONVERT PICTURE:C1002($vb_picture; "image/png")
			
		Else 
			$vf_ok:=False:C215
			
	End case 
	
	If ($vf_ok)
		
		PICTURE PROPERTIES:C457($vb_picture; $vl_width; $vl_height)
		
		$vl_id:=hmRep_Create Picture($vl_area; 0; 0; $vl_width; $vl_height)
		hmRep_SET PICTURE($vl_area; $vl_id; $vb_picture)
		
	End if 
	
End if 
