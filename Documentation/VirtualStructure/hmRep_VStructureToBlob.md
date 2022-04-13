## hmRep_VStructure To Blob ( Area ) → Blob
###### Introduced in v4.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Blob|Blob|←|Blob with the virtual structure

### Description
The command *hmRep_VStructure To Blob* returns the complete virtual structure as a binary into a blob. With this command and [hmRep_BLOB TO VSTRUCTURE](hmRep_BlobToVStructure.md) you can store and restore the virtual structure very quickly.

If you want to get the blob from the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, the blob will be created from the virtual structure of the area.

### Example
The following example returns the (global) virtual structure as a blob and restores the blob again:

```4d
var $vx_blob : Blob

$vx_blob:=hmRep_VStructure To Blob(0)

hmRep_BLOB TO VSTRUCTURE(0; $vx_blob)
```
