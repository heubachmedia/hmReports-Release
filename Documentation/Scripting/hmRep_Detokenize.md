## hmRep_Detokenize ( Area ; script) → method text
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Script|Blob/Object|→|Script code
|Method|Text|←|<- Plain method code

### Description
The command *hmRep_Detokenize* returns the readable text of a tokenized script. Pass a tokenized script as a blob or object into *script*. In the result, you will get the plain method code text.

Notice, that this command uses the virtual structure. If you have a virtual structure, you should initalize it before calling this command.
If you want to use the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, the command uses the virtual structure of the area.

### Example
The following example gets the tokenized script from the object with the ID=9 and detokenize the script to get the plain method text:

```4d
var $vx_script : Blob
var $vl_area : Integer

SET BLOB SIZE($vx_script; 0)
hmRep_GET TOKENIZED SCRIPT($vl_area; 0; 9; $vx_script)

$vt_text:=hmRep_Detokenize($vx_script)
```
