## hmRep_Get Current Page ( Area ) → pageNo
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|pageNo|Longint|←|page number

### Description
The command *hmRep_Get Current Page* returns the current page number of the current report.

### Example
The following example returns the current page number:

```4d
var $vl_current_page : Integer

$vl_current_page:=hmRep_Get Current Page(hmRep)
```
