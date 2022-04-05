## hmRep_Create Picture ( Area ; left ; top ; right ; bottom) → object ID
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Left|Real|→|left coordinate
|Top|Real|→|top coordinate
|Right|Real|→|right coordinate
|Bottom|Real|→|bottom coordinate
|Object|ID|←|new object ID

### Description
The command *hmRep_Create Picture* creates a new picture object for the current report and the current layer. The picture object has no current picture. You have to set the picture with [hmRep_SET PICTURE](hmRep_SetPicture.md).
