## hmRep_Get Native Print Header ( Area ; Type ) → print header
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Type|Longint|→|header type
|Print Header|Blob|←|print header

### Description
The command *hmRep_Get Native Print Header* returns the print header of the current report. It returns the native printer header, which are different for each printer driver and operating system. In those print headers are stored different printing settings (color mode, count of copies, tray, etc...).

On macOS the print headers usually retuning an UTF-8 encoded XML document. You may parse this document with 4D's DOM commands.

The following *types* are possible:

* 1 = Page format (macOS)
* 2 = Print settings (macOS)
* 3 = Print settings (Windows)
* 4 = Printer names (Windows)

The blob can be empty, if no page setup was made for the current report. If you transfer the hmReports document from Mac to Win (or vice versa), you have still access to the Mac print header on Windows and vice versa. Because each print header blob is stored separately in the hmReports document.

### Example
The following example returns the windows print header:

```4d
var $vx_blob : Blob

$vx_blob:=hmRep_Get Native Print Header($hmReportsArea; 3)
```
