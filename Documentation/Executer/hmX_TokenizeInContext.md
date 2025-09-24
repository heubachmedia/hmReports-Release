## hmX_TOKENIZE IN CONTEXT (Context ; Method text ; Script)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Method text|Text|→|Plain method code
|Script|Blob/Object|←|Script code

### Description
The command *hmX_TOKENIZE IN CONTEXT* tokenizes a readable method code text into a tokenized script. Pass the method code in the parameter *methodtext*.
In *script* you will get the tokenized script. It can be a blob or an object. If you pass an object, you have to pass an empty object.

Notice, that this command use the virtual structure of the context. If you don't use a virtual structure, you can use the command [hmX_TOKENIZE](hmX_Tokenize.md) instead.

### Example
The following example tokenizes 4D code:

```4d
var $vx_script : Blob
var $obj : Object

SET BLOB SIZE($vx_script; 0)
hmX_TOKENIZE IN CONTEXT($context; "$a:=100"; $vx_script)

$obj:={}
hmX_TOKENIZE IN CONTEXT($context; "$a:=100"; $obj)
```
