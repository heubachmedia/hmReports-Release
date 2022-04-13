## hmRep_GET MENU LIST ( Area ; array)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Array|Longint-Array<-|←|of ID's

### Description
The command *hmRep_GET MENU LIST* returns an array of all menu items lists. Also submenus are in this array.
The contextual menu of hmReports has the ID -1.

### Example
The following example returns an array of all menus:

```4d
ARRAY LONGINT($tl_menus;0)
hmRep_GET MENU LIST (reparea;$tl_menus)
```
