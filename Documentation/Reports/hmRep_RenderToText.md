## hmRep_Render To Text ( Area ; Options ; FieldDelim ; RecordDelim) → Text
###### Introduced in v1.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Options|Longint|→|Render option flags
|FieldDelim|Text|→|Field delimiter
|RecordDelim|Text|→|Record delimiter
|Text|Text|←|Rendered text

### Description
The command *hmRep_Render To Text* renders the current report area to text. The command is like printing. This command only outputs textobjects and their bindings. It also executes scripts.
You can use a field delimiter *FieldDelim* and a record delimiter *RecordDelim*. The field delimiter is used only in the detail (body) section as delimiter between each object. After each detail iteration the record delimiter is used.

You can use the following option-flags in combination:

### hmRep_render_BodyOnly (1)
If this flag is used, only the detail/body section is used.

### hmRep_render_NoStaticText (2)
If this flag is set, no static text will be in the output text.

### hmRep_render_TopLeftOrder (4)
If this flag is set, the objects are rendered in the order of the left/top coordinates. Otherwise the standard Z-Order is used (internal order).

### hmRep_render_CSVConform (8)
If this flag is set, the output text is wrapped in quotes if needed. Also some characters may be converted into escape characters.

### Example
The following example creates a text with the executed report:

```4d
var $vt_text : Text

$vt_text:=hmRep_Render To Text(reparea; hmRep_render_NoStaticText+hmRep_render_TopLeftOrder; Char(Tab); Char(Carriage return))
 ```
