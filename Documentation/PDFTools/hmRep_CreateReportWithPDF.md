## hmRep_Create Report With PDF ( Area ; path) → report UUID
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Path|Text|→|path to the PDF
|Report|UUID|←|<- UUID of the created report

### Description
The command *hmRep_Create Report With PDF* creates a new report in the current hmReports area based on the PDF defined by *path*. The new report hast the same count and same measures as the PDF file. It does **not** contain the content of the PDF. It does not render the PDF.
The purpose of the command is, to create a report with the same count of pages, draw on it and to save it again with the command [hmRep_Print Over PDF](hmRep_PrintOverPDF.md).

The new created report will be not the current report. If you want this report as the current report, you must use [hmRep_SET CURRENT REPORT](../Reports/hmRep_SetCurrentReport.md).

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
