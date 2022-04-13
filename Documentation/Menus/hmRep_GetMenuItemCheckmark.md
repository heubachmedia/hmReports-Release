## hmRep_Get Menu Item Checkmark ( Area ; reference) → onOff
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Reference|Longint|→|menu item ID
|OnOff|Longint|←|1=checked<br />0=not checked

### Description
The command *hmRep_Get Menu Item Checkmark* returns the checkmark state of a menu item, defined by the parameter *reference*. If the result is *1*, the menu item is checked. If the result is *0*, the menu item is unchecked.

### Example
The following example returnes if the menu item with the reference 10, is checked:

```4d
var $vf_checked : Boolean

$vf_checked:=hmRep_Get Menu Item Checkmark(hmRep; 10)=1
```
