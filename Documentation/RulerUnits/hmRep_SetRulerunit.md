## hmRep_SET RULERUNIT ( Area ; number ; name ; pixelmapping ; shortsteps ; longsteps)
###### Introduced in v2.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Number|Longint|→|Index number of the unit
|Name|Text|→|Name of the unit
|Pixelmapping|Real|→|Count of pixels
|Shortsteps|Real|→|A short step each x unit
|Longsteps|Real|→|A long step each x unit

### Description
The command *hmRep_SET RULERUNIT* updates an existing ruler unit in the area defined by *area*.
For explanation of all parameter, please see chapter [About ruler units](../Commands.md#ruler-units).

### Example
The following example updates an existing ruler unit:

```4d
hmRep_SET RULERUNIT(reparea;1;"Meter";100;1;5)
```
