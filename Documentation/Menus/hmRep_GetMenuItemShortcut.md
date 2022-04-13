## hmRep_GET MENU ITEM SHORTCUT ( Area ; reference ; shortcut)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Reference|Longint|→|menu item ID
|Shortcut|Text|←|shortcut

### Description
The command *hmRep_GET MENU ITEM SHORTCUT* returns the shortcut for a menu item, defined by the parameter *reference*.

### Example
The following example returns the shortcut for a menu item:

```4d
var $vt_shortcut : Text

$vt_shortcut:=""
hmRep_GET MENU ITEM SHORTCUT(hmRep; 10; $vt_shortcut)
```
