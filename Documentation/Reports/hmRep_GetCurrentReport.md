## hmRep_Get Current Report (Area) → report UUID
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Report UUID|Text|←|UUID of the current report

### Description
The command *hmRep_Get Current Report* returns the UUID for the current report of the hmReports area.

### Example
The following example sets the current report, defined by a record [Reports]UUID:

```4d
var $vt_uuid : Text

$vt_uuid:=hmRep_Get Current Report($vl_hmReportsarea)
 ```
