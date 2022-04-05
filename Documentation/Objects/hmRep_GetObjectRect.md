## hmRep_GET OBJECT RECT ( Area ; objectID ; left ; top ; right ; bottom)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ID|Longint|→|object ID
|Left|Real|←|left coordinate
|Top|Real|←|top coordinate
|Right|Real|←|right coordinate
|Bottom|Real|←|bottom coordinate

### Description
The command *hmRep_GET OBJECT RECT* returns the bounds of the object defined by the parameter *objectID*.
