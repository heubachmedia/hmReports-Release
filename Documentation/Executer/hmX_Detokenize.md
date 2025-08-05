## hmX_Detokenize (Script) → Method Text
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Script|Blob/Object|→|Script code
|Method Text|Text|←|Plain method code

### Description
The command *hmX_Detokenize* returns the readable text of a tokenized script. Pass a tokenized script as a blob or object into *script*. In the result, you will get the plain method code text.

Notice, that this command does not use the virtual structure of a context. If you have a virtual structure, you should use the command [hmX_Detokenize In Context](hmX_DetokenizeInContext.md).

### Example
The following example detokenize a script to get the plain text:

```4d
var $vx_script : Blob
var $vt_text : Text

$vt_text:=hmX_Detokenize($vx_script)
```
