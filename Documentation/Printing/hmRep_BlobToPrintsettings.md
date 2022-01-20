## hmRep_BLOB TO PRINT SETTINGS ( Area ; print header)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Print header|BLOB|→|printheader

### Description
The command *hmRep_BLOB TO PRINT SETTINGS* sets the printblob of the current report as the current printheader. The blob must be created with the command [hmRep_Print settings to BLOB](hmRep_PrintsettingsToBlob.md). It contains printheaders for Mac and Windows. You can **NOT** use the blob with other *BLOB TO PRINT SETTINGS*-commands of the 4D language.
