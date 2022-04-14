## hmRep_DELETE RULERUNIT ( Area ; number)
###### Introduced in v2.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Number|Longint|→|Index number of the unit

### Description
The command *hmRep_DELETE RULERUNIT* deletes a ruler unit of the hmReports area defined by *area*.
The last ruler unit cannot be deleted.

### Example
The following example deletes a ruler unit with the index 3:

```4d
hmRep_DELETE RULERUNIT(reparea; 3)
```
