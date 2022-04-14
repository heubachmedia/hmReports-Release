## hmRep_GET RULERUNIT ( Area ; number ; name ; pixelmapping ; shortsteps ; longsteps)
###### Introduced in v2.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Number|Longint|→|Index number of the unit
|Name|Text|←|Name of the unit
|Pixelmapping|Real|←|Count of pixels
|Shortsteps|Real|←|A short step each x unit
|Longsteps|Real|←|A long step each x unit

### Description
The command *hmRep_GET RULERUNIT* returns information about an existing ruler unit in the area defined by *area*.
For explanation of all parameter, please see chapter [About ruler units](../Commands.md#ruler-units).

### Example
The following example returns an existing ruler unit:

```4d
var $vt_unitname : Text
var $vz_pixelmapping; $vz_shortsteps; $vz_longsteps : Real

$vt_unitname:=""
$vz_pixelmapping:=0
$vz_shortsteps:=0
$vz_longsteps:=0

hmRep_GET RULERUNIT(reparea; 1; $vt_unitname; $vz_pixelmapping; $vz_shortsteps; $vz_longsteps)
```
