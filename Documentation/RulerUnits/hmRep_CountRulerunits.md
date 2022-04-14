## hmRep_Count Rulerunits ( Area ) → Count
###### Introduced in v2.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Count|Longint|←|count of all ruler units

### Description
The command *hmRep_Count Rulerunits* returns the count of all ruler units defined in the hmReports area defined by *area*.

### Example
The following example returns the current count of ruler units:

```4d
var $vl_count : Integer

$vl_count:=hmRep_Count Rulerunits(reparea)
```
