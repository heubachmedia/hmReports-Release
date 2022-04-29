## hmX_GET ARRAY (Context ; varname ; array)
###### Introduced in v3.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Varname|Text|→|variable name
|Array|Array|←|Array

### Description
The command *hmX_GET ARRAY* returns an array of an execution context.
Pass the variable name into the parameter *varname*. The name of the variable is not case sensitive. So *myvariable* is the same as *MyVariable*. Like in 4D.

### Example
The following example returns an array with the name *tt_myarray*:

```4d
ARRAY TEXT(tt_myarray;0)

hmX_GET ARRAY( ($context;"tt_myarray";tt_myarray)
```
