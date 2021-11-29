## hmRep_SORT LAYER ( Area ; ID ; orderNumber)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|ID|Longint|→|ID of the layer
|orderNumber|Longint|→|New order number

### Description
The command *hmRep_SORT LAYER* sets a new order number for a layer defined by the parameter *ID*.

### Example
The following example sorts a layer with the reference 4 to the position 1:

```4d
hmRep_SORT LAYER($vl_area; 4; 1)
```
