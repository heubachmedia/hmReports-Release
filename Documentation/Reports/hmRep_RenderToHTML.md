## hmRep_Render To HTML ( Area ; Options) → Text
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|Options|Longint|→|Render option flags
|Text|Text|←|Rendered text

### Description
The command *hmRep_Render To HTML* renders the current report area into html. The command is like printing. This command only outputs textobjects and their bindings. It also executes scripts.
You can use the same options like in the command [hmRep_Render To Text](hmRep_RenderToText.md). See this chapter for an overview about all options.
More information about rendering to HTML can be found in the chapter [Export HTML].

### Example
The following example creates a HTML-text from the report:

```4d
var $vt_text : Text

$vt_text:=hmRep_Render To HTML($vl_area; 0)
 ```
