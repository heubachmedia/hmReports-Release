## hmRep_SET VSTRUCTURE PROPERTY ( Area ; id ; selector ; valueLong ; valueText)
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Id|Longint|→|item ID
|Selector|Longint|→|property selector
|ValueLong|Longint|→|property of the type longint
|ValueText|Text|→|property of the type text

### Description
The command *hmRep_SET VSTRUCTURE PROPERTY* sets a property of a Virtual Structure item of hmReports. The parameter *id* must be a valid item ID of the Virtual Structure.

The parameter *selector* identifies the type of the property. Depending of the property you have to pass a longint value in the parameter *valueLong* or a text value in the parameter *valueText*. You must always pass all parameters.
If you want to set the property of a virtual structure record from the global virtual structure, just pass *0* in the parameter *area*. If you pass a valid *area*, you can set the property of a virtual structure record of the hmReports area.

For a documentation of all properties/selectors see [Virtual Structure Properties](../Appendix/VirtualStructureProperties.md).

You can read all properties with the command [hmRep_GET VSTRUCTURE PROPERTY](hmRep_GetVStructureProperty.md).
