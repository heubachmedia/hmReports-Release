## hmRep_Has Property ( Area ; scopeID ; id ; name) → exist
###### Introduced in v1.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ScopeID|Longint|→|scope to use
|Id|Longint|→|id of the object
|Name|Text|→|name of the property
|Exist|Longint|←|0=does not exists


### Description
The command *hmRep_Has Property* checks, if an object, an area, a report or a layer has a custom property defined by scope, id and name. You define the scope with the parameter *scope*. If the property with the name exists, a *1* will be returned, otherwise *0*.

For a list with all possible scopes see chapter [hmRep_SET PROPERTY BY NAME](hmRep_SetPropertyByName.md).
