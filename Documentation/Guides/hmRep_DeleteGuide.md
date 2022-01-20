## hmRep_DELETE GUIDE ( Area ; Number) 
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Number|Longint|→|guide number

### Description
The command *hmRep_DELETE GUIDE* deletes a guide defined by its continuous number.

### Example
The following example deletes the first guide:

```4d
hmRep_DELETE GUIDE(hmRep;1)
```
