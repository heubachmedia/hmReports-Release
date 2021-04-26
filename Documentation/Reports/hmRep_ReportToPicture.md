## hmRep_Report To Picture ( Area ; Format ; dpiX ; dpiY) → Picture
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Format|Longint|→|Picture format
|dpiX|Longint|→|DPI x or 0
|dpiY|Longint|→|DPI y or 0
|Picture|Picture|←|Result picture

### Description
The command *hmRep_Report To Picture* outputs the current report area as a picture. The format defines the format of the result picture.

hmReports supports following native picture formats:

* 1 = jpg
* 2 = png
* 3 = bmp
* 4 = gif
* 5 = tiff
* 6 = pdf (only on Macintosh)
* 7 = SVG
* 9 = WMP (only on Windows)
* 10 = DDS (only on Windows)

The command does **not** print (executes) the report into a picture. The command only draws the objects of the report into a picture.

You can specify a custom DPI in the parameters *dpiX* and *dpiX*. Pass 0 for default (Mac: 72, Win: 96 DPI).

### Example
The following example opens a report in an offscreen area and saves the report in three different images to disk:

```4d
var $vl_area : Integer
var $vx_blob : Blob
var $vb_1 : Picture

$vl_area:=hmRep_New Offscreen Area(0; 0)

QUERY([Reports]; [Reports]Name="Simple Customer List")

hmRep_BLOB TO REPORT($vl_area; hmRep_Import_hmReports; [Reports]Blob)

$vb_1:=hmRep_Report To Picture($vl_area; hmRep_PicType_PDF)
WRITE PICTURE FILE("test.pdf"; $vb_1; ".pdf")

$vb_1:=hmRep_Report To Picture($vl_area; hmRep_PicType_JPG)
WRITE PICTURE FILE("test.jpg"; $vb_1; "image/jpg")

$vb_1:=hmRep_Report To Picture($vl_area; hmRep_PicType_SVG)
WRITE PICTURE FILE("test.svg"; $vb_1; ".svg")

hmRep_DELETE OFFSCREEN AREA($vl_area)
 ```
