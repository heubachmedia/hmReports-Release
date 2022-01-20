## hmRep_GET SECTION BY POINT ( Area ; Mousex ; Mousey ; Type ; Count)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Mousex|Real|→|mouse position x
|Mousey|Real|→|mouse position y
|Type|Longint|←|section type
|Count|Longint|←|count

### Description
The command *hmRep_GET SECTION BY POINT* returns the section regarding a specific point (mousex,mousey). You get the current mousex, mousey coordinates with the command [hmRep_GET MOUSE](../Areas/hmRep_GetMouse.md). The parameter *type* returns the [Section Type](../Appendix/SectionTypes.md) and the parameter *count* returns the count of the section. If no section is under the position, *type* and *count* return zero values.

### Example
The following example returns the section by the current mouse position. This code can be in an object method of the plugin-area:

```4d
var $vz_x; $vz_y : Real
var $vl_sectiontype; $vl_sectioncount : Integer

$vz_x:=0
$vz_y:=0
hmRep_GET MOUSE(reparea; $vz_x; $vz_y)

$vl_sectiontype:=0
$vl_sectioncount:=0

hmRep_GET SECTION BY POINT(reparea; $vz_x; $vz_y; $vl_sectiontype; $vl_sectioncount)
```
