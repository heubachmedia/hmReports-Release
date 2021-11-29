## hmRep_Get Current Layer ( Area ) → ID
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|ID|Longint|←|ID of the layer

### Description
The command *hmRep_Get Current Layer*' returns the ID of the current layer of the current report.

### Example
The example shows how to get the id of the current layer:

```4d
var $vl_id : Integer

$vl_id:=hmRep_Get Current Layer($vl_area)
```
