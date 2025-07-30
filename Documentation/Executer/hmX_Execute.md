## hmX_Execute (Method ; Error ; Line) → Error
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Method|Blob/Object|→|Tokenized method
|Error|Text|←|error text
|Line|Longint|←|error line
|Error|Longint|←|error code

### Description
The command *hmX_Execute* executes a tokenized method (blob or script object).
This is a convenient method to execute a method. It creates and deletes an execution context automatically.
If an error occurs, the error will be returned. The error text and the error line will be returned in parameter 2 and 3.

### Example
The following example tokenizes a method and executes the method:

```4d
var $vo_script : Object
var $vt_error_text : Text
var $vl_error; $vl_error_line : Integer

$vo_script:=hmX_Tokenize To Object("$a:=100")
$vl_error:=hmX_Execute($vo_script; $vt_error_text; $vl_error_line)
```
