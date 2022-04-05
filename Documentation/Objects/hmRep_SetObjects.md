## hmRep_SET OBJECTS ( Area ; objectblob)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Objectblob|Blob|→|objects as a blob

### Description
The command *hmRep_SET OBJECTS* pastes all objects stored in the blob *objectblob*. The blob must be created with [hmRep_GET OBJECTS](hmRep_GetObjects.md).
