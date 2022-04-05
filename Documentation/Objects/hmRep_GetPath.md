## hmRep_Get Path ( Area ; object ID) → Path text
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Object|ID|←|object ID
|Path|Text|←|Path description as text

### Description
The command *hmRep_Get Path* returns the path description as text. The path description is a standard of SVG. The command is very convenient, because you can easily receive the whole path as text. With the text, you can create a new path with [hmRep_Create Path](hmRep_CreatePath.md).

For a documentation of all path types see [Path types](../Appendix/PathTypes.md).
