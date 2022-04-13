## hmRep_GET MENU ITEM ( Area ; reference ; text ; action ; enable ; supitem)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Reference|Longint|→|menu item ID
|Text|Text|←|item text
|Action|Longint|←|action ID
|Enable|Longint|←|0=disable, 1=enable
|Supitem|Longint|←|superior item

### Description
The command *hmRep_GET MENU ITEM* returns information about a menu item defined by *reference*. The menu item reference is unique in hmReports and can be returned by [hmRep_GET MENU ITEM LIST](hmRep_GetMenuItemList.md).
*text* returns the item text. A text of "-" represents a menu item separator.
*action* returns the defined command action. See [Menu actions](MenuActions.md) for a complete list of all commands.
*enable* returns *0* if the menu item is disable or *1* if the command is *enable*.
*supitem* returns the superior menu item. If *supitem* is *0*, the menu item is a menu bar item.

### Example
The following example returns the menu item with the ID *10*:

```4d
$text:=""
$action:=0
$enable:=0
$supitem:=0

hmRep_GET MENU ITEM (reparea;10;$text;$action;$enable;$supitem)
```
