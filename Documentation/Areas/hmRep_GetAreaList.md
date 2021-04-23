## hmRep_GET AREA LIST (areas ; thread_IDs)
###### Introduced in v1.0, Changed in v6.1, Preemptive: yes

<span style="color:gray;font-family:monospace">This command is deprecated in v18. It will be removed in future versions. Please use [hmRep_Get Areas](hmRep_GetAreas.md) instead.</span>

|Parameter|Type|In/Out|Description
|--- |---|:---:|---
|areas|ARRAY LONGINT|←|hmReports areas
|thread_IDs|ARRAY LONGINT|←|Thread IDs

### Description
With the command *hmRep_GET AREA LIST* you can get a list of all currently valid hmReports areas of the current 4D application. The command is independent of the current process.

### Example
The following example returns all hmReports areas of the current 4D application:

```4d
ARRAY LONGINT($tl_areas;0)
ARRAY LONGINT($tl_threads;0)

hmRep_GET AREA LIST($tl_areas;$tl_threads)
```
