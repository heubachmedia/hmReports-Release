## hmRep_DELETE PROPERTY ( Area ; scopeID ; id ; name)
###### Introduced in v1.1, Preemptive: yes

<span style="color:gray;font-family:monospace">This command is deprecated in v19. It will be removed in future versions. Please use [hmRep_Get Property Object](hmRep_GetPropertyObject.md) instead.</span>

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ScopeID|Longint|→|scope to use
|Id|Longint|→|id of the object
|Name|Text|→|name of the property

### Description
The command *hmRep_DELETE PROPERTY* deletes one custom property from an object, the area, the report or a layer. You define the scope with the parameter *scope*. If the property with the name does not exists, the command does nothing.

For a list with all possible scopes see chapter [hmRep_SET PROPERTY BY NAME](hmRep_SetPropertyByName.md).
