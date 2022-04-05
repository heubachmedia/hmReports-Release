## hmRep_GET OBJECT DATA ( Area ; objectID ; dataType ; database ; table ; field ; variablename ; arrayindex)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object-id
|DataType|Longint|←|datatype
|Database|Text|←|database
|Table|Text|←|name of the table
|Field|Text|←|name of the field
|Variablename|Text|←|variable name
|Arrayindex|Longint|←|index of the array-element

### Description
The command *hmRep_GET OBJECT DATA* returns the data binding for an object defined by the parameter *objectID*. For descriptions of all parameters see chapter [hmRep_SET OBJECT DATA](hmRep_SetObjectData.md).
