## hmRep_SET PAGE ( Area ; afterPage ; pageblob)
###### Introduced in v5.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|afterPage|Longint|→|Insert after page number
|pageblob|Blob|→|Page as a blob

### Description
The command *hmRep_SET PAGE* creates a new page after the page number *afterPage* with the page content given in the blob. You have to create the blob with the command [hmRep_GET PAGE] previously.

If *afterPage* is *-1*, the page will be insert at the end of the report (=the last page).

The new inserted page will not be the current page. You have to call [hmRep_SET CURRENT PAGE].
