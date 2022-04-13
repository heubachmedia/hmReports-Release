## hmRep_DELETE MENU ITEM ( Area ; reference)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Reference|Longint|→|menu item ID

### Description
The command *hmRep_DELETE MENU ITEM* deletes a menu item defined by *reference*. If the menu item has subordinated menu items, they will be deleted.

### Example
The following example deletes a menu item with the ID *10*:

```4d
hmRep_DELETE MENU ITEM(reparea;10)
```
