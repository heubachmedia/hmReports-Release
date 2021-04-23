## hmRep_SET TOOL (Area ; Tool)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Tool|Longint|→|New tool to select

### Description
The command *hmRep_SET TOOL* sets the current tool of the area.

A tool is a *function* to work within the hmReports Area. It's on the left side of the visible area:

![ToolExample](../Pictures/ToolsExample.png)

For all possible values, see [Tools](../Appendix/Tools.md). You can set tools from 1-11, 22 and 23 only.

### Example
The following example sets the tool to the "create rectangle-tool":

```4d
hmRep_SET TOOL(reparea; hmRep_Tool_Rect)
 ```
