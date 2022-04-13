## hmRep_BLOB TO VSTRUCTURE ( Area ; Blob)
###### Introduced in v4.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Blob|Blob|→|Blob with the virtual structure

### Description
The command *hmRep_BLOB TO VSTRUCTURE* sets the virtual structure from a blob which was previously created by the command [hmRep_VStructure To Blob](hmRep_VStructureToBlob.md). With this command and [hmRep_VStructure To Blob](hmRep_VStructureToBlob.md) you can store and restore the virtual structure very quickly.

If you want to set the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, the blob will be used for the virtual structure of the area.

### Example
The following example returns the (global) virtual structure as a blob and restores the blob again:

```4d
var $vx_blob : Blob

$vx_blob:=hmRep_VStructure To Blob(0)

hmRep_BLOB TO VSTRUCTURE(0; $vx_blob)
```
