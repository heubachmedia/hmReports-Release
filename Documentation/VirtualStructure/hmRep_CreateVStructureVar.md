## hmRep_Create VStructure Var ( Area ; variable ; caption) → ID
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Variable|Text|→|Variable name
|Caption|Text|→|Caption of the variable
|ID|Longint|←|ID of the item

### Description
The command *hmRep_Create VStructure Var* creates a Virtual Structure item for a 4D Variable or Array. Pass the variable or array name in the parameter *variable*. To set a custom caption for the variable, you can set the name in the parameter *caption*. If the command was successful, the unique *ID* is returned.

If you want to add this virtual structure to the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, the record goes to the virtual structure of the area.

### Example
The example shows, how the create a Virtual Structure Item with a custom Variable name:

```4d
var $vl_id : Integer

$vl_id:=hmRep_Create VStructure Var(hmRep; "vl_id"; "ID")
```
