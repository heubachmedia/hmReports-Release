## hmRep_GET VSTRUCTURE LIST ( Area ; ArrayID)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ArrayID|Array-Longint<-|←|of all item ID's

### Description
The command *hmRep_GET VSTRUCTURE LIST* returnes a longint array with all ID's of the Virtual Structure. The array in the parameter *ArrayID* must be an array defined as ARRAY LONGINT.

If you want to get all virtual structure records from the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, you will get all records from the virtual structure of the hmReports area.

### Example
The following example returns a list of all Virtual Structure items of the hmReports area:

```4d
ARRAY LONGINT($tl_vstructure;0)
hmRep_GET VSTRUCTURE LIST (hmRep;$tl_vstructure)
```
