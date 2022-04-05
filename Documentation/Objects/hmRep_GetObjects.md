## hmRep_GET OBJECTS ( Area ; objectblob)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Objectblob|Blob|←|objects as a blob

### Description
The command *hmRep_GET OBJECTS* receives all selected objects in a blob *objectblob*. This is very convenient, to copy objects from one area or report to other areas/reports. The blob is static and independed from the source report and can be stored.
