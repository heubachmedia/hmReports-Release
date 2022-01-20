## hmRep_SET SECTION PROPERTY ( Area ; Type ; Count ; Selector ; valueLong ; valueText)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Type|Longint|→|section type
|Count|Longint|→|count
|Selector|Longint|→|property selector
|ValueLong|Longint|→|property of the type longint
|ValueText|Text|→|property of the type text

### Description
The command *hmRep_SET SECTION PROPERTY* sets a property of a section of the current report. The parameter *type* must be a valid [Section type](../Appendix/SectionTypes.md). *count* is the number of the section.

The parameter *selector* identifies the type of the property. Depending of the property you have to pass a longint value in the parameter *valueLong* or a text value in the parameter *valueText*. You must always pass all parameters.

For a documentation of all properties/selectors see [Section properties](../Appendix/SectionProperties.md).

You can read all properties with the command [hmRep_GET SECTION PROPERTY](hmRep_GetSectionProperty.md).
