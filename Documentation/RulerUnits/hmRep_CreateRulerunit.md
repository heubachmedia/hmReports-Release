## hmRep_Create Rulerunit ( Area ; name ; pixelmapping ; shortsteps ; longsteps) → number
###### Introduced in v2.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Name|Text|→|Name of the unit
|Pixelmapping|Real|→|Count of pixels
|Shortsteps|Real|→|A short step each x unit
|Longsteps|Real|→|A long step each x unit
|Number|Longint|←|Current number of the unit

### Description
The command *hmRep_Create Rulerunit* creates a new ruler unit in the area defined by *area*.
For explanation of all parameter, please see chapter [About ruler units](../Commands.md#ruler-units).

### Example
The following example creates a new ruler unit with the unit "Meter" where 100 pixels equals 1 Meter:

```4d
var $vl_id : Integer

$vl_id:=hmRep_Create Rulerunit(reparea; "Meter"; 100; 1; 5)
```
