## hmX_GET METHOD (Context ; Method name ; Content)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Methodname|Text|→|Method name
|Content|Blob|←|Tokenized method

### Description
The command *hmX_GET METHOD* returns the tokenized method from an execution context. This method must be added with [hmX_ADD METHOD TO CONTEXT](hmX_AddMethodToContext.md). If the method was not found in the context [hmX_GET LAST ERROR](hmX_GetLastError.md) returns an error.

### Example
The following example returns the method *myMethod* of the context:

```4d
var $vx_method_blob : Blob

SET BLOB SIZE($vx_method_blob; 0)

hmX_GET METHOD($context; "myMethod"; $vx_method_blob)
```
