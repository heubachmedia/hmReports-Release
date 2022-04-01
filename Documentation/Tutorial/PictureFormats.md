hmReports only supports native picture types which are supported by the operating systems. All picture types can are listed in the chapter [Picture types].

## SVG

Beside native picture formats, hmReports is able to render all output into a SVG document target. This is very helpful if you want to provide vector images for web or editing.

## Vector picture formats

If you are using hmReports for creating pictures on the fly and you want to use it in 4D as vector in a lossless format, you can use PDF (On Mac) or EMF (On Windows).

## Quicktime pictures (PICT)

Quicktime pictures (PICT) are not supported in hmReports, because these formats are not native and not available for 64 bit.
But if you still want to use these picture types (e.g. in the command [hmRep_SET PICTURE]), you have to convert the picture on the fly.
But first you have to find out which picture type is in your variable. You can check this with the command [hmRep_GET PICTURE TYPES].

Here is a wrapper method (which is available in the Demo Database), which checks the picture type and convert the variable if necessary:

```4d
C_LONGINT($vl_area;$vl_id;$vl_width;$vl_height)
C_PICTURE($vb_picture)
C_BOOLEAN($vf_ok)

$vl_area:=$1
$vb_picture:=$2

ARRAY TEXT($tt_types;0)
hmRep_GET PICTURE TYPES ($vb_picture;$tt_types)

If (Size of array($tt_types)>0)

$vf_ok:=True

Case of 
 : (Position("image/jpg";$tt_types{1})>0)
 : (Position("image/png";$tt_types{1})>0)
 : (Position("image/bmp";$tt_types{1})>0)
 : (Position("image/tiff";$tt_types{1})>0)
 : (Position("image/gif";$tt_types{1})>0)
 : (Position("image/application/pdf";$tt_types{1})>0)
 : (Position("image/svg+xml";$tt_types{1})>0)
 : (Position("image/x-emf";$tt_types{1})>0)
 : (Position("image/x-pict";$tt_types{1})>0)
 
 CONVERT PICTURE($vb_picture;"image/png")
 
Else 
 $vf_ok:=False

End case 

If ($vf_ok)

 PICTURE PROPERTIES($vb_picture;$vl_width;$vl_height)
 
 $vl_id:=hmRep_Create Picture ($vl_area;0;0;$vl_width;$vl_height)
 hmRep_SET PICTURE ($vl_area;$vl_id;$vb_picture)

End if 

End if 
```
