## hmX_SET VARIABLE OBJECT ( Context ; Name ; Object)
###### Introduced in v19.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Name|Text|→|Variable name
|Object|Object|→|Object variable

### Description
The command *hmX_SET VARIABLE OBJECT* sets an object variable into the execution context.
If a variable with the variable name exists, the variable will be overwritten.
Important: No copy of the object will be created, only a reference!

### Example
The following example adds a variable *vt_myvariable* into an execution context:

```4d
var $object : Object
var $vl_context : Integer

$object:=New object
$object.text:="some text"

hmX_SET VARIABLE OBJECT($vl_context; "vt_myvariable"; $object)
```
