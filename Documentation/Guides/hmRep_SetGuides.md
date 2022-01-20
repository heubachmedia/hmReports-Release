## hmRep_SET GUIDES ( Area ; ArrayH ; ArrayV)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ArrayH|ARRAY LONGINT|→|Horizontal positions
|ArrayV|ARRAY LONGINT|→|Vertical positions

### Description
The command *hmRep_SET GUIDES* sets the guides for the current report.

The parameter *arrayH* must be a numeric array with the horizontal position of a vertical line.
The parameter *arrayV* must be a numeric array with the vertical position of a horizontal line.

Guides are lines in the report, who helps to align objects.

The command always deletes all previous guides of the report. If you want to add one or more guides, you should use the command [hmRep_Create Guide](hmRep_CreateGuide.md).
