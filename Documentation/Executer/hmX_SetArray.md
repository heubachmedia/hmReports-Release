## hmX_SET ARRAY (Context ; varname ; array)
###### Introduced in v3.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Varname|Text|→|variable name
|Array|Array|→|Array

### Description
The command *hmX_SET ARRAY* sets an array to an execution context.
Pass the variable name into the parameter *varname*. The name of the variable is not case sensitive. So *myvariable* is the same as *MyVariable*. Like in 4D.
The following types of arrays are currently supported:

* ARRAY TEXT
* ARRAY REAL
* ARRAY INTEGER
* ARRAY LONGINT
* ARRAY DATE
* ARRAY BOOLEAN

If an array with the variable name exists, the array will be overwritten.

### Example
The following example adds an array *tt_myarray* into the area *reparea*:

```4d
ARRAY TEXT(tt_myarray;2)
tt_myarray{1}:="test 1"
tt_myarray{2}:="test 1"

hmX_SET ARRAY( ($context;"tt_myarray";tt_myarray)
```
