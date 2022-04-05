## hmRep_Create Arc ( Area ; x ; y ; radiusx ; radiusy ; startAngle ; endAngle ; clockwise) → object ID
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|X|Real|→|center point x
|Y|Real|→|center point y
|Radiusx|Real|→|x radius
|Radiusy|Real|→|y radius
|StartAngle|Longint|→|start angle in degrees (0-359)
|EndAngle|Longint|→|end angle in degrees (0-359)
|Clockwise|Longint|→|1=clockwise, 0=anti-clockwise
|Object|ID|←|new object ID

### Description
The command *hmRep_Create Arc* creates an arc object.
