## hmRep_DELETE OBJECTS ( Area ; scope ; scopeID)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Scope|Longint|→|scope
|ScopeID|Longint|→|scope ID

### Description
The command *hmRep_DELETE OBJECTS* deletes objects defined by the scope and scope id:

* hmRep_scope_Layer: Passing the layer reference in *scopeID* deletes all objects from the layer
* hmRep_scope_Group: Passing the object reference in *scopeID* deletes the object; if it is a group, it also deletes all sub-objects
* hmRep_scope_Object: Passing the object reference in *scopeID* deletes the object; if it is a group, it does **not** deleting sub-objects
* hmRep_scope_Report: *scopeID* is always *0*. It deletes all objects of the current report
* hmRep_scope_Page: Passing the page number (**not reference!**) in *scopeID* deletes all objects from the page

### Example
The following example deletes all objects from the page 1:

```4d
hmRep_DELETE OBJECTS($vl_area; hmRep_scope_Page; 1)
```
