## hmRep_Create VStructure Table ( Area ; tableNo ; caption) → ID
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|TableNo|Longint|→|Table number
|Caption|Text|→|Caption of the table
|ID|Longint|←|ID of the item

### Description
The command *hmRep_Create VStructure Table* creates a Virtual Structure item for a 4D Table. Pass the internal 4D Table number in the parameter *tableNo*. To set a custom caption for the table, you can set the name in the parameter *caption*. If the command was successful, the unique *ID* is returned.
If the caption is an empty string, the table is not visible in the table drop down menu in the object properties.

If you want to add this virtual structure to the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, the record goes to the virtual structure of the area.

### Example
The example shows, how the create a Virtual Structure Item with a custom Table name:

```4d
var $vl_id : Integer

$vl_id:=hmRep_Create VStructure Table(Table(->[x_Customers]); "Customers")
```

The following example shows, how to hide a table in the object properties:

```4d
var $vl_id : Integer

$vl_id:=hmRep_Create VStructure Table(hmRep; Table(->[x_Customers]); "")
```
