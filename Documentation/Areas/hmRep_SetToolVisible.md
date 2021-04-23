## hmRep_SET TOOL VISIBLE (Area ; Tool ; Visible)
###### Introduced in v5.3, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Tool|Longint|→|New tool to select
|Visible|Longint|→|0=invisible <br />1=visible

### Description
The command *hmRep_SET TOOL VISIBLE* sets the visibility of a tool in the area.

### Example
The following example hides the tool "create rectangle-tool":

```4d
hmRep_SET TOOL VISIBLE (reparea;hmRep_Tool_Rect;0)
```
