## hmRep_Print Over PDF ( Area ; path) → error code
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Path|Text|→|path to the PDF
|Error|Code|←|<- error code

### Description
The command *hmRep_Print Over PDF* prints the current report over the PDF based on *path*. You should use [hmRep_Create Report With PDF](hmRep_CreateReportWithPDF.md) to create the report, to be sure to have the same count of pages and the same measures.

The path must be in POSIX style on Mac.

### Example
The following example creates a new report, draws a text on each page and saved the changes back to the PDF:

```4d
var $i; $vl_area; $vl_pages; $vl_id; $vl_error : Integer
var $vt_report; $vt_path : Text

$vl_area:=hmRep_New Offscreen Area(0; 0)
$vt_report:=hmRep_Create Report With PDF($vl_area; $vt_path)
hmRep_SET CURRENT REPORT($vl_area; $vt_report)

$vl_pages:=hmRep_Count Pages($vl_area)

For ($i; 1; $vl_pages)
	
	hmRep_SET CURRENT PAGE($vl_area; $i)
	$vl_id:=hmRep_Create Text($vl_area; 300; 300; 400; 400; "This is a test - Page "+String($i))
	$vl_id:=hmRep_Create Rectangle($vl_area; 0; 0; 100; 100)
	
End for 

$vl_error:=hmRep_Print Over PDF($vl_area; $vt_path)

hmRep_DELETE OFFSCREEN AREA($vl_area)
```
