## hmRep_PATH MOVE TO ( Area ; x ;y)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|X|Real|→|point x
|Y|Real|→|point y

### Description
The command *hmRep_PATH MOVE TO* moves to a point and adds it to the current path. A new subpath will be created. The command only works, if there is a current open path created with [hmRep_START PATH](hmRep_StartPath.md).
