## hmRep_Get Property By Name ( Area ; scopeID ; id ; name) → value
###### Introduced in v1.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ScopeID|Longint|→|scope to use
|Id|Longint|→|id of the object
|Name|Text|→|name of the property
|Value|Text|←|value of the property

### Description
The command *hmRep_Get Property By Name* returns a custom property from an object, the area, the report or a layer with the property name defined by the parameter *name*. You define the scope with the parameter *scope*. If the property with the name does not exists, an empty string will be returned.

For a list with all possible scopes see chapter [hmRep_SET PROPERTY BY NAME](hmRep_SetPropertyByName.md).
