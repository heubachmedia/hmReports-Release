## hmRep_GET GUIDE PROPERTY( Area ; Number ; Selector ; valueLong ; valueText)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Number|Longint|→|guide number
|Selector|Longint|→|property selector
|valueLong|Longint|←|property of the type longint
|valueText|Text|←|property of the type text

### Description
The command *hmRep_GET GUIDE PROPERTY* returns a property of the layer defined by the parameter *id*. The parameter *selector* identifies the type of the property. Depending of the property you have to pass a longint value in the parameter *valueLong* and a text value in the parameter *valueText*. You must always pass all parameters. For all properties, please read the chapter [hmRep_SET GUIDE PROPERTY](hmRep_SetGuideProperty).
