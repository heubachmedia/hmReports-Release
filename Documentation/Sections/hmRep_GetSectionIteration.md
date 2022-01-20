## hmRep_GET SECTION ITERATION ( Area ; Section ; Type ; valueLong ; valueText)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Section|Longint|→|number of the details section
|Type|Longint|←|type of the iteration
|valueLong|Longint|←|iteration property long
|valueText|Text|←|iteration property text

### Description
The command *hmRep_GET SECTION ITERATION* returns the iteration of a details sections defined by *section*. For details see chapter [hmRep_SET SECTION ITERATION](hmRep_SetSectionIteration.md).

For a documentation of all iteration types see [Iteration types](../Appendix/IterationTypes.md).

### Example
