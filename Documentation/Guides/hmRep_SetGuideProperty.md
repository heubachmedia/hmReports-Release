## hmRep_SET GUIDE PROPERTY ( Area ; Number ; Selector ; valueLong ; valueText)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Number|Longint|→|guide number
|Selector|Longint|→|property selector
|valueLong|Longint|→|property of the type longint
|valueText|Text|→|property of the type text

### Description
The command *hmRep_SET GUIDE PROPERTY* sets a property of the guide defined by the parameter *number*. The parameter *selector* identifies the type of the property. Depending of the property you have to pass a longint value in the parameter *valueLong* or a text value in the parameter *valueText*. You must always pass all parameters.

For a documentation of all properties/selectors see [Guide properties](../Appendix/GuideProperties.md).

You can read all properties with the command [hmRep_GET GUIDE PROPERTY](hmRep_GetGuideProperty.md).
