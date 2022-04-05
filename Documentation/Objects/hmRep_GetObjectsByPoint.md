## hmRep_GET OBJECTS BY POINT ( Area ; x ; y ; arrayIDs)
###### Introduced in v2.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|X|Real|→|x coordinate
|Y|Real|→|y coordinate
|ArrayIDs|Longint-Array|←|IDs

### Description
The command *hmRep_GET OBJECTS BY POINT* returns a list of all objects under a specific point defined by *x* and *y*.
*x* and *y* are coordinates in the report coordinate system.

### Example
The following example returns all objects under a specifc coordinate:

```4d
var $vz_x; $vz_y : Real

ARRAY LONGINT($tl_arrayIDs; 0)

hmRep_GET OBJECTS BY POINT(area; $vz_x; $vz_y; $tl_arrayIDs)
```
