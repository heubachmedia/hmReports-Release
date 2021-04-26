## hmRep_BLOB TO REPORT ( Area ; Type ; Blob)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Type|Longint|→|Type to read
|Blob|Blob|→|XML-Blob

### Description
The command *hmRep_BLOB TO REPORT* imports a hmReports-document saved with [hmRep_REPORT TO BLOB](hmRep_ReportToBlob.md). The parameter *Type* defines the source type.

For a documentation of all types see [Import types](../Appendix/ImportTypes.md).
Currently *hmRep_Import_hmReports* is supported, only.

If the command is executed with success, all settings of the previous report will be lost.

If something went wrong, you can call [hmRep_GET IMPORT PROTOCOL](hmRep_GetImportProtocoll.md) for getting more information about the import process.

### Example
The following example loads a hmReport from the current field [Reports]Blob into the area:

```4d
hmRep_BLOB TO REPORT(hmRep; hmRep_Import_hmReports; [Reports]Blob)
```
