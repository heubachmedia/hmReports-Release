## hmX_GET ARRAY BY INDEX (Context ; stack_id ; typelocalglobal ; index ; array)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Stack_id|Longint|→|stack id or 0
|Typelocalglobal|Longint|→|1=local<br />2=global<br />3=inter process variable
|Index|Longint|→|Index (from 1 to n)
|Array|Array|←|Array

### Description
The command *hmX_GET ARRAY BY INDEX* returns information about arrays of a context. The access of the variable stack goes over an index, which is returned by the command [hmX_Count Variables](hmX_CountVariables.md). Then you can loop through all variables. If stack_id equals 0, you will get the local variables-stack from the last executed method. Otherwise, pass the stack_id to read the local variables from the stack. 

### Example
The following example loops through all local variables of the method "myMethod" of the context *$vl_context*:

```4d
var $i; $vl_count; $vl_varkind; $vl_context : Integer
var $vt_varname; $vt_textvalue : Text
var $vz_realvalue : Real
var $vd_datevalue : Date

$vl_count:=hmX_Count Variables($vl_context; 0; 1)

For ($i; 1; $vl_count)
	
	$vl_varkind:=0
	$vt_varname:=""
	$vz_realvalue:=0
	$vd_datevalue:=!00-00-00!
	$vt_textvalue:=""
	
	hmX_GET VARIABLE BY INDEX($vl_context; 0; 1; $i; $vl_varkind; $vt_varname; $vz_realvalue; $vd_datevalue; $vt_textvalue)
	
	If ($vl_varkind=Text array)
		ARRAY TEXT($tt_myarray; 0)
		hmX_GET ARRAY BY INDEX($vl_context; 0; 1; $i; $tt_myarray)
	End if 
	
End for 
```
