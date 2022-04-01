hmReports offers some convenient utility commands in the script editor. Those commands are described below:

## _Get Color

```4d
color:=_Get Color(colortext{;alpha})
```

This command returns a 8 bit color to manipulate object properties e. g. *this_Textcolor*. Pass in *colortext* one of these color names:

```4d
"White" = 0x00FFFFFF
"Silver" = 0x00C0C0C0
"Gray" = 0x00808080
"Black" = 0x00000000
"Red" = 0x00FF0000
"Maroon" = 0x00800000
"Yellow" = 0x00FFFF00
"Olive" = 0x00808000
"Lime" = 0x0000FF00
"Green" = 0x00008000
"Aqua" = 0x0000FFFF
"Teal" = 0x00008080
"Blue" = 0x000000FF
"Navy" = 0x00000080
"Fuchsia" = 0x00FF00FF
"Purple" = 0x00800080
```

The optional parameter *alpha* is for setting the alpha channel. Valid are values between 0 and 1. 0 (zero) is fully transparent and 1 is fully opaque.
If you omit the parameter, alpha channel is 100 % by default.

Example:
This example sets the textcolor to red and 50 % alpha:

```4d
this_textcolor:=_Get Color("red";0,5)
```

## _Get Fitting Text

```4d
fittingText:=_Get Fitting Text(sourceText)
```

This command returns the text which fits into the current text frame. It uses the current font information of the current object to calculate the fitting text. Pass *sourceText* in this command and you will get the fitting text as result. This result text fits completely in the current object frame.

Example:
The following example returns the fitting text and saves the rest of the text into the variable *vt_rest* to use this for an other object (e. g. to print this on an other page).

```4d
$vt_text:=_Get Fitting Text(this_text)

$vl_length:=Length($vt_text)
vt_rest:=Substring(this_text;$vl_length+1)
```

## _Get Current Execution Context

```4d
executionContext:=_Get Current Execution Context
```

The *executionContext* (C_LONGINT) is the unique id of the current [Script Execution](ScriptExecution.md). You can use this id to pass it as a parameter into your project method to manipulate the context with 'hmX_...'-methods. E. g. to get/set values of current variables ([[hmX_SET VARIABLE]]).

### _HTML Encode

```4d
encodedText:=_HTML Encode(sourceText)
```

The command converts a text into a HTML text.

## _SET ANCHOR

With this command, you can add an anchor. This is helpful, if you want to create a table of contents. If you want to add an object to the table of contents, just call **_SET ANCHOR** with a unique string in parameter 1.

Example:

```4d
_SET ANCHOR(String(this_section_iteration))
```

To print a table of contents, just use the following variables:

### this_anchor_texts
A text array with all anchor-texts

### this_anchor_pages

A longint array with all page numbers. This array has the same size as **this_anchor_texts**. For each anchor-text, you will got a page number.

With these both arrays, you can print a table of contents on any page in the report.
