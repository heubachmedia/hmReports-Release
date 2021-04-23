## hmRep_New Offscreen Area (Width ; Height) → Area
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Width|Longint |→|Width of the new area and report
|Height|Longint|→| Height of the new area and report
|Area|Longint |←| Area reference

### Description
With the command *hmRep_New Offscreen Area* you can create a new offscreen area. You have to delete the area with the command [hmRep_DELETE OFFSCREEN AREA](hmRep_DeleteOffscreenArea.md). <br />
Pass *Width* and *Height* of the new area and report into this command.
You can also pass in both parameters zero values. In this case, the current report has the bounds of the current printing paper.
The result is the area reference.

### Example
The following example creates an offscreen area, draws a rectangle into it, and print it:

```4d
C_LONGINT($vl_area; $vl_id)

$vl_area:=hmRep_New Offscreen Area(500; 500)
$vl_id:=hmRep_Create Rectangle($vl_area; 100; 100; 400; 400)
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_PrintAsReport; 0; "")
$vl_printresult:=hmRep_Print($vl_area; 2)
hmRep_DELETE OFFSCREEN AREA($vl_area)
```
