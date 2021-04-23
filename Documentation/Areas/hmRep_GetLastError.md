## hmRep_Get Last Error (Area) → Error code
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|--- |---|:---:|---
|Area|Longint|→|hmReports area
|Error code|Longint|←|Error code

### Description
The command *hmRep_Get Last Error* returns the last error of the hmReports area. You can call this command after a hmReports command to check, if an error has occured.

See chapter [Error Codes](../Appendix/ErrorCodes.md) for a description of all error codes.

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
