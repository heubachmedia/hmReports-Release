## hmRep_Get Page ID From Number ( Area ; number) → pageID
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|number|Longint|→|number of the page
|pageID|Longint|←|internal Page ID

### Description
The command *hmRep_Get Page ID From Number* returns the internal page ID defined by page number.

### Example
The following example returns the ID of a page with the continuous number of *5*:

```4d
var $vl_pageID : Integer

$vl_pageID:=hmRep_Get Page ID From Number(hmRep; 5)
```
