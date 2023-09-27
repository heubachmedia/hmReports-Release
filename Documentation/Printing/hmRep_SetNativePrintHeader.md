## hmRep_SET NATIVE PRINT HEADER ( Area ; Type ; Print Header)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Type|Longint|→|header type
|Print Header|Blob|→|print header

### Description
The command *hmRep_SET NATIVE PRINT HEADER* sets the print header of the current report. In these print headers are stored different printing settings (color mode, count of copies, tray, etc...). You should always set the print header, returned once from [hmRep_Get Native Print Header](hmRep_GetNativePrintHeader.md).

The following *types* are possible:

* 1 = Page format (macOS)
* 2 = Print settings (macOS)
* 3 = Print settings (Windows)
* 4 = Printer names (Windows)

The blob can be empty, if no page setup was made for the current report. If you transfer the hmReports document from Mac to Win (or vice versa), you have still access to the Mac print header on Windows and vice versa. Because each print header blob is stored separately in the hmReports document.

### Example
The following example gets and sets the windows print header:

```4d
var $vx_blob : Blob

$vx_blob:=hmRep_Get Native Print Header($hmReportsArea; 3)
//go to an other report
hmRep_SET NATIVE PRINT HEADER($hmReportsArea; 3; $vx_blob)
```
