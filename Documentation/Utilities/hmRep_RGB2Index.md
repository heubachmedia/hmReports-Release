## hmRep_RGB2Index ( Red ; Green ; Blue) → indexcolor
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Red|Longint|→|red RGB color
|Green|Longint|→|green RGB color
|Blue|Longint|→|blue RGB color
|Indexcolor|Longint|←|4D indexcolor

### Description
The command *** <self> *** tries to find a 4D index color matching with the 16 bit RGB color values. The match must be the exact color. hmReports does not find the nearest index. The index color returned is a value between 0 and 255. If the indexed color cannot matched, a -1 is returned.

### Example
The following example tries to find the 4D index color from the RGB value:

```4d
var $vl_red; $vl_green; $vl_blue; $vl_index : Integer

$vl_red:=0xFFFF
$vl_green:=0
$vl_blue:=0

$vl_index:=hmRep_RGB2Index($vl_red; $vl_green; $vl_blue)

If ($vl_index=-1)
	$vl_index:=0
Else 
	$vl_index:=$vl_index+1
End if 
```
