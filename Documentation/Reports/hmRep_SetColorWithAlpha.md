## hmRep_SET COLOR WITH ALPHA ( Area ; Selector ; id ; Red ; Green ; Blue ; Alpha)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Selector|Longint|→|Selector
|id|Longint|→|id
|Red|Longint|→|Red color component
|Green|Longint|→|Green color component
|Blue|Longint|→|Blue color component
|Alpha|Longint|→|Alpha channel 0-100

### Description
The command *hmRep_SET COLOR WITH ALPHA* sets the color for a property defined by the parameter *Selector*. The parameter *id* defines the id of the object or layer, depending of the selector. You must pass each color component in the parameters *Red*, *Green* and *Blue*. In the parameter *Alpha* you have to set the alpha channel value, between 0 and 100 percent.

**Notice: All color components are 16 bit values.**

For a documentation of all color selectors see [Colors](Appendix/Colors.md).

### Example
The following example sets the object fillcolor to red with 50 percent opaque:

```4d
hmRep_SET COLOR WITH ALPHA(area; hmRep_clr_ObjectFillcolor; 412; 0xFFFF; 0x0000; 0x0000; 50)
```
