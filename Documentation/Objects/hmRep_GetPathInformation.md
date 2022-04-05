## hmRep_GET PATH INFORMATION ( Area ; object ID ; array_type ; array_x ; array_y ; array_cp1x ; array_cp1y ; array_cp2x ; array_cp2y)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Object|ID|←|-> new object ID
|Array_type|Longint-Array|←|Path element types
|Array_x|Real-Array|←|X coordinates
|Array_y|Real-Array|←|Y coordinates
|Array_cp1x|Real-Array|←|control points 1 x
|Array_cp1y|Real-Array|←|control points 1 y
|Array_cp2x|Real-Array|←|control points 2 x
|Array_cp2y|Real-Array|←|control points 2 y

### Description
The command *hmRep_GET PATH INFORMATION* returns arrays with all path elements. Pass the object reference in the parameter *object ID* and you will returns seven arrays with its information. 

For a documentation of all path types see [Path types](../Appendix/PathTypes.md).
