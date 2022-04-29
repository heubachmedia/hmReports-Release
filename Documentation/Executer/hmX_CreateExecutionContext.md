## hmX_Create Execution Context → Context
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|←|Execution context

### Description
The command *hmX_Create Execution Context* creates a new execution context. You are responsible for deleting the context after using it with the command [hmX_DELETE EXECUTION CONTEXT](hmX_DeleteExecutionContext.md).

### Example
The following example creates a new execution context:

```4d
var $vl_context : Integer

$vl_context:=hmX_Create Execution Context
```
