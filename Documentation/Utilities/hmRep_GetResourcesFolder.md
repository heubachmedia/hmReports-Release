## hmRep_Get Resources Folder → Path
###### Introduced in v2.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Path|Longint|←|Path to the resource folder

### Description
The command *hmRep_Get Resources Folder* returns the path to the resource folder of the Plugin (hmReports.bundle). This is useful only for debugging reasons if the path was not found or incorrect.

### Example
The following example returns the plugin's resource folder path:

```4d
var $vt_folder : Text

$vt_folder:=hmRep_Get Resources Folder
```
