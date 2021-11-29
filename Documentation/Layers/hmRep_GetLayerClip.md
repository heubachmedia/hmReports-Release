## hmRep_GET LAYER CLIP ( Area; ID ; Left ; Top ; Right ; Bottom )
###### Introduced in v4.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|ID|Longint|→|ID of the layer
|Left|Real|←|Left coordinate of the clip
|Top|Real|←|Top coordinate of the clip
|Right|Real|←|Right coordinate of the clip
|Bottom|Real|←|Bottom coordinate of the clip

### Description
The command *hmRep_GET LAYER CLIP* gets the clipping rectangle of a layer defined by the parameter *ID*. If there was now clipping area defined, all coordinates returning zero values.

### Example
The following example returns the clipping area of the layer with the ID *1*:

```4d
var $vz_left; $vz_top; $vz_right; $vz_bottom : Real

hmRep_GET LAYER CLIP($vl_area; 1; $vz_left; $vz_top; $vz_right; $vz_bottom)
```
