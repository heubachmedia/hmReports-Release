## hmRep_GET SECTIONS ( Area ; SectionTypes ; SectionHeights ; SectionCount)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|SectionTypes|Longint-Array|←|List of all sections with its types
|SectionHeights|Longint-Array|←|Height of each section
|SectionCount|Longint-Array|←|Count of each section

### Description
The command *hmRep_GET SECTIONS* returns three array with information about all sections of the current report.
