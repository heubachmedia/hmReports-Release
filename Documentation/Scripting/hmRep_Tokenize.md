## hmRep_TOKENIZE ( Area ; methodtext ; script)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Methodtext|Text|→|Plain method code
|Script|Blob|←|Script code

### Description
The command *hmRep_TOKENIZE* tokenizes a readable method code text into a tokenized script. Pass the method code in the parameter *methodtext*. In *script* you will get the tokenized script. Now you can use e. g. [[hmRep_SET TOKENIZED SCRIPT]] to apply the script to a report object.

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
