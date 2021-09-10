## hmRep_SET CURRENT PAGE ( Area ; pageNo )
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|pageNo|Longint|→|page number

### Description
The command *hmRep_SET CURRENT PAGE* sets a new page as the current page of the current report. Pass a valid page number numbered from 1 to [hmRep_Count Pages](hmRep_CountPages.md) in the parameter *pageNo*.

Only the current page can be edited in the hmReports editor. 
