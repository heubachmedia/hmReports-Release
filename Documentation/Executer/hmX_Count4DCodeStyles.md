## hmX_Count 4D Code Styles → Count
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Count|Longint|←|count of styles

### Description
The command *hmX_Count 4D Code Styles* returns the number of code styles, defined by [hmX_SET 4D CODE STYLE](hmX_Set4DCodeStyle.md).

### Example
The following example returns the number of defined code styles:

```4d
var $vl_count : Integer

$vl_count:=hmX_Count 4D Code Styles
```
