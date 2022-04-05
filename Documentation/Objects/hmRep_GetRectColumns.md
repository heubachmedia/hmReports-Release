## hmRep_GET RECT COLUMNS ( Area ; objectID ; columnsArray)
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object-id
|ColumnsArray|ARRAY REAL|←|Positions

### Description
The command *hmRep_GET RECT COLUMNS* returns the position of all vertical lines within a rectangle object. If the object id is not an rectangle, the command does nothing.
The parameter *columnsArray* will be filled with the local positions of the lines.

### Example

```4d
ARRAY REAL($tz_columns;0)
hmRep_GET RECT COLUMNS ($vl_area;1;$tz_columns)
```
