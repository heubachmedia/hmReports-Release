## hmX_SET VARIABLE (Context ; varname ; vartype ; valuetext ; valuenum ; valuedate)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Varname|Text|→|variable name
|Vartype|Longint|→|variable type
|Valuetext|Text|→|variable content text
|Valuenum|Real|→|variable content real
|Valuedate|Date|→|variable content date

### Description
The command *hmX_SET VARIABLE* adds a variable and a it's value to an execution context.
Pass the variable name into the parameter *varname*. The name of the variable is not case sensitive. So *myvariable* is the same as *MyVariable*. Like in 4D.
The following types of variables are currently supported:

* Is Real (1): use *valuenum*
* Is Text (2): use *valuetext*
* Is Date (4): use *valuedate*
* Is Boolean (6): *valuenum* must be *1* for true, or *0* for false
* Is LongInt (9): use *valuenum*
* Is Time (11): *valuenum* is the number of seconds

If a variable with the variable name exists, the variable will be overwritten.

### Example
The following example adds a variable *vt_myvariable* into the context with the value "My value":

```4d
hmX_SET VARIABLE($context; "vt_myvariable"; Is real; "My value"; 0; !00-00-00!)
```
