## hmRep_PDF Split (path) → Pages
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Path|Text|→|PDF path
|Pages|Longint|←|count of pages

### Description
The command *hmRep_PDF Split* splits a PDF file into new PDF files with each per page. The result is the count of pages, if successful.
The new PDF files have the page number added to the path.

The path must be in POSIX style on Mac.
