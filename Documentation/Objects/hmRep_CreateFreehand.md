## hmRep_Create Freehand ( Area ; array_x ; array_y) → object ID
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Array_x|Real-Array|←|point x
|Array_y|Real-Array|←|point y
|Object|ID|←|new object ID

### Description
The command *hmRep_Create Freehand* creates a freehand object. Pass two array with the same size in the parameter *array_x* and *array_y*. These two arrays defines the point coordinates of the freehand object. The size of the arrays must be at least 2.
