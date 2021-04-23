## hmRep_SET TOOL TIP TEXT (Area ; Tool ; Tiptext)
###### Introduced in v3, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Tool|Longint|→|Tool
|Tiptext|Text|→|Tip text

### Description
The command *hmRep_SET TOOL TIP TEXT* sets a tip text for the given tool. The tip text is visible, if the cursor hovers of the given tool button.

### Example
The following example sets a tool tip for the "Zoom-In"-button:

```4d
hmRep_SET TOOL TIP TEXT (reparea;hmRep_Tool_Zoom_In;"Zoom in!")
 ```
