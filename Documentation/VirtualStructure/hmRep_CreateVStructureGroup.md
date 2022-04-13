## hmRep_Create VStructure Group ( Area ; Name) → ID
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Name|Text|→|Group name
|ID|Longint|←|ID of the item

### Description
The command *hmRep_Create VStructure Group* creates a group for Virtual Structure items. The parameter *Name* specifies the name of the group. If the command was successful, the unique *ID* is returned.

If you want to add this virtual structure to the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, the record goes to the virtual structure of the area.

### Example
The example shows, how to create a Virtual Structure group with two variables:

```4d
var $vl_id; $vl_groupid : Integer

$vl_groupid:=hmRep_Create VStructure Group(hmRep; "Group Of Variables")

$vl_id:=hmRep_Create VStructure Var(hmRep; "vt_text"; "my caption 1")
hmRep_SET VSTRUCTURE PROPERTY(hmRep; $vl_id; hmRep_vprop_GroupID; $vl_groupid; "")

$vl_id:=hmRep_Create VStructure Var(hmRep; "vd_date"; "my caption 2")
hmRep_SET VSTRUCTURE PROPERTY(hmRep; $vl_id; hmRep_vprop_GroupID; $vl_groupid; "")
```

Result:

![VirtualStructureGroupExample](../Pictures/VirtualStructureGroupExample.png)
