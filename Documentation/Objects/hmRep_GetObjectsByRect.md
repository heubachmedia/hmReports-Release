## hmRep_GET OBJECTS BY RECT ( Area ; layerID ; left ; top ; right ; bottom ; searchInGroups ; arrayIDs)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|LayerID|Longint|→|Layer reference
|Left|Real|→|left coordinate
|Top|Real|→|top coordinate
|Right|Real|→|right coordinate
|Bottom|Real|→|bottom coordinate
|SearchInGroups|Longint|→|search in groups
|ArrayIDs|Longint-Array|←|IDs

### Description
The command *hmRep_GET OBJECTS BY RECT* returns a list of all objects under a specific rectangle defined by *left*, *top*, *right* and *bottom*. Pass a layer reference in *layerID* to restrict the search to a specific layer or pass *0* for all layers.
Pass *1* in the parameter *searchInGroups* to find objects in groups, otherwise pass *0*.

### Example
The following example returns all objects under a specifc rectangle (50;50;100;100):

```4d
ARRAY LONGINT($tl_arrayIDs;0)

hmRep_GET OBJECTS BY RECT(area;0;50;50;100;100;0;$tl_arrayIDs)
```
