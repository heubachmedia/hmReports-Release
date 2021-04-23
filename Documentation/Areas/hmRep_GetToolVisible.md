## hmRep_Get Tool Visible (Area ; Tool) → Visible
###### Introduced in v5.3, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Tool|Longint|→|New tool to select
|Visible|Longint|←|0=invisible <br />1=visible

### Description
The command *hmRep_Get Tool Visible* returns the visibility of a tool in the area.

### Example
The following example returns the visibility-status of the tool "create rectangle-tool":

```4d
var $vl_visible : Integer

$vl_visible:=hmRep_Get Tool Visible(reparea; hmRep_Tool_Rect)
```
