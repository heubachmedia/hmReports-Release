## hmRep_GET PAGE ( Area ; afterPage ; pageblob)
###### Introduced in v5.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|afterPage|Longint|→|Insert after page number
|pageblob|Blob|←|Page as a blob

### Description
The command *hmRep_GET PAGE* copies the current page with all it's properties and objects in a blob *pageblob*. This is very convenient, to copy and paste entire pages from one area or report to other areas/reports. The blob is static and independed from the source report and can be stored.

If you pass 0 in *pageNo*, you will get the content of the current page.
