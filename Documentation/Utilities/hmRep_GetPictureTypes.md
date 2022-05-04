## hmRep_GET PICTURE TYPES ( Picture ; Types)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Picture|Picture|→|Picture
|Types|Text|←|<- Array with all internal representations

### Description
The command *hmRep_GET PICTURE TYPES* returns the internal type(s) of an picture. Note that a 4D picture may have more than one type/representations. For example SVG may have more than one type: svg-text (source), bitmap for screen and vector for printing.
