## hmRep_GET FONTS (Area ; Fontlist)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Fontlist|Text-Array|←|list of fonts

### Description
The command *hmRep_GET FONTS* returns a list of available fonts in the hmReports area.

### Example
The following example returns a list of available fonts in hmReports:

```4d
ARRAY TEXT($tt_fonts;0)

hmRep_GET FONTS(hmRep;$tt_fonts)
 ```
