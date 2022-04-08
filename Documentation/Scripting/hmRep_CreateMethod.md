## hmRep_CREATE METHOD ( Area ; methodname ; script)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Methodname|Text|→|methodname
|Script|Blob|→|script code

### Description
The command *hmRep_CREATE METHOD* creates a new report-method for the current report. Pass the methodname into *methodname*. The methodname don't have to be unique.
*script* is the tokenized code.

### Example
The following creates a new report-script:

```4d
hmRep_CREATE METHOD($vl_area;"my_method";$vx_blob)
```
