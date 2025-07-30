## hmX_ADD METHOD TO CONTEXT (Context ; Method name ; Content)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Method name|Text|→|Method name
|Content|Blob/Object|→|Tokenized method

### Description
The command *hmX_ADD METHOD TO CONTEXT* adds a method to the execution context. Pass the tokenized method as blob or script-object in the parameter *content*.
If the method already exists in the context, the command [hmX_GET LAST ERROR](hmX_GetLastError.md) returns an error.

### Example
The following example tokenizes a method and adds the method to the context:

```4d
var $script : Object

$script:=hmX_Tokenize To Object("$a:=100")
hmX_ADD METHOD TO CONTEXT($context; "myMethod"; $script)
```
