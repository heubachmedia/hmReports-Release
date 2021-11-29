## hmRep_GET LAYER PROPERTY ( Area ; ID ; Selector ; valueLong ; valueText)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|ID|Longint|→|ID of the layer
|Selector|Longint|→|property selector
|valueLong|Longint|←|property of the type longint
|valueText|Text|←|property of the type text

### Description
The command *hmRep_GET LAYER PROPERTY* returns a property of the layer defined by the parameter *ID*. The parameter *Selector* identifies the type of the property. Depending of the property you have to pass a longint value in the parameter *valueLong* and a text value in the parameter *valueText*. You must always pass all parameters. For all properties, please read the chapter [hmRep_SET LAYER PROPERTY](hmRep_SetLayerProperty.md).
