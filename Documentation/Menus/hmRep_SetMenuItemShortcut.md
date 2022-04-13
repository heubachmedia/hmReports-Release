## hmRep_SET MENU ITEM SHORTCUT ( Area ; reference ; shortcut)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Reference|Longint|→|menu item ID
|Shortcut|Text|→|shortcut

### Description
The command *hmRep_SET MENU ITEM SHORTCUT* sets a new shortcut for a menu item, defined by the parameter *reference*. *Shortcut* contains a new character as shortcut for this menu item.

### Example
The following example sets a new shortcut for a menu item:

```4d
hmRep_SET MENU ITEM SHORTCUT(hmRep;10;"A")
```
