//%attributes = {}
#DECLARE($vf_visible : Boolean)

var $vl_left; $vl_top; $vl_right; $vl_bottom; $vl_area : Integer

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->

OBJECT SET VISIBLE:C603(*; "palette"; $vf_visible)

$vl_left:=0
$vl_top:=0
$vl_right:=0
$vl_bottom:=0

GET WINDOW RECT:C443($vl_left; $vl_top; $vl_right; $vl_bottom; Current form window:C827)

If ($vf_visible)
	
	
	OBJECT SET TITLE:C194(*; "palette_hide_button"; "Hide Palette")
	
	//OBJECT GET COORDINATES(*;"reparea";$vl_left;$vl_top;$vl_right;$vl_bottom)
	
	OBJECT MOVE:C664(*; "reparea"; 400; 0; -400; 0)
	Form:C1466.palette.paletteUpdate()
	
Else 
	
	OBJECT SET TITLE:C194(*; "palette_hide_button"; "Show Palette")
	OBJECT MOVE:C664(*; "reparea"; -400; 0; 400; 0)
	
	//OBJECT MOVE(*;"reparea";0;0;$vl_right-$vl_left;$vl_bottom-$vl_top-100;*)
	
End if 

Form:C1466.palette_visible:=$vf_visible
