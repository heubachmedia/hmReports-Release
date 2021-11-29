## hmRep_Get Page Number From ID ( Area ; pageID) → number
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|pageID|Longint|→|internal Page ID
|number|Longint|←|number of the page

### Description
The command *hmRep_Get Page Number From ID* returns the continuous number of a page defined by the pageID.

### Example
The following example returns the number of a page with the internal ID *6*:

```4d
var $vl_number : Integer

$vl_number:=hmRep_Get Page Number From ID(hmRep; 6)
```
