## hmRep_SET MENU ITEM ( Area ; reference ; text ; action ; enable ; supitem)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Reference|Longint|→|menu item ID
|Text|Text|→|item text
|Action|Longint|→|action ID
|Enable|Longint|→|0=disable, 1=enable
|Supitem|Longint|→|superior item

### Description
The command *hmRep_SET MENU ITEM* sets new properties for a menu item defined by *reference*. The menu item reference is unique in hmReports and can be returned by [hmRep_GET MENU ITEM LIST](hmRep_GetMenuItemList.md).
*text* sets the item text. An item text of "-" will represent a separator.
*action* sets the defined command action. See [Menu actions](MenuActions.md) for a complete list of all commands.
*enable*: set *0* for disable the menu item or *1* to enable the menu item.
*supitem* sets the superior menu item. If *supitem* is *0*, the menu item belongs to the menu bar.

**Important: if the menu item of *supitem* does not exists an error occur and the command will not be executed. Use [hmRep_Get Last Error](../Areas/hmRep_GetLastError.md) to get the last error.**

### Example
The following example sets a new item text for the menu item with the ID *10*:

```4d
$text:=""
$action:=0
$enable:=0
$supitem:=0

hmRep_GET MENU ITEM (reparea;10;$text;$action;$enable;$supitem)
hmRep_SET MENU ITEM (reparea;10;"Testtext...";$action;$enable;$supitem)
```
