## hmRep_GET COLOR WITH ALPHA ( Area ; Selector ; id ; Red ; Green ; Blue ; Alpha)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Selector|Longint|→|Selector
|id|Longint|→|id
|Red|Longint|←|Red color component
|Green|Longint|←|Green color component
|Blue|Longint|←|Blue color component
|Alpha|Longint|←|Alpha channel 0-100

### Description
The command *hmRep_GET COLOR WITH ALPHA* returns the color components and the alpha channel (in percent) for a property defined by the parameter *Selector* and *id*.

See chapter [hmRep_SET COLOR WITH ALPHA](hmRep_SetColorWithAlpha.md) for more details.
