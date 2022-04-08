## hmRep_GET TOKENIZED SCRIPT ( Area ; selector ; id ; script)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Selector|Longint|→|selector
|Id|Longint|→|id
|Script|Blob|←|script code

### Description
The command *hmRep_GET TOKENIZED SCRIPT* returns the tokenized script from the given object, defined by the parameter *selector* and *id*. The parameter *script* returns the tokenized script as a blob.

If *selector* is *0*, than just pass an object id in the parameter *id*.

If the *selector* is one of the [Section types](../Appendix/SectionTypes.md), you have to put the counter of the section (starts with 1) in the parameter *id*.

If *selector* is *-1*, you can get the start script of the current report.
If *selector* is *-2*, you can get the body script of the current report.
If *selector* is *-3*, you can get the end script of the current report.
If *selector* is *-4*, you can get the "On After"-script of an object. Pass the object id in the parameter *id*.
If *selector* is *-5*, you can get the "On After Render"-script of an object. Pass the object id in the parameter *id*.

### Example
The following example gets the tokenized script from the object with the id *1* and sets the script to the object with the id *2*. Now these two objects with the ids 1 and 2 have the same script.

```4d
var $vx_script : Blob

SET BLOB SIZE($vx_script; 0)
hmRep_GET TOKENIZED SCRIPT($vl_area; 0; 1; $vx_script)
hmRep_SET TOKENIZED SCRIPT($vl_area; 0; 2; $vx_script)
```
