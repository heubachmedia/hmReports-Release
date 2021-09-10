## hmRep_RENDER TO PICTURE ( Area ; picArray ; Format ; Limit ; dpiX ; dpiY)
###### Introduced in v1.3, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|picArray|Array Picture|←|Array of pictures
|Format|Longint|→|Picture format
|Limit|Longint|→|Max pages
|dpiX|Longint|→|DPI x or 0
|dpiY|Longint|→|DPI y or 0

### Description
The command *hmRep_RENDER TO PICTURE* renders the current report area to pictures. Each page represents one picture in the result array. The parameter *Format* defines the picture format. You can use one of the following picture formats:

- hmRep_PicType_JPG  1
- hmRep_PicType_PNG  2
- hmRep_PicType_BMP  3
- hmRep_PicType_GIF  4
- hmRep_PicType_TIFF 5
- hmRep_PicType_PDF  6 (Mac only)
- hmRep_PicType_SVG  7
- hmRep_PicType_WMP  9 (Win only)
- hmRep_PicType_DDS 10 (Win only)

The parameter *Limit* defines the maximum of pages for the output. If *Limit* is zero, all pages are rendered.

You can specify a custom DPI in the parameters *dpiX* and *dpiX*. Pass 0 for default (Mac: 72, Win: 96 DPI).

### Example
The following example renders the report as PNG pictures. The maximum of pages is 3:

```4d
ARRAY PICTURE($tb_pictures; 0)

hmRep_RENDER TO PICTURE(reparea; $tb_pictures; hmRep_PicType_PNG; 3)
 ```
