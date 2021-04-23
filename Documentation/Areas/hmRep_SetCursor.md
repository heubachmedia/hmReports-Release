## hmRep_SET CURSOR (Area ; CursorID ; ForceCursor)
###### Introduced in v4, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|CursorID|Longint|→|Cursor ID
|ForceCursor|Longint|→|Force the cursor

### Description
The command *hmRep_SET CURSOR* sets the current cursor. This command works in the callback events "On Mouse Enter/Move/Leave" only.
You can use one of the following cursor ID's:

* 0 = Standard (Arrow)
* 1 = Cursor with two arrows: left top to right bottom
* 2 = Cursor with two arrows: left bottom to right top
* 3 = Cursor with two arrows: north/south
* 4 = Cursor with two arrows: west/east
* 5 = Cross cursor
* 6 = Open hand
* 7 = Closed hand
* 8 = Not allowed cursor
* 9 = Rotate
* 10 = Magnifying glass
* 11 = Pointing hand

Pass *1* in *ForceCursor* to force the current cursor. It overwrites default cursors like resizing cursors at object edge handles. Passing *0* overwrites only, if the current cursor is a standard cursor.

### Example
The following example sets the cursor to a magnifying glass:

```4d
hmRep_SET CURSOR($vl_area; 10; 1)
 ```
