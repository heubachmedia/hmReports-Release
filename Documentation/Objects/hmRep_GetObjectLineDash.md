## hmRep_GET OBJECT LINEDASH ( Area ; objectID ; phase ; arrayDashes)
###### Introduced in v2.3, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object-id
|Phase|Real|←|Phase to begin
|ArrayDashes|ARRAY|←|Dashes array

### Description
The command *hmRep_GET OBJECT LINEDASH* returns the line dash pattern of an object. For more information about line dahes and the parameters, see chapter [hmRep_SET OBJECT LINEDASH](hmRep_SetObjectLineDash.md).

### Example
The following examples returns the line dash pattern of an object:

```4d
var $vz_phase : Real

ARRAY REAL($tz_dashes; 0)
$vz_phase:=0

hmRep_GET OBJECT LINEDASH(reparea; $vl_id; $vz_phase; $tz_dashes)
```
