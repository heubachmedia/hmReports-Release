## hmX_Execute (Method ; Error ; Line) → Error
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Method|Blob|→|Tokenized method
|Error|Text|←|error text
|Line|Longint|←|error line
|Error|Longint|←|error code

### Description
The command *hmX_Execute* executes a tokenized method.
This is a convenient method to execute a method. It creates and deletes an execution context automatically.
If an error occurs, the error will be returned. The error text and the error line will be returned in parameter 2 and 3.

### Example
The following example tokenizes a method and executes the method:

```4d
var $vx_script : Blob
var $vt_error_text : Text
var $vl_error; $vl_error_line : Integer

SET BLOB SIZE($vx_script; 0)
hmX_TOKENIZE("$a:=100"; $vx_script)
$vl_error:=hmX_Execute($vx_script; $vt_error_text; $vl_error_line)
```
