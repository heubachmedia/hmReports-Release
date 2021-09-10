## hmRep_Enumerate Pages (Area) → Result
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Result|Longint|←|Count of total pages

### Description
The command *hmRep_Enumerate Pages* returns the total count of rendered pages.

When calling this command, hmReports renders the report internally. Scripts are executed, current selections may change.
This kind of rendering is very optimized, because "drawing" to a device does not happen.

### Example

```4d
var $vl_count_pages : Integer

$vl_count_pages:=hmRep_Enumerate Pages($vl_area)
```
