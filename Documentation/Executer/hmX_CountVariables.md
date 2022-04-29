## hmX_Count Variables (Context ; stack_id ; typelocalglobal) → Count
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Stack_id|Longint|→|stack id or 0
|Typelocalglobal|Longint|→|1=local<br />2=global<br />3=inter process variable
|Count|Longint|←|Number of variables

### Description
The command *hmX_Count Variables* returns the number of variables in the context. The scope of the variable stack is defined by *typelocalglobal*.
If stack_id equals 0, you will get the local variables-stack from the last executed method. Otherwise, pass the stack_id to read the local variables from the stack. 

With the command [hmX_GET VARIABLE BY INDEX](hmX_GetVariableByIndex.md) you will get each variable and it's content.

### Example
The following example returns the number of local variables:

```4d
var $vl_count : Integer

$vl_count:=hmX_Count Variables($context; 0; 1)
```

The following example returns the number of process variables:

```4d
var $vl_count : Integer

$vl_count:=hmX_Count Variables($context; 0; 2)
```
