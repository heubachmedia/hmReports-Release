## hmX_Create VStructure Field (Context ; tableNo ; fieldNo ; Caption) → Error
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|TableNo|Longint|→|Table number
|FieldNo|Longint|→|Field number
|Caption|Text|→|Caption of the field
|Error|Longint|←|error code

### Description
The command *hmX_Create VStructure Field* creates a Virtual Structure item for a 4D Field in the execution context. Pass the internal 4D Table number in the parameter *tableNo*. Pass the internal 4D Field number in the parameter *fieldNo*. To set a custom caption for the field, you can set the name in the parameter *caption*. If the command was successful, error returns 0.

### Example
The example shows, how the create a Virtual Structure Item with a custom Table name:

```4d
var $error : Integer

$error:=hmX_Create VStructure Field($context; Table(->[x_Customers]); Field(->[x_Customers]x_ID); "ID")
```
