## hmRep_GET DIALOG RECT (Area ; Type ; Left ; Top ; Right ; Bottom)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Type|Longint|→|Area reference
|Left|Real|←|Left coordinate
|Top|Real|←|Top coordinate
|Right|Real|←|Right coordinate
|Bottom|Real|←|Bottom coordinate

### Description
The command *hmRep_GET DIALOG RECT* returns the saved position of a hmReports dialog.
For an overview about all types, look at this chapter: [dialog types](../Appendix/DialogTypes.md)

In the parameters *Left*, *Top*, *Right* and *Bottom* you will get the saved position of the dialog.
These values may return 0 by default. A value of *0* means: default dialog size and position.
