## hmRep_Get Font Family Name ( Font name ) → Font family
###### Introduced in v3.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Font|Name|←|-> font name
|Font|Family|←|<- font family

### Description
The command *hmRep_Get Font Family Name* returns the font family of the given font name defined by the parameter *font name*.

### Example
The following example returns the font family of the font name *Arial Bold*:

```4d
var $vt_family : Text

$vt_family:=hmRep_Get Font Family Name("Arial Bold")
```
Result of $vt_family is "Arial".
