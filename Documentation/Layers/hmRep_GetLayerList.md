## hmRep_GET LAYER LIST ( Area ; arrayID ; arrayNames)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|arrayID|Text|←|ID array
|arrayNames|Text|←|Names array

### Description
The command *hmRep_GET LAYER LIST* returns a list with all layers of the current report. The array *arrayID* returns a list with all layer ID's and the array *arrayNames* returns the layer names.

### Example
The following example returns all layers of the current report:

```4d
ARRAY LONGINT($tl_arrayID; 0)
ARRAY TEXT($tt_arrayNames; 0)

hmRep_GET LAYER LIST($vl_area; $tl_arrayID; $tt_arrayNames)
```
