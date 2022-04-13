## hmRep_DELETE VSTRUCTURE ( Area ; ID)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ID|Longint|→|ID of the item
|Or|0|←|all items

### Description
The command *hmRep_DELETE VSTRUCTURE* deletes a Virtual Structure item. Pass the reference of the item in the parameter *ID*. If the reference equals 0, all Virtual Structure items will be deleted.

If you want to delete a virtual structure record from the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, the record will be deleted from the virtual structure which was set as current virtual structure (depends on the area setting: *hmRep_prop_UseVStructure*).

### Example
The following example shows, how you can delete a Virtual Structure item from a hmReports area with the ID 1:

```4d
hmRep_DELETE VSTRUCTURE (hmRep;1)
```
The following example shows, how you can delete **all** Virtual Structure items from a hmReports area:

```4d
hmRep_DELETE VSTRUCTURE (hmRep;0)
```
The following example shows, how you can delete **all** Virtual Structure items from the global virtual structure:

```4d
hmRep_DELETE VSTRUCTURE (0;0)
```
