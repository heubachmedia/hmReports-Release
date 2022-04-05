## hmRep_SET RECT COLUMNS ( Area ; objectID ; columnsArray)
###### Introduced in v5.3, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object-id
|ColumnsArray|ARRAY REAL|→|Positions

### Description
The command *hmRep_SET RECT COLUMNS* defines the position of vertical lines within a rectangle object. If the object id is not an rectangle, the command does nothing.
The parameter *columnsArray* must be filled with the local positions of the lines.

### Example
The following examples defines two lines for the rectangle object:

```4d
ARRAY REAL($tz_columns;2)
$tz_columns{1}:=50
$tz_columns{2}:=30

hmRep_SET RECT COLUMNS ($vl_area;1;$tz_columns)
```
Result:

![Set Rect Columns](../Pictures/SetRectColumns.png)
