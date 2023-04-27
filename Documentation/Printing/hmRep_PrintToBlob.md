## hmRep_Print To Blob ( Area ; Blob) → result
###### Introduced in v20.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Blob|Blob|←|Blob containing the PDF
|Result|Longint|←|1 = successful, 0 = nothing was printed

### Description
The command *hmRep_Print To Blob* prints the current report into a PDF which is stored in the blob parameter. This uses the internal PDF rendering engine.
You **don't** need to call [hmRep_SET PRINT OPTION](hmRep_SetPrintOption.md) to set the destination to PDF and/or the rendering engine!

*This command works on Windows only.*

### Example
The following example prints a reports and checks for errors:

```4d
var $vl_result; $vl_error; $vl_area : Integer
var $vx_blob : Blob

$vl_result:=hmRep_Print To Blob($vl_area; $vx_blob)
$vl_error:=hmRep_Get Last Error($vl_area)

If ($vl_error#0)
    ALERT("Printing error: "+String($vl_error))
End if 
```
