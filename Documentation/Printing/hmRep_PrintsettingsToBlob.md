## hmRep_Print settings to BLOB ( Area ) → print header
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Print header|BLOB|←|print header

### Description
The command *hmRep_Print settings to BLOB* returns the printblob of the current report. The blob contains printheaders for Mac and Windows. The printheader blob is **NOT** compatible with other *Print settings to BLOB*-commands of the 4D language.
