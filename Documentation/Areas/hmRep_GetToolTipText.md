## hmRep_Get Tool Tip Text (Area ; Tool) → Tiptext
###### Introduced in v3, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Tool|Longint|→|Tool
|Tiptext|Text|←|Tip text
 
### Description
The command *hmRep_Get Tool Tip Text* returns the tip text for the given tool. You can set the tip text with the command [hmRep_SET TOOL TIP TEXT](hmRep_SetToolTipText.md).

### Example
The following example returns the tip text of the "Zoom-In"-button:

```4d
var $vt_tooltiptext : Text

$vt_tooltiptext:=hmRep_Get Tool Tip Text(reparea; hmRep_Tool_Zoom_In)
```
