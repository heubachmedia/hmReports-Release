## hmRep_DELETE PAGE ( Area ; pageNo)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|pageNo|Longint|→|page number

### Description
The command *hmRep_DELETE PAGE* deletes the page with the page number *pageNo*. The last page cannot be deleted. The next page becomes the current page. If there is no next page, the previous page becomes the next page.

### Example
The following example deletes the third page:

```4d
hmRep_DELETE PAGE(hmRep;3)
```
