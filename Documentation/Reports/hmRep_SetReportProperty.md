## hmRep_SET REPORT PROPERTY(Area ; Selector ; ValueLong ; ValueText)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Selector|Longint|→|Property selector
|ValueLong|Longint|→|Property of the type longint
|ValueText|Longint|→|Property of the type text

### Description
The command *hmRep_SET REPORT PROPERTY* sets a property of the current report. The parameter *selector* identifies the type of the property. Depending of the property you have to pass a longint value in the parameter *valueLong* or a text value in the parameter *valueText*. You must always pass all parameters.

For a documentation of all properties/selectors see [Report properties](../Appendix/ReportProperties.md).

You can read all properties with the command [hmRep_GET REPORT PROPERTY](hmRep_GetCurrentReport.md).
