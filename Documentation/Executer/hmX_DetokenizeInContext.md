## hmX_Detokenize In Context (Context ; Script) → Method Text
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Script|Blob|→|Script code
|Method Text|←|Plain method code

### Description
The command *hmX_Detokenize In Context* returns the readable text of a tokenized script. Pass a tokenized script as a blob into *script*. In the result, you will get the plain method code text.

Notice, that this command use the virtual structure of the context. If you don't use a virtual structure, you can use the command [hmX_Detokenize](hmX_Detokenize.md).

### Example
The following example detokenize a script in the context to get the plain text:

```4d
var $vx_script : Blob
var $vt_text : Text

$vt_text:=hmX_Detokenize In Context($context; $vx_script)
```
