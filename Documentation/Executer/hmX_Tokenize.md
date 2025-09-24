## hmX_TOKENIZE (Method text ; Script)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Method text|Text|→|Plain method code
|Script|Blob|←|Script code

### Description
The command *hmX_TOKENIZE* tokenizes a readable method code text into a tokenized script. Pass the method code in the parameter *methodtext*.
In *script* you will get the tokenized script. 
It can be a blob or an object. If you pass an object, you have to pass an empty object.

Notice, that this command does not use any virtual structure of a context. If you want to use a virtual structure, you should use the command [hmX_TOKENIZE IN CONTEXT](hmX_TokenizeInContext.md) instead.

### Example
The following example tokenizes 4D code into a blob and an object:

```4d
var $vx_script : Blob
var $obj : Object

SET BLOB SIZE($vx_script; 0)
hmX_TOKENIZE("$a:=100"; $vx_script)

$obj:={}
hmX_TOKENIZE("$a:=100"; $obj)
```
