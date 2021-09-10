## hmRep_Render To Blob ( Area ; Charset ; Options ; FieldDelim ; RecordDelim) → Result
###### Introduced in v1.2, Preemptive: yes

<span style="color:gray;font-family:monospace">This command is deprecated in v19. It will be removed in future versions. Please use [hmRep_Render To Text](hmRep_RenderToText.md) instead.</span>

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Charset|Longint|→|Charset to use
|Options|Longint|→|Render option flags
|FieldDelim|Text|→|Field delimiter
|RecordDelim|Text|→|Record delimiter
|Result|Blob|←|Result as blob

### Description
The command *hmRep_Render To Blob* renders the current report area to a blob. The command is like printing. This command only outputs textobjects and their bindings. It also executes scripts.

*Charset* defines the charset to use in the blob as MIBEnum. Macintosh charset is *100*. A full list of supported charset is listed in the 4D documentation: [https://doc.4d.com/4Dv19/4D/19/CONVERT-FROM-TEXT.301-5392248.en.html](https://doc.4d.com/4Dv19/4D/19/CONVERT-FROM-TEXT.301-5392248.en.html).

You can use a field delimiter *FieldDelim* and a record delimiter *RecordDelim*. The field delimiter is used only in the detail (body) section as delimiter between each object. After each detail iteration the record delimiter is used.

For all option flags see chapter [hmRep_Render To Text](hmRep_RenderToText.md).

**Important: The command is only build for compatibility reasons in 4D v11. If Unicode mode is off in 4D v11, you can render the report into blob, instead of text, because 4D v11 cuts text after 32000 characters. If you don't use the Unicode compatibility mode in 4D v11 you should always use [hmRep_Render To Text](hmRep_RenderToText.md).**

### Example
The following example creates a text with the executed report:

```4d
var $vx_blob : Blob

$vx_blob:=hmRep_Render To Blob(reparea; 100; hmRep_render_NoStaticText+hmRep_render_TopLeftOrder; Char(Tab); Char(Carriage return))
 ```
