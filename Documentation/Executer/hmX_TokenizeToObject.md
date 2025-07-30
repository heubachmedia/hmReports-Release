## hmX_Tokenize To Object (Method text) → Script
###### Introduced in v20.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Method text|Text|→|Plain method code
|Script|Object|←|Script code

### Description
The command *hmX_Tokenize To Object* tokenizes a readable method code text into a tokenized script. Pass the methiod code in the parameter *methodtext*. In *script* you will get the tokenized script as an object.

Notice, that this command does not use any virtual structure of a context. If you want to use a virtual structure, you should use the command [hmX_TOKENIZE IN CONTEXT](hmX_TokenizeInContext.md) instead.

### Example
The following example tokenizes 4D code:

```4d
var $vo_script : Object

$vo_script:=hmX_Tokenize To Object("$a:=100")
```
