## hmRep_SET CURRENT REPORT (Area ; Report UUID)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Report UUID|Text|→|UUID of the report

### Description
The command *hmRep_SET CURRENT REPORT* sets a new report as the current report. The report must be loaded in the hmReports area.

### Example
The following example sets the current report, defined by a record [Reports]UUID:

```4d
ARRAY TEXT($tt_reports; 0)
hmRep_GET REPORT LIST(reparea; $tt_reports)

$vl_pos:=Find in array($tt_reports; [Reports]UUID)

If ($vl_pos>0)
	
	hmRep_SET CURRENT REPORT(reparea; $tt_reports{$vl_pos})
	
End if 
 ```
