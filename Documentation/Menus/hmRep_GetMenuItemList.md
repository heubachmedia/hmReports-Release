## hmRep_GET MENU ITEM LIST ( Area ; menu ; array)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Menu|Longint|→|menu ID
|Array|Longint-Array<-|←|of ID's

### Description
The command *hmRep_GET MENU ITEM LIST* returns an array of all menu items defined by *menu*. Pass in parameter *menu* a valid menu id returned by the command [hmRep_GET MENU LIST](hmRep_GetMenuList.md).
The contextual menu of hmReports has the ID -1.
If you pass *0* as *menu*, all top menus are returned. A top menu is an item of the menu bar.

### Example
The following example gets an array of all available menus and return an array of all items of the 10th menu:

```4d
ARRAY LONGINT($tl_menus;0)
hmRep_GET MENU LIST (reparea;$tl_menus)

ARRAY LONGINT($tl_items;0)
hmRep_GET MENU ITEM LIST (reparea;$tl_menus{10};$tl_items)
```
