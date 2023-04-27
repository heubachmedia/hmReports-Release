## hmRep_Print ( Area ; Options) → result
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Options|Longint|→|flags for printing
|Result|Longint|←|1 = successful, 0 = nothing was printed

### Description
The command *hmRep_Print* prints the current report. You may use the printing flags to show printing dialogs before printing. If the printing was successful, the result is *1*, otherwise *0*. You should always check the last error with the command [hmRep_Get Last Error](../Areas/hmRep_GetLastError.md).

* Show PageSetup      0x0001
* Show PrintSettings  0x0002
* Don't print         0x0004

The *Don't print*-option is useful, if you want the user to call all printing dialogs and set the print record without printing.

The parameter *options* will be ignored, if you print within an open printing session, see [hmRep_OPEN PRINTING JOB](hmRep_OpenPrintJob.md).

Important for Windows and Offscreen-Areas: If you want to call printing dialogs, you should set the corresponding Windows Reference with [hmRep_SET AREA PROPERTY](../Areas/hmRep_SetAreaProperty.md) and *hmRep_prop_WindowRef*.

### Example
The following example prints a reports and checks for errors:

```4d
var $vl_result; $vl_error : Integer

$vl_result:=hmRep_Print(area; 0)
$vl_error:=hmRep_Get Last Error(area)

If ($vl_error#0)
	ALERT("Printing error: "+String($vl_error))
End if 
```
