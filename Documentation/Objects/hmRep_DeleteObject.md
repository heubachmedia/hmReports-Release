## hmRep_DELETE OBJECT ( Area ; objectID ; deleteGroupObjects)
###### Introduced in v3.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object id
|DeleteGroupObjects|Longint|→|0 = deletes the object<br/>1 = deletes the object and objects of a group

### Description
The command *hmRep_DELETE OBJECT* deletes an objects defined by the parameter *objectID* of the current page. If the object id is *0*, all objects of the current page will be deleted. If the object is a group, you can delete all objects in the group with the parameter *deleteGroupObjects*. If this parameter is *1*, all objects containing to the group will be deleted. If you pass *0* only the main object will be deleted.

You can use the following constants:

* hmRep_DeleteObject (0)
* hmRep_DeleteGroupObjects (1)
