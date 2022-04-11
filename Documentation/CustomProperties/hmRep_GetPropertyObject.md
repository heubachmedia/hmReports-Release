## hmRep_Get Property Object ( Area ; scopeID ; id) → propertyObject
###### Introduced in v19, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ScopeID|Longint|→|scope to use
|Id|Longint|→|id of the object
|propertyObject|Object|←|property object

### Description
The command *hmRep_Get Property Object* returns a custom property object variable from the area, the report or a layer. You define the scope with the parameter *scope*.
If the scope object (area, report, page, object, layer) does not exists, the result *propertyObject* is *null*. If the object is not null you can use the object to put your private properties in it.

You can use the following constants for scopes:

## Scopes
### hmRep_scope_Layer (1)
Pass the layer ID in *id* to set a custom property to a layer.

### hmRep_scope_Area (5)
Use this scope to set a custom property to the hmReports area. *id* is always *0*.

### hmRep_scope_Object (6)
Pass the object ID in *id* to set a custom property to an object.

### hmRep_scope_Report (7)
Use this scope to set a custom property to the current report. *id* is always *0*.

### hmRep_scope_Page (8)
Use this scope to set a custom property to the current page. *id* is the page number.
