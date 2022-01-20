## hmRep_GET GUIDES( Area ; ArrayH ; ArrayV)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ArrayH|ARRAY LONGINT|←|Horizontal positions
|ArrayV|ARRAY LONGINT|←|ertical positions

### Description
The command *hmRep_GET GUIDES* returns all guides of the current report.

The parameter *arrayH* must be a numeric array and returns all horizontal positions of the vertical guides.
The parameter *arrayV* must be a numeric array and returns all vertical positions of the horizontal guides.
