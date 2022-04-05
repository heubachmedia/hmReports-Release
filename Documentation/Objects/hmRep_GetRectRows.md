## hmRep_GET RECT ROWS ( Area ; objectID ; rowsArray)
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object-id
|RowsArray|ARRAY REAL|←|Positions

### Description
The command *hmRep_GET RECT ROWS* returns the position of all horizontal lines within a rectangle object. If the object id is not an rectangle, the command does nothing.
The parameter *rowsArray* will be filled with the local positions of the lines.

### Example

```4d
ARRAY REAL($tz_rows;0)
hmRep_GET RECT ROWS ($vl_area;1;$tz_rows)
```
