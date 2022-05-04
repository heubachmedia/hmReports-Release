## hmRep_INDEX2RGB ( Indexcolor ; Red ; Green ; Blue)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Indexcolor|Longint|→|4D indexcolor
|Red|Longint|←|red RGB color
|Green|Longint|←|green RGB color
|Blue|Longint|←|blue RGB color

### Description
The command hmRep_INDEX2RGB converts an index color of the 4D color-table into a RGB value. The command returns all three RGB colors. These values are needed then later among other commands in hmReports. The index color must indicate a value between 0 and 255.

### Example
The following example converts the color red of the 4D-color-table into a RGB expression:

```4d
var $vl_red; $vl_green; $vl_blue : Integer

$vl_red:=0
$vl_green:=0
$vl_blue:=0

hmRep_INDEX2RGB(Red; $vl_red; $vl_green; $vl_blue)
```
