## hmRep_GET PROPERTY BY INDEX ( Area ; scopeID ; id ; index ; name ; value)
###### Introduced in v1.1, Preemptive: yes

<span style="color:gray;font-family:monospace">This command is deprecated in v19. It will be removed in future versions. Please use [hmRep_Get Property Object](hmRep_GetPropertyObject.md) instead.</span>

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ScopeID|Longint|→|scope to use
|Id|Longint|→|id of the object
|Index|Longint|→|index of the property
|Name|Text|←|name of the property
|Value|Text|←|value of the property

### Description
The command *hmRep_GET PROPERTY BY INDEX* returns a custom property from an object, the area, the report or a layer with the index defined by the parameter *index*. You define the scope with the parameter *scope*. If the property with the index does not exists, an empty string in *name* and *value* will be returned.

For a list with all possible scopes see chapter [hmRep_SET PROPERTY BY NAME](hmRep_SetPropertyByName.md).
