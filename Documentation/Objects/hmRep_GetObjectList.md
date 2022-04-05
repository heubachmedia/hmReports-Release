## hmRep_GET OBJECT LIST( Area ; scope ; scopeID ; arrayIDs)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Scope|Longint|→|scope
|ScopeID|Longint|→|scope ID
|ArrayIDs|Longint-Array|←|IDs

### Description
The command *hmRep_GET OBJECT LIST* returns a list of objects, depending of the scope. For the scopes, you can use the [predefined constants](../Appendix/Scopes.md) see below.

### Scopes

#### hmRep_scope_Layer (1)

Pass the layer ID in *scopeID* to return an object list with all objects to the layer. If you pass *0* in *scopeID*, all objects of all layers will be returned.

#### hmRep_scope_ObjectType (2)

Pass a object type in *scopeID* to return an object list with all objects of the given type.

#### hmRep_scope_Selected (3)

Pass a *1* in *scopeID* to return an object list with all selected objects. Pass a *0* in *scopeID* to return an object list with all not selected objects.

#### hmRep_scope_Group (4)

Pass an object ID of a group in *scopeID* to return an object list with all objects of the group.

#### hmRep_scope_Report (7)

Returns all objects of a report. *scopeID* is always *0*.

#### hmRep_scope_Page (8)

Pass the page number of the current report in *scopeID* to return an object list with all objects of the page.

#### hmRep_scope_Section (9)

Pass the [Section types](../Appendix/SectionTypes.md) in *scopeID*. By default, the count of the section is 1. You will get a list of all objects within  with the bounds of the section. Notice: some objects may appear in more than one section! The count of the section can be defined by adding the count in the higher two bytes (example see below).

Example:

```4d
ARRAY LONGINT($tl_objects; 0)
hmRep_GET OBJECT LIST(reparea; hmRep_scope_Section; hmRep_Section_Pageheader; $tl_objects)
```
Example using detail section with count 2:

```4d
ARRAY LONGINT($tl_objects; 0)
$vl_section_type:=hmRep_Section_Detail
$vl_section_count:=2

hmRep_GET OBJECT LIST(reparea; hmRep_scope_Section; $vl_section_type+($vl_section_count << 16); $tl_objects)
```
**Other scopes are not supported**.
