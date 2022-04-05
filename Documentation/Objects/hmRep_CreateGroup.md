## hmRep_Create Group ( Area ; objects) → object ID
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Objects|Longint-Array|→|ids
|Object|ID|←|new object ID

### Description
The command *hmRep_Create Group* creates a new group with the objects defined by the longint array paramater *objects*.

**Important: You can only group objects, if these objects are all on the same layer.**
