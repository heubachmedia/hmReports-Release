## hmRep_CLOSE PATH ( Area )
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area

### Description
The command *hmRep_CLOSE PATH* closes the current path in memory. That means, that the path returns to the starting point. The path is drawn as a closed object.

If you add more path objects to the path, a new subpath is automatically created.

The command only works, if there is a current open path created with [hmRep_START PATH](hmRep_StartPath.md).
