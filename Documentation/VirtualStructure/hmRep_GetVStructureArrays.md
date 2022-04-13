## hmRep_GET VSTRUCTURE ARRAYS ( Area ; type ; inList ; arrayID ; arrayType ; arrayVariable ; arrayCaption ; arrayDescription ; arrayGroupID ; arrayTableNo ; arrayFieldNo)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Type|Longint|→|0 for all or vstructure type
|InList|Longint|→|0 for all<br />1=is in list<br />-1=not in list
|ArrayID|Array-Longint<-|←|of all item ID's
|ArrayType|Array-Longint<-|←|of vstructure types
|ArrayVariable|Array-Text|←|Array of variable names
|ArrayCaption|Array-Text|←|Array of captions
|ArrayDescription|Array-Text|←|Array of descriptions
|ArrayGroupID|Array-Longint<-|←|of group ID's
|ArrayTableNo|Array-Longint<-|←|of table numbers
|ArrayFieldNo|Array-Longint<-|←|of field numbers

### Description
The command *hmRep_GET VSTRUCTURE ARRAYS* returnes a lot of information about the virtual structure. Using this command, instead of [hmRep_GET VSTRUCTURE LIST](hmRep_GetVStructureList.md), has the best performance to catch all information about the virtual structure.

If you want to get all virtual structure records from the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, you will get all records from the virtual structure of the hmReports area.

If you want to return all types of virtual structure items, you have to pass the [type](../Appendix/VirtualStructureItemTypes.md) in the parameter *type* or pass *0* for all types.

With the parameter *inList*, you can filter for the property *hmRep_vprop_InList*. Pass *0* for all, or *1* for "is in list" or *-1* for "not in list".

### Example
The following example returns a list of all Virtual Structure items with type of a variable, which have the property *in list*:

```4d
ARRAY LONGINT($tl_arrayID; 0)
ARRAY LONGINT($tl_arrayType; 0)
ARRAY TEXT($tt_arrayVariable; 0)
ARRAY TEXT($tt_arrayCaption; 0)
ARRAY TEXT($tt_arrayDescription; 0)
ARRAY LONGINT($tl_arrayGroupID; 0)
ARRAY LONGINT($tl_arrayTableNo; 0)
ARRAY LONGINT($tl_arrayFieldNo; 0)

hmRep_GET VSTRUCTURE ARRAYS($vl_area; hmRep_vstruc_Variable; 1; $tl_arrayID; $tl_arrayType; $tt_arrayVariable; $tt_arrayCaption; $tt_arrayDescription; $tl_arrayGroupID; $tl_arrayTableNo; $tl_arrayFieldNo)

```
