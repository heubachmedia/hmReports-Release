## hmX_GET POINTER BY INDEX (Context ; stack_id ; typelocalglobal ; index ; varname ; typeLocGlobRes ; pointToStack ; table ; field)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Stack_id|Longint|→|stack id or 0
|Typelocalglobal|Longint|→|1=local<br />2=global<br />3=inter process variable
|Index|Longint|→|Index (from 1 to n)
|Varname|Text|←|Name of the variable (point to)
|TypeLocGlobRes|Longint|←|1=Point to local variable
|2=Point|To|←|variable
|3=Point|To|←|process variable
|PointToStack|Longint|←|Point to stack id (if local variable)
|Table|Longint|←|Point to table
|Field|Longint|←|Point to field

### Description
The command *hmX_GET POINTER BY INDEX* returns information about pointer variables of a context. The access of the variable stack goes over an index, which is returned by the command [hmX_Count Variables](hmX_CountVariables.md). Then you can loop through all variables. The function returns valules only, if it is a pointer variable.

If stack_id equals 0, you will get the local variables-stack from the last executed method. Otherwise, pass the stack_id to read the local variables from the stack. 
