## hmRep_INSERT PAGE ( Area ; afterPage)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|afterPage|Longint|→|Insert after page number

### Description
The command *hmRep_INSERT PAGE* inserts a page in the current report after the page number defined by the parameter *afterPage*. If *afterPage* is *-1*, the page will be insert at the end of the report (=the last page).

The new created page will have the following properties from the previous page:

* hmRep_rprop_ShowSections
* hmRep_rprop_ShowSecCapt
* hmRep_rprop_ShowSecLines
* hmRep_rprop_ShowPageArea
* hmRep_rprop_PrintAsReport

The new inserted page will not be the current page. You have to call [hmRep_SET CURRENT PAGE](hmRep_SetCurrentPage.md).

### Example
The following example inserts a page at the end of the current report:

```4d
hmRep_INSERT PAGE(hmRep; -1)
```
