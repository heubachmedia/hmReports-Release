//%attributes = {}
C_TEXT:C284($vt_area; $vt_fillcolor; $vt_ref)
C_LONGINT:C283($vl_fillcolor)
C_PICTURE:C286($vb_picture)

$vl_fillcolor:=$1

$vt_area:=DOM Create XML Ref:C861("svg")

DOM SET XML ATTRIBUTE:C866($vt_area; "xmlns"; "http://www.w3.org/2000/svg"; "xmlns:xlink"; "http://www.w3.org/1999/xlink")

DOM SET XML ATTRIBUTE:C866($vt_area; "width"; 20; "height"; 20)

$vt_fillcolor:=intern_ConvertColorFromLong($vl_fillcolor)

$vt_ref:=DOM Create XML element:C865($vt_area; "/svg/rect"; "x"; 0; "y"; 0; "width"; 20; "height"; 20; "stroke"; "none"; "fill"; $vt_fillcolor)

SVG EXPORT TO PICTURE:C1017($vt_area; $vb_picture; Own XML data source:K45:18)

$0:=$vb_picture
