## hmRep_Count Pages ( Area ) → pages
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|pages|Longint|←|page number

### Description
The command *hmRep_Count Pages* returns the number of pages of the current report.

### Example
The following example returns the number of pages:

```4d
var $vl_pages : Integer

$vl_pages:=hmRep_Count Pages(hmRep)
```
