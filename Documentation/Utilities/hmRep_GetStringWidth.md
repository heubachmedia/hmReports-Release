## hmRep_Get String Width ( Text ; Font ; Fontsize ; Fontstyle) → Width
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Text|Text|→|Text
|Font|Text|→|Fontname
|Fontsize|Longint|→|Fontsize
|Fontstyle|Longint|→|Fontstyle
|Width|Real|←|string width in pixels

### Description
The command *** <self> *** returns the width of a string, defined by font, fontsize and fontstyle. You can use the predefinied constants of 4D in the parameter *Fontstyle*.

### Example
The following example returns the string width of a text:

```4d
var $vz_width : Real

$vz_width:=hmRep_Get String Width("Test"; "Arial"; 10; Bold+Italic)
```
