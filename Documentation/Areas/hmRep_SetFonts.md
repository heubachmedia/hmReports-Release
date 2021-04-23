## hmRep_SET FONTS (Area ; Fontlist)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Fontlist|Text-Array|→|list of fonts

### Description
The command *hmRep_SET FONTS* sets the list of available fonts in the hmReports area.

### Example
The following example sets only two fonts available into hmReports:

```4d
ARRAY TEXT($tt_fonts;2)

$tt_fonts{1}:="Arial"
$tt_fonts{2}:="Verdana"

hmRep_SET FONTS(hmRep;$tt_fonts)
 ```
