## hmRep_SET DIALOG RECT (Area ; Type ; Left ; Top ; Right ; Bottom)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Type|Longint|→|Area reference
|Left|Real|→|Left coordinate
|Top|Real|→|Top coordinate
|Right|Real|→|Right coordinate
|Bottom|Real|→|Bottom coordinate

### Description
The command *hmRep_SET DIALOG RECT* sets a new position and size of a hmReports dialog.
For an overview about all types, look at this chapter: [dialog types](../Appendix/DialogTypes.md).

In the parameters *Left*, *Top*, *Right* and *Bottom* you have to pass new position values of the dialog.
You can also set *0* to all values which means the usage of a default dialog size and position.
