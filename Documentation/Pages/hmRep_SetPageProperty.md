## hmRep_SET PAGE PROPERTY ( Area ; pageNo ; Selector ; valueLong ; valueText)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|pageNo|Longint|→|page number
|Selector|Longint|→|property selector
|valueLong|Longint|→|property of the type longint
|valueText|Text|→|property of the type text

### Description
The command *hmRep_SET PAGE PROPERTY* sets a property of the page defined by the parameter *pageNo*. The parameter *Selector* identifies the type of the property. Depending of the property you have to pass a longint value in the parameter *valueLong* or a text value in the parameter *valueText*. You must always pass all parameters.

For a documentation of all properties/selectors see [Page properties](../Appendix/PageProperties.md).

You can read all properties with the command [hmRep_GET PAGE PROPERTY](hmRep_GetPageProperty.md).
