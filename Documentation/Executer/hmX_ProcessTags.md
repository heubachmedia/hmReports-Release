## hmX_Process Tags (Context ; Text) → Error
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Text|Text|←→|HTML-Text to parse
|Error|Longint|←|Error code

### Description
The command *hmX_Process Tags* parses the HTML text (or any other text) for special tags and executes the code.
You have to pass a valid execution context into the parameter *context*. Pass the input text into the *text* parameter. The result is set to the same parameter back.

If an error occurs, the command returns an error code from the executer. A detailed error code is set in the result text in the line where the error occured.

### Example
The following example creates an execution context

```4d
var $vl_context; $vl_error : Integer

$vl_context:=hmX_Create Execution Context
$vl_error:=hmX_Process Tags($vl_context; $vt_document)
hmX_DELETE EXECUTION CONTEXT($vl_context)
```
