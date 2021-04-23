## hmRep_Create Report (Area ; Width ; Height ; Name) → Report UUID
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Width|Longint|→|width of the new report
|Height|Longint|→|height of the new report
|Name|Text|→|name of the new report
|Report UUID|Text|←|UUID of the created report

### Description
The command *hmRep_Create Report* creates a new report in the current hmReports area. The new created report will be not the current report. If you want this report as the current report, you must use [hmRep_SET CURRENT REPORT]. Pass the width and height of the new report (or drawing area) into the parameters *width* and *height*. If these two parameters are zero, the current page format will be used. Pass a name for the new report into the parameter *name*.
