## hmRep_GET VARIABLE ( Area ; varname ; vartype ; valuetext ; valuenum ; valuedate)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Varname|Text|→|variable name
|Vartype|Longint|←|variable type
|Valuetext|Text|←|variable content text
|Valuenum|Real|←|variable content real
|Valuedate|Date|←|variable content date

### Description
The command *hmRep_GET VARIABLE* returns the value and type of a variable of the hmReports-Area. Pass the variable name into the parameter *varname*. The name of the variable is not case sensitive. So *myvariable* is the same as *MyVariable*. Like in 4D.
In the parameter *vartype* you will get the type of the variable. For all possible types, see chapter [hmRep_SET VARIABLE](hmRep_SetVariable.md).
The value of the variable is given back in one of the parameters *valuetext*, *valuenum* or *valuedate* according to it's type. You have to pass all parameters, even if they are not used.

If the variable was not found, [hmRep_Get Last Error](../Areas/hmRep_GetLastError.md) returns the error -52.

### Example
The following example returns the value and the type of the variable *my_variable*:

```4d
var $vl_var_type : Integer
var $vt_var_text : Text
var $vz_var_number : Real
var $vd_var_date : Date

$vl_var_type:=0
$vt_var_text:=""
$vz_var_number:=0
$vd_var_date:=!00-00-00!

hmRep_GET VARIABLE($vl_area; "my_variable"; $vl_var_type; $vt_var_text; $vz_var_number; $vd_var_date)
```
