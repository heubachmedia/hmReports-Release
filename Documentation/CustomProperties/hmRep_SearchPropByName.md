## hmRep_SEARCH PROP BY NAME ( Area ; scopeID ; name ; searchstring ; arrayIDs)
###### Introduced in v4.0, Preemptive: yes

<span style="color:gray;font-family:monospace">This command is deprecated in v19. It will be removed in future versions. Please use [hmRep_Get Property Object](hmRep_GetPropertyObject.md) instead.</span>

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ScopeID|Longint|→|scope to use
|Name|Text|→|name of the property
|Searchstring|Text|→|string to search
|ArrayIDs|Longint-Array<-|←|of ID's

### Description
The command *hmRep_SEARCH PROP BY NAME* searches all properties of an area, reports, layers and objects. You define the scope with the parameter *scope*.

Scopes are described in the chapter [hmRep_SET PROPERTY BY NAME](hmRep_SetPropertyByName.md).

Pass the name of the property in the parameter *name* you want to search. In *searchstring* you can pass a string to search. You can use the 4D wild character *@*. For example, if you want to search for all property values starting with *X*, you can use *X@*. The searchstring is not diacritic.

The result is returned in the LONGINT ARRAY *arrayIDs*.

If you search in the area scope (hmRep_scope_Area), the ID is the area handle reference.
If you search in the reports scope (hmRep_scope_Report), the ID is the order number of the report in the area. To find the UUID, you can use [hmRep_GET REPORT LIST](../Areas/hmRep_GetReportList.md) to find it out.
If you search in the layer scope (hmRep_scope_Layer), the ID is the layer reference.
If you search in the object scope (hmRep_scope_Object), the ID is the object reference. If *name* is empty, you can search in the object name.
If you search in the current page in the object scope (hmRep_scope_ObjectCurrentPage), the ID is the object reference. The search uses the current page only. If *name* is empty, you can search in the object name.
If you search in the page scope (hmRep_scope_Page), the ID is the page number.

### Example
The following example creates objects and sets a property with the name *myprop* to it. After that, a search for the values is executed:

```4d
ARRAY LONGINT($tl_obj; 5)
$tl_obj{1}:=hmRep_Create Rectangle(reparea; 100; 200; 400; 400)
$tl_obj{2}:=hmRep_Create Rectangle(reparea; 100; 200; 400; 400)
$tl_obj{3}:=hmRep_Create Rectangle(reparea; 100; 200; 400; 400)
$tl_obj{4}:=hmRep_Create Rectangle(reparea; 100; 200; 400; 400)
$tl_obj{5}:=hmRep_Create Rectangle(reparea; 100; 200; 400; 400)

hmRep_SET PROPERTY BY NAME(reparea; hmRep_scope_Object; $tl_obj{1}; "myprop"; "mytext")
hmRep_SET PROPERTY BY NAME(reparea; hmRep_scope_Object; $tl_obj{2}; "myprop"; "mytext1")
hmRep_SET PROPERTY BY NAME(reparea; hmRep_scope_Object; $tl_obj{3}; "myprop"; "mytext2")
hmRep_SET PROPERTY BY NAME(reparea; hmRep_scope_Object; $tl_obj{4}; "myprop"; "mytext3")
hmRep_SET PROPERTY BY NAME(reparea; hmRep_scope_Object; $tl_obj{5}; "myprop"; "xxx1")

ARRAY LONGINT($tl_ids; 0)
hmRep_SEARCH PROP BY NAME(reparea; hmRep_scope_Object; "myprop"; "mytext@"; $tl_ids)
```
The command returns an array with 4 elements.
