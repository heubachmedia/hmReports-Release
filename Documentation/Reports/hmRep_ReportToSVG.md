## hmRep_REPORT TO SVG ( Area ; Blob)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Blob|Longint|←|SVG Blob

### Description
The command *hmRep_REPORT TO SVG* outputs the current report area as a SVG picture. The blob contains uncompressed text in UTF-8. With the 4D command *BLOB TO PICTURE* you can easily convert it into a picture variable.

The command does **not** print the report into an SVG blob. The command only draws the objects of the report into SVG.
The command is the same as [hmRep_Report To Picture](hmRep_ReportToPicture.md) with the difference, that this command puts the SVG into a blob and not into a picture variable.

### Example
The following example exports the current report as SVG:

```4d
var $vx_blob : Blob

SET BLOB SIZE($vx_blob; 0)
hmRep_REPORT TO SVG(reparea; $vx_blob)
 ```
