## hmRep_TEXT2ARRAY ( Text ; Array ; Width ; Font ; Fontsize ; Fontstyle)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Text|Text|→|A text value
|Array|Text-Array|←|The array into which to place the results
|Width|Longint|→|The width that will be used to display the text.
|Font|Text|→|The fontname that will be used to display the text
|Fontsize|Longint|→|The size of the font
|Fontstyle|Longint|→|The font style

### Description
The command *** <self> *** converts text into a text array, based on the maximum display width and font information. First, you must define the text array before calling the plug-in command.

The array does not need to be cleared (set to 0 elements) before the call. Any existing information in the array will be lost.

4D constants may be used for the style parameter. See the 4D documentation for details.

### Example
The following example breaks the text into an array:

```4d
ARRAY TEXT($textArray; 0)
hmRep_TEXT2ARRAY("This is a testtext"; $textArray; 100; "Helvetica"; 12; Bold+Italic)
```
