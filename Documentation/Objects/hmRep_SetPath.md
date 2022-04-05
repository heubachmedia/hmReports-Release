## hmRep_SET PATH ( Area ; object ID ; path)
###### Introduced in v2.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Object|ID|←|-> new object ID
|Path|Text|→|Path description as text

### Description
The command *hmRep_SET PATH* sets the path description from a (SVG) text. The path description is a standard of SVG. The command is very convenient, because you can easily set the whole path as one text. You can get such a path description with the command [hmRep_Get Path]().

For a documentation of all path types see [Path types](../Appendix/PathTypes.md).

### Example
The following example sets the path of a path object:

```4d
hmRep_SET PATH(area; 1; "M 100 100 L 300 100 L 200 300 z")
```
