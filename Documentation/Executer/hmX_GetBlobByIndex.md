## hmX_GET BLOB BY INDEX (Context ; stack_id ; typelocalglobal ; index ; blob)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Stack_id|Longint|→|stack id or 0
|Typelocalglobal|Longint|→|1=local<br />2=global<br />3=inter process variable
|Index|Longint|→|Index (from 1 to n)
|Blob|Blob|←|Blob content

### Description
The command *hmX_GET BLOB BY INDEX* returns the blob content of a variable within a context. The access of the variable stack goes over an index, which is returned by the command [hmX_Count Variables](hmX_CountVariables.md). Then you can loop through all variables. If stack_id equals 0, you will get the local variables-stack from the last executed method. Otherwise, pass the stack_id to read the local variables from the stack. 

### Example
The following example loops through all local variables of the method "myMethod" of the context *$vl_context*:

```4d
var $i; $vl_count; $vl_context : Integer
var $vx_blob : Blob

$vl_count:=hmX_Count Variables($vl_context; 0; 1)

For ($i; 1; $vl_count)
	
	SET BLOB SIZE($vx_blob; 0)
	hmX_GET BLOB BY INDEX($vl_context; 0; 1; $i; $vx_blob)
	
End for 
```
