## hmRep_Create Guide ( Area ; horizontal ; position ; page) → number
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|horizontal|Longint|→|1=horizontal, 0=vertical
|position|Longint|→|Position in Pixels
|page|Longint|→|Page number or 0 for all pages
|number|Longint|←|number of the guide

### Description
The command *hmRep_Create Guide* creates a new guide for the current report. Pass a *1* or *0* in the parameter *horizontal* to create a horizontally or vertically guide. The parameter *position* sets the position in pixels. In *page* you can define a page number where the guide only appears or *0* for all pages. Internally the internal page ID is used, so the guide does not move to an other page if the user inserts pages.

### Example
The following example creates a horizontal guide for all pages:

```4d
var $vl_guide : Integer

$vl_guide:=hmRep_Create Guide(hmRep; 1; 200; 0)
```
