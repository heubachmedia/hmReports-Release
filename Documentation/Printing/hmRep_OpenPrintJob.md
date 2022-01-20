## hmRep_OPEN PRINTING JOB ( Area ; Options)
###### Introduced in v6.0, Preemptive: no

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Options|Longint|→|flags for printing

### Description
The command *hmRep_OPEN PRINTING JOB* creates a new printing job. You can have only one printing job per area. For prining options, please look at the [hmRep_Print](hmRep_Print.md)-command.

Important: You have to close the printing job always with [hmRep_CLOSE PRINTING JOB](hmRep_ClosePrintJob.md), even if you delete the area with [hmRep_DELETE OFFSCREEN AREA](../Areas/hmRep_DeleteOffscreenArea.md).

The commands starts a printing job with the current print settings of the current report. Keep in mind, that you cannot change the print settings in an open printing job. After calling this command, you can add reports to that printing session with [hmRep_Print](hmRep_Print.md). After calling [hmRep_CLOSE PRINTING JOB](hmRep_ClosePrintJob.md), the print job will be finalized and will be send to the printer.

### Example
The following example creates an offscreen area and starts a printing job. It printings 10 reports in a loop and closes the job. The result is a printing job with 10 pages:

```4d
var $vl_area; $vl_id; $vl_error : Integer

$vl_area:=hmRep_New Offscreen Area(1000; 1000)

hmRep_OPEN PRINTING JOB($vl_area; 0x0001+0x0002)

For ($i; 1; 10)
	hmRep_CLEAR REPORT($vl_area)
	
	$vl_id:=hmRep_Create Rectangle($vl_area; 100; 100; 400; 400)
	$vl_id:=hmRep_Create Text($vl_area; 100; 400; 400; 500; "Report #"+String($i))
	
	hmRep_SET REPORT PROPERTY($vl_area; hmRep_rprop_PrintAsReport; 0; "")  //Print as Area
	$vl_error:=hmRep_Print($vl_area; 0)
	
End for 

hmRep_CLOSE PRINTING JOB($vl_area)
hmRep_DELETE OFFSCREEN AREA($vl_area)
```
