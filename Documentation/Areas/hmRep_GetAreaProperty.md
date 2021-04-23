## hmRep_GET AREA PROPERTY (Area ; Selector ; ValueLong ; ValueText)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Selector|Longint|→|property selector
|ValueLong|Longint|←|property of the type longint
|ValueText|Text|←|property of the type text

### Description
The command *hmRep_GET AREA PROPERTY* returns a property of the hmReports area. The parameter *selector* identifies the type of the property. Depending of the property you have to pass a longint value in the parameter *valueLong* and a text value in the parameter *valueText*. You must always pass all parameters.

For a documentation of all properties/selectors see [Area properties](../Appendix/AreaProperties.md).
