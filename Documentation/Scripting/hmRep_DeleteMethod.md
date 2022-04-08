## hmRep_DELETE METHOD ( Area ; methodname)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Methodname|Text|→|methodname

### Description
The command *hmRep_DELETE METHOD* deletes a report-method by name.

### Example
The following example deletes a report-script:

```4d
hmRep_DELETE METHOD($vl_area;"my_method")
```
