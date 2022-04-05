## hmRep_PATH CURVE ( Area ; cp1x ; cp1y ; cp2x ; cp2y ; x ; y)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Cp1x|Real|→|control point 1 x
|Cp1y|Real|→|control point 1 y
|Cp2x|Real|→|control point 2 x
|Cp2y|Real|→|control point 2 y
|X|Real|→|point x
|Y|Real|→|point y

### Description
The command *hmRep_PATH CURVE* adds a bezier curve to the current path. The command only works, if there is a current open path created with [hmRep_START PATH](hmRep_StartPath.md).
