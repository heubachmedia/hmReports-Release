## hmRep_GET OBJECT PROPERTY ( Area ; id ; selector ; valueReal ; valueText)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Id|Longint|→|object ID
|Selector|Longint|→|property selector
|ValueReal|Real|←|property of the type real
|ValueText|Text|←|property of the type text

### Description
The command *hmRep_GET OBJECT PROPERTY* returns a property of the object defined by the parameter *id*. The parameter *selector* identifies the type of the property. Depending of the property you have to pass a real value in the parameter *valueReal* and a text value in the parameter *valueText*. You must always pass all parameters. For all properties, please read the chapter [hmRep_SET OBJECT PROPERTY](hmRep_SetObjectProperty.md).
