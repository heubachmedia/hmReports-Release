## hmX_ADD METHOD TO CONTEXT (Context ; Method name ; Content)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Method name|Text|→|Method name
|Content|Blob|→|Tokenized method

### Description
The command *hmX_ADD METHOD TO CONTEXT* adds a method to the execution context. Pass the tokenized method in the parameter *content*.
If the method already existis in the context, the command [hmX_GET LAST ERROR](hmX_GetLastError.md) returns an error.

### Example
The following example tokenizes a method and adds the method to the context:

```4d
var $vx_script : Blob

SET BLOB SIZE($vx_script; 0)
hmX_TOKENIZE("$a:=100"; $vx_script)
hmX_ADD METHOD TO CONTEXT($context; "myMethod"; $vx_script)
```
