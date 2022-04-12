## hmRep_SET PROPERTY BY NAME ( Area ; scopeID ; id ; name ; value)
###### Introduced in v2.0, Preemptive: yes

<span style="color:gray;font-family:monospace">This command is deprecated in v19. It will be removed in future versions. Please use [hmRep_Get Property Object](hmRep_GetPropertyObject.md) instead.</span>

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ScopeID|Longint|→|scope to use
|Id|Longint|→|id of the object
|Name|Text|→|name of the property
|Value|Text|→|value of the property

### Description
The command *hmRep_SET PROPERTY BY NAME* sets a custom property for an object, the area, the report or a layer. You define the scope with the parameter *scope*. You can set a property value by name. If a property with the same name already exists, it will be overwritten.

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
