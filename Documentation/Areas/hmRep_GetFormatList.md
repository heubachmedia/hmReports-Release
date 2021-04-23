## hmRep_GET FORMAT LIST (Area ; Format list)
###### Introduced in v3, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Format list|Text-Array|←|Array with formats

### Description
The command *hmRep_GET FORMAT LIST* returns all possible formats in the object properties that were set previously by the command [hmRep_SET FORMAT LIST](hmRep_SetFormatList.md).

### Example
The following example returns all formats:

```4d
ARRAY TEXT($tt_formatlist;0)
hmRep_GET FORMAT LIST ($vl_area;$tt_formatlist)
 ```
