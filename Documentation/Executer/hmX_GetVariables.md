## hmX_Get Variables ( Context ; Stack_id ; Typelocalglobal ; Copy) → List
###### Introduced in v19.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Stack_id|Longint|→|stack id or 0
|Typelocalglobal|Longint|→|1=local<br />2=global<br />3=inter process variable
|Copy|Longint|→|1=Returns a copy for Objects/Collections<br />0=Returns a reference for Objects/Collections
|List|Collection|←|Collection with all variables

### Description
The command *hmX_Get Variables* returns a collection of all variables of the execution context.
Each collection element contains an object with the following information:

* "type": type of the variable
* "name": variable name
* "index": number of the variable in the list (Start with 1) 
* "value": value of the variable (Variant, depends of the type of the variable)

### Example
The following example creates an execution context and get its variables:

```4d
var $vl_context : Integer
var $vc_variables : Collection

$vl_context:=hmX_Create Execution Context
hmX_SET VARIABLE($vl_context; "myVarname"; Is longint; ""; 123; !00-00-00!)
$vc_variables:=hmX_Get Variables($vl_context; 0; 2; 1)
hmX_DELETE EXECUTION CONTEXT($vl_context)
```

Result:

```json
[{type:9,name:myVarname,index:1,value:123}]
```
