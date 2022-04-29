## hmX_GET LAST ERROR (Context ; error ; line ; errortext ; errormethod)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Error|Longint|←|Error code
|Line|Longint|←|Last line
|Errortext|Text|←|Error text
|Errormethod|Text|←|Error method

### Description
The command *hmX_GET LAST ERROR* returns the last error of the context defined by *context*. The parameter *error* returns the error code. If the last error happens while an execution, the line where the error occurs will be returned by the parameter *line* and the error text will returned by the parameter *errortext*. 
The parameter *errormethod* returns the method, where the error occurs.

### Example
The following example tokenizes 4D code:

```4d
$vt_error:=""
$vl_error:=0
$vl_line:=0
$vt_method:=""

hmX_GET LAST ERROR ($vl_context;$vl_error;$vl_line;$vt_error;$vt_method)
```
