## hmX_SET 4D CODE STYLE (Type ; Color ; Style)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Type|Longint|→|4D token type
|Color|Longint|→|ARGB color
|Style|Longint|→|Font style

### Description
The command *hmX_SET 4D CODE STYLE* sets a token style for syntax coloring. The command sets the style property globally for all hmReports-areas. Pass a 4D token type in the parameter *type*, and it's color in *color* and the font style in *style*. Notice, that the color value also includes the alpha channel.

You should set all styles and not only a few of them. Only in this case, the syntax coloring works correctly.

The following token types are supported:

*1 = Plain text
*2 = 4D Commands
*3 = Keywords
*4 = Tables
*5 = Fields
*6 = Methods
*7 = Local variables
*8 = Process variables
*9 = Interprocess variables
*10 = Parameters
*11 = Constants
*12 = Plugins
*13 = Comments
*14 = Errors
*15 = SQL

### Example
The following example sets a color and a font style for methods in the script editor (Red,bold and italic):

```4d
hmX_SET 4D CODE STYLE(6;0xFFFF0000;Bold+Italic)
```
