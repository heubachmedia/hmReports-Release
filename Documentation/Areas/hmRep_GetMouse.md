## hmRep_GET MOUSE (Area ; x ; y)
###### Introduced in 1.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|--- |---|:---:|---
|Area|Longint|→|hmReports area
|x|Longint|←|x - coordinate of the mouse
|y|Longint|←|y - coordinate of the mouse

### Description
The command *hmRep_GET MOUSE* returns the current mouse coordinates of the report. The returned positions x and y representing the local report coordinates; regarding scrolling and scaling.

### Example
The following example may be called in the *On Mouse Move* event of 4D to get the current report mouse position:

```4d
var $vz_x; $vz_y : Real

hmRep_GET MOUSE(hmRep; $vz_x; $vz_y)
 ```
