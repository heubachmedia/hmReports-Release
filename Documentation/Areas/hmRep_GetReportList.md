## hmRep_GET REPORT LIST (Area ; Report List)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|--- |---|:---:|---
|Area|Longint|→|hmReports area
|Report List|ARRAY TEXT|←|Array of all reports UUID's of the area

### Description
The command *hmRep_GET REPORT LIST* returns all UUID's of all reports currently open in the area defined by *Area*. You have to pass a textarray into the parameter *Report List*. The order of the UUID's in the array, is the order of the reports in the tabbar.

### Example
The current example returns an array of all reports in the area:

```4d
ARRAY TEXT($tt_reports; 0)
hmRep_GET REPORT LIST(reparea; $tt_reports)
```
