## hmX_Create VStructure Meth (Context ; Method name ; Caption) → Error
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Methodname|Text|→|Method name
|Caption|Text|→|Caption of the method
|Error|Longint|←|error code

### Description
The command *hmX_Create VStructure Meth* creates a Virtual Structure item for a 4D Method. Pass the method name in the parameter *methodname*. To set a custom caption for the method, you can set the name in the parameter *caption*. If the command was successful, error returns 0.

### Example
The example shows, how the create a Virtual Structure Item with a custom method name:

```4d
var $error : Integer

$error:=hmX_Create VStructure Meth($context; "xy_my_get_date"; "GetDate")
```
