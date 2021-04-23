## hmRep_DELETE OFFSCREEN AREA (Area)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference

### Description
The command *hmRep_DELETE OFFSCREEN AREA* deletes an offscreen area which was created with the command [hmRep_New Offscreen Area](hmRep_NewOffscreenArea.md). Pass in *Area* the area reference.

### Example
The following example creates an offscreen area, draws a rectangle into it, and print it:

```4d
var $vl_area; $vl_id; $vl_printresult : Integer

$vl_area:=hmRep_New Offscreen Area(500; 500)
$vl_id:=hmRep_Create Rectangle($vl_area; 100; 100; 400; 400)
hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_PrintAsReport; 0; "")
$vl_printresult:=hmRep_Print($vl_area; 2)
hmRep_DELETE OFFSCREEN AREA($vl_area)
 ```
