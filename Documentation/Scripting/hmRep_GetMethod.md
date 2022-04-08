## hmRep_Get Method ( Area ; methodname) → script
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Methodname|Text|→|methodname
|Script|Blob|←|script code

### Description
The command *hmRep_Get Method* returns the tokenized script of a report method.

### Example
The following example returns the tokenized script of a report-script:

```4d
var $vt_methodname : Text

$vt_methodname:=hmRep_Get Method($vl_area; "my_method")
```
