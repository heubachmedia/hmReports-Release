## hmX_Create VStructure Table (Context ; tableNo ; Caption) → Error
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|TableNo|Longint|→|Table number
|Caption|Text|→|Caption of the table
|Error|Longint|←|error code

### Description
The command *hmX_Create VStructure Table* creates a Virtual Structure item for a 4D Table. Pass the internal 4D Table number in the parameter *tableNo*. To set a custom caption for the table, you can set the name in the parameter *caption*. If the command was successful, error returns 0.

### Example
The example shows, how the create a Virtual Structure Item with a custom Table name:

```4d
var $error : Integer

$vl_id:=hmX_Create VStructure Table($context; Table(->[x_Customers]); "Customers")
```
