## hmRep_SET MENU ITEM CHECKMARK ( Area ; reference ; onOff)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Reference|Longint|→|menu item ID
|OnOff|Longint|→|1=checked<br />0=not checked

### Description
The command *hmRep_SET MENU ITEM CHECKMARK* sets the checkmark for a menu item, defined by the parameter *reference*. Pass *1* for checked or *0* for not checked. Standard is *0*.

**Important: If you set the checkmark of a standard menu item, the checkmark can be overwritten by hmReports while runtime.**

### Example
The following example checks the menu items with the reference 10:

```4d
hmRep_SET MENU ITEM CHECKMARK(hmRep;10;1)
```
