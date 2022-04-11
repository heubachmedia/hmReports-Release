## hmRep_DELETE ALL RUNS ( Area ; objectID)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object id

### Description
The command *hmRep_DELETE ALL RUNS* deletes all runs of the object defined by *objectID*.

### Example
The following example deletes all runs of an object:

```4d
hmRep_DELETE ALL RUNS(reparea; $vl_object)
```
