## hmRep_GET PRINT OPTION ( Area ; option ; value1 ; value2 ; value3)
###### Introduced in v1.1, Preemptive: no

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Option|Longint|→|Option number
|value1|Real|←|Value 1 of the option
|value2|Real|←|Value 2 of the option
|value3|Text|←|Value 3 of the option

### Description
The command *hmRep_GET PRINT OPTION* returns the current value(s) of a print option. The option parameter enables you to specify the option to get. You can either pass a value or one of predefined constants described in [hmRep_SET PRINT OPTION](hmRep_SetPrintOption.md).

For more information about options and possible values, refer to the description of the [hmRep_SET PRINT OPTION](hmRep_SetPrintOption.md) command.

### Example
The following example returns the current number of copies of the print settings:

```4d
var $vl_value1; $vl_value2 : Integer
var $vt_value : Text

$vl_value1:=0
$vl_value2:=0
$vt_value:=""

hmRep_GET PRINT OPTION(reparea; hmRep_number_of_copies; $vl_value1; $vl_value2; $vt_value)
```
