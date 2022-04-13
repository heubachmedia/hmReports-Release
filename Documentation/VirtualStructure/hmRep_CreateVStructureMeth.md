## hmRep_Create VStructure Meth ( Area ; methodname ; caption) → ID
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Methodname|Text|→|Method name
|Caption|Text|→|Caption of the method
|ID|Longint|←|ID of the item

### Description
The command *hmRep_Create VStructure Meth* creates a Virtual Structure item for a 4D Method. Pass the method name in the parameter *methodname*. To set a custom caption for the method, you can set the name in the parameter *caption*. The caption is the visible method name in the script editor. You shouldn't leave this parameter empty. If the command was successful, the unique *ID* is returned.

If you want to add this virtual structure to the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, the record goes to the virtual structure of the area.

### Example
The example shows, how the create a Virtual Structure Item with a custom method name:

```4d
var $vl_id : Integer

$vl_id:=hmRep_Create VStructure Meth(hmRep; "xy_my_get_date"; "GetDate")
```
