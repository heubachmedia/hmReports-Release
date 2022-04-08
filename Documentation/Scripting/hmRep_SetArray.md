## hmRep_SET ARRAY ( Area ; varname ; array)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Varname|Text|→|variable name
|Array|Array|→|array

### Description
The command *hmRep_SET ARRAY* adds an array and a it's value to the hmReports-Area. The array is available in all currently open reports and all future reports. The variable stack is only temporary and will **not** be saved into a report.
Pass the array name into the parameter *varname*. The name of the variable is not case sensitive. So *myvariable* is the same as *MyVariable*. Like in 4D.

The following types of arrays are currently supported:

* ARRAY TEXT
* ARRAY DATE
* ARRAY BOOLEAN
* ARRAY REAL
* ARRAY LONGINT
* ARRAY INTEGER

If an array with the same name exists, it will be replaced.

### Example
The following example defines different types of local arrays in 4D and passes them to hmReports:

```4d
var $i : Integer

ARRAY TEXT($tt_1; 100)
ARRAY REAL($tz_1; 100)
ARRAY INTEGER($tg_1; 100)
ARRAY LONGINT($tl_1; 100)
ARRAY DATE($td_1; 100)
ARRAY BOOLEAN($tf_1; 100)

For ($i; 1; Size of array($tt_1))
	$tt_1{$i}:="my testtext "+String($i)
	$tz_1{$i}:=$i+0.5
	$tg_1{$i}:=$i
	$tl_1{$i}:=$i
	$td_1{$i}:=Current date+$i
	$tf_1{$i}:=($i%2)=0
End for 

hmRep_SET ARRAY($vl_area; "myArray_text"; $tt_1)
hmRep_SET ARRAY($vl_area; "myArray_real"; $tz_1)
hmRep_SET ARRAY($vl_area; "myArray_integer"; $tg_1)
hmRep_SET ARRAY($vl_area; "myArray_longinteger"; $tl_1)
hmRep_SET ARRAY($vl_area; "myArray_date"; $td_1)
hmRep_SET ARRAY($vl_area; "myArray_bool"; $tf_1)
```
