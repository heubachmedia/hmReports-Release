## hmRep_PATH POINT ( Area ; x ; y)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|X|Real|→|point x
|Y|Real|→|point y

### Description
The command *hmRep_PATH POINT* adds a point to the current path. The result is a line from the previous point to the new current point. The command only works, if there is a current open path created with [hmRep_START PATH](hmRep_StartPath.md).
