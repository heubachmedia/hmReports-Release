## hmRep_DELETE VARIABLE ( Area ; varname)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Varname|Text|→|variable name

### Description
The command *hmRep_DELETE VARIABLE* deletes a variable in the hmReports-area. The variable must be defined by the command [hmRep_SET VARIABLE](hmRep_SetVariable.md).

If the variable was not found, [hmRep_Get Last Error](../Areas/hmRep_GetLastError.md) returns the error -52.

### Example
The following example deletes the variable *my_variable*:

```4d
hmRep_DELETE VARIABLE (eExt1;"my_variable")
```
