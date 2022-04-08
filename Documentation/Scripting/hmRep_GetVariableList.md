## hmRep_GET VARIABLE LIST ( Area ; arrayNames)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ArrayNames|Array-Text|←|array with


### Description
The command *hmRep_GET VARIABLE LIST* returns an array with all variables defined by the command [hmRep_SET VARIABLE](hmRep_SetVariable.md). Pass a text-array in the parameter *arrayNames* and you will get all variables names.

### Example
The following example returns an array with all variables in the hmReports-area:

```4d
ARRAY TEXT($tt_vars;0)
hmRep_GET VARIABLE LIST (hmReports;$tt_vars)
```
