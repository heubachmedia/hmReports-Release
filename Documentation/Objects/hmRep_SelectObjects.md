## hmRep_SELECT OBJECTS ( Area ; objectArray ; operation)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectArray|Longint-Array->|←|with object IDs
|Operation|Longint|→|operation to apply

### Description
The command *hmRep_SELECT OBJECTS* selects the object defined by the array *objectArray*.

With the help of the operation parameter, you can specify, how the array is to be applied to the selection. The following operations are possible:

* 0 = replace selection
* 1 = add to selection
* 2 = remove from selection
