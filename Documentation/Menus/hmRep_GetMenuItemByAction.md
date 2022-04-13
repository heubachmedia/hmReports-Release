## hmRep_GET MENU ITEM BY ACTION ( Area ; action ; array)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Action|Longint|→|action
|Array|Longint-Array<-|←|with menu items


### Description
The command *hmRep_GET MENU ITEM BY ACTION* returns an array with all menu items with the action defined by *action*. Because several menu items may have the same action, the result can return more than one menu item.

### Example
The following example returns an array with all menu items with the action *select all*:

```4d
ARRAY LONGINT($tl_items;0)
hmRep_GET MENU ITEM BY ACTION (reparea;6;$tl_items)
