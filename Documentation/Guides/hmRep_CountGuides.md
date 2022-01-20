## hmRep_Count Guides ( Area ) → guides
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|guides|Longint|←|number of guides

### Description
The command *hmRep_Count Guides* returns the count of all guides of the current report.

### Example

```4d
var $vl_guides : Integer

$vl_guides:=hmRep_Count Guides(hmRep)
```
