## hmRep_DELETE REPORT (Area ; report UUID)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Report UUID|Text|→|UUID of the report

### Description
The command *hmRep_DELETE REPORT* deletes the reports, defined by *report UUID*. If there are further reports in the area, one of the next reports will be the current report. If the deleted report is the only report, a new report will be created and becomes the new current report.

If *report UUID* is an empty string, all reports will be deleted. In this case, a new report will be the new current report.
