## hmRep_Search VStructure ( Area ; type ; tableNo  ;fieldNo  ;variable ; caption) → ID
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Type|Longint|→|Item type
|TableNo|Longint|→|Table number
|FieldNo|Longint|→|Field number
|Variable|Text|→|Variable name
|Caption|Text|→|Caption name
|ID|Longint|←|Item ID

### Description
The command *hmRep_Search VStructure* searches the Virtual Structure for an item. The parameter type defines the type of the item to search. A list of valid types can be found in the appendix [Virtual Structure item types](../Appendix/VirtualStructureItemTypes.md).
If you want to search properties of a virtual structure from the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, you can search through the properties of the virtual structure of the hmReports area.

If the type is *hmRep_vstruc_Table*, you can search:

*by table number: if you pass in *tableNo* a valid table number, the corresponding item ID will be returned.
*by caption: if you pass in *caption* the caption of a table, the corresponding item ID will be returned.

If the type is *hmRep_vstruc_Field*, you can search:

*by table and field number: if you pass in *tableNo* a valid table number and in *fieldNo* the field number, the corresponding item ID will be returned.
*by table number and by caption: if you pass in *tableNo* a valid table number and in *caption* the caption of a field, the corresponding item ID will be returned.

If the type is *hmRep_vstruc_Variable*, you can search:

*by variable: if you pass in *variable* a variable name, the corresponding item ID will be returned.
*by caption: if you pass in *caption* a caption, the corresponding item ID will be returned.

If the type is *hmRep_vstruc_Method*, you can search:

*by method: if you pass in *variable* a method name, the corresponding item ID will be returned.
*by caption: if you pass in *caption* a caption, the corresponding item ID will be returned.

### Example
The following example searches the virtual structure for a table with the number *1*:

```4d
var $vl_id : Integer

$vl_id:=hmRep_Search VStructure(hmRep; hmRep_vstruc_Table; 1; 0; ""; "")
```
