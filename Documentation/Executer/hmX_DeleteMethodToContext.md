## hmX_DELETE METHOD IN CONTEXT (Context ; Method name)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Method name|Text|→|Method name

### Description
The command *hmX_DELETE METHOD IN CONTEXT* deletes an existing method in an execution context. This method must be added with [hmX_ADD METHOD TO CONTEXT](hmX_AddMethodToContext.md). If the method was not found in the context [hmX_GET LAST ERROR](hmX_GetLastError.md) returns an error. If you pass an empty string in the parameter *methodname*, all method of the context will be deleted.

### Example
The following example deletes the method *myMethod* in the context:

```4d
hmX_DELETE METHOD IN CONTEXT($context; "myMethod")
```
