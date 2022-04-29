## hmX_GET 4D CODE STYLE (Type ; Color ; Style)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Type|Longint|→|4D token type
|Color|Longint|←|ARGB color
|Style|Longint|←|Font style

### Description
The command *hmX_GET 4D CODE STYLE* returns the code style (font color and font style) of the token type, defined by *type*. See chapter [hmX_SET 4D CODE STYLE](hmX_Set4DCodeStyle.md) for more details.

### Example
The following example gets the table and field style for syntax coloring:

```4d
var $vl_table_color; $vl_table_style; $vl_field_color; $vl_field_style : Integer

$vl_table_color:=0
$vl_table_style:=0
$vl_field_color:=0
$vl_field_style:=0

hmX_GET 4D CODE STYLE(4; $vl_table_color; $vl_table_style)
hmX_GET 4D CODE STYLE(5; $vl_field_color; $vl_field_style)
```
