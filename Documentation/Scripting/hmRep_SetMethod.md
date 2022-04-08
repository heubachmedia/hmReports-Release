## hmRep_SET METHOD( Area ; methodname ; script)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Methodname|Text|→|methodname
|Script|Blob|→|script code

### Description
The command *hmRep_SET METHOD* sets a tokenized script for a report method.

### Example
The following example sets the tokenized script for a report-script:

```4d
hmRep_SET METHOD($vl_area;"my_method";$vx_blob)
```
