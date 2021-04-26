## hmRep_GET REPORT PROPERTY(Area ; Selector ; ValueLong ; ValueText)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Selector|Longint|→|Property selector
|ValueLong|Longint|←|Property of the type longint
|ValueText|Longint|←|Property of the type text

### Description
The command *hmRep_GET REPORT PROPERTY* returns a property of the current report. The parameter *selector* identifies the type of the property. Depending of the property you have to pass a longint value in the parameter *valueLong* and a text value in the parameter *valueText*. You must always pass all parameters. For all properties, please read the chapter [hmRep_SET REPORT PROPERTY](hmRep_SetReportProperty.md).
