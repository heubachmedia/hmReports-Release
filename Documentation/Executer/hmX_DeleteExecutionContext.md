## hmX_DELETE EXECUTION CONTEXT (Context)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context

### Description
The command *hmX_DELETE EXECUTION CONTEXT* deletes an execution context. 

### Example
The following example creates and deletes an execution context:

```4d
var $vl_context : Integer

$vl_context:=hmX_Create Execution Context

//using the context

hmX_DELETE EXECUTION CONTEXT($vl_context)
```
