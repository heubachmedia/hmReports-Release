## hmX_GET ARRAY ELEMENT (Context ; varname ; index ; textvalue ; realvalue ; datevalue)
###### Introduced in v3.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Varname|Text|→|Array name
|Index|Longint|→|Array index (1-n)
|Textvalue|Text|←|Text value of the variable
|Realvalue|Real|←|Number value of the variable
|Datevalue|Date|←|Date value of the variable

### Description
The command *hmX_GET ARRAY ELEMENT* returns the value of an array within an execution context.
If the index or the array does not exists, the command [hmX_GET LAST ERROR](hmX_GetLastError.md) returns an error.

### Example
The following example returns an elment value (index 10) of an array:

```4d
var $vl_context : Integer
var $vt_textvalue : Text
var $vz_realvalue : Real
var $vd_datevalue : Date

$vt_textvalue:=""
$vz_realvalue:=0
$vd_datevalue:=!00-00-00!

hmX_GET ARRAY ELEMENT($vl_context; "array"; 10; $vt_textvalue; $vz_realvalue; $vd_datevalue)
```
