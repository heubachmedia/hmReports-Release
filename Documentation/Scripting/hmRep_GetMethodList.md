## hmRep_GET METHOD LIST ( Area ; list)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|List|Text-Array|←|Method names

### Description
The command *hmRep_GET METHOD LIST* returns a list of all report methods of the current report.

### Example
The following example returns a list of all report-scripts:

```4d
ARRAY TEXT($tt_methods;0)

hmRep_GET METHOD LIST($vl_area;$tt_methods)
```
