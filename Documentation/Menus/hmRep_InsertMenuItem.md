## hmRep_Insert Menu Item ( Area ; menu ; position) → result
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Menu|Longint|→|menu ID
|Position|Longint|→|position, 0=first position
|Result|Longint|←|new menu item reference

### Description
The command *hmRep_Insert Menu Item* creates a menu item. The menu item will be subordinated under the menu item defined by *menu*. If menu is *0* the menu item will belong to the menu bar. The menu ID *-1* represents the contextual menu.
*Position* defines the position in the menu list, after which item the new menu item will be created. If position is *0*, the menu item will be the first item in the menu item list.
*Result* returns the new item reference or *0* if an error occured.

After creation the menu item is empty. You have to set information about the item with [hmRep_SET MENU ITEM](hmRep_SetMenuItem.md).

### Example
The following example creates a new menu item after position 5 in the contextual menu of hmReports:

```4d
$vl_ref:=hmRep_Insert Menu Item (reparea;-1;5)
```
