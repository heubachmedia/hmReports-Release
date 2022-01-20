## hmRep_ORDER SECTIONS ( Area ; sectionTypes ; sectionCount)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|sectionTypes|Longint-Array|→|section types
|sectionCount|Longint-Array|→|section count

### Description
The command *hmRep_ORDER SECTIONS* orders the sections of the current report. You have to pass in *sectionTypes* and *sectionCount* the new order of the sections.

**Notice: You can NOT create new sections with this command. Please always check hmRep_Get last error. The count of all section must be the same as hmRep_GET SECTIONS returns, because you only order these sections.**

### Example
In this example, the Pageheader and Detailheader will be switched:

```4d
ARRAY LONGINT($tl_sectionTypes; 0)
ARRAY LONGINT($tl_sectionHeights; 0)
ARRAY LONGINT($tl_sectionCount; 0)

hmRep_GET SECTIONS($vl_area; $tl_sectionTypes; $tl_sectionHeights; $tl_sectionCount)

ARRAY LONGINT($tl_sectionTypes; 8)
ARRAY LONGINT($tl_sectionCount; 8)

$tl_sectionTypes{2}:=hmRep_Section_Detailheader
$tl_sectionTypes{3}:=hmRep_Section_Pageheader

hmRep_ORDER SECTIONS(reparea; $tl_sectionTypes; $tl_sectionCount)
```
