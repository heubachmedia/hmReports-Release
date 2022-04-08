## hmRep_GET ARRAY ( Area ; varname ; array)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Varname|Text|→|variable name
|Array|Array|←|array

### Description
The command *hmRep_GET ARRAY* returns the content of an array defined by it's name *varname*. The name of the variable is not case sensitive. So *myvariable* is the same as *MyVariable*. Like in 4D.

The following types of arrays are currently supported:

* ARRAY TEXT
* ARRAY DATE
* ARRAY BOOLEAN
* ARRAY REAL
* ARRAY LONGINT
* ARRAY INTEGER

### Example
The following example returns arrays from the hmReports area back into 4D variables:

```4d
ARRAY TEXT($tt_1; 0)
ARRAY REAL($tz_1; 0)
ARRAY INTEGER($tg_1; 0)
ARRAY LONGINT($tl_1; 0)
ARRAY DATE($td_1; 0)
ARRAY BOOLEAN($tf_1; 0)

hmRep_GET ARRAY($vl_area; "myArray_text"; $tt_1)
hmRep_GET ARRAY($vl_area; "myArray_real"; $tz_1)
hmRep_GET ARRAY($vl_area; "myArray_integer"; $tg_1)
hmRep_GET ARRAY($vl_area; "myArray_longinteger"; $tl_1)
hmRep_GET ARRAY($vl_area; "myArray_date"; $td_1)
hmRep_GET ARRAY($vl_area; "myArray_bool"; $tf_1)
```
