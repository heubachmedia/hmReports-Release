## hmRep_GET ARRAY ELEMENT ( Area ; varname ; arrayindex ; valuetext ; valuenum ; valuedate)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Varname|Text|→|variable name
|Arrayindex|Longint|→|array index
|Valuetext|Text|←|variable content text
|Valuenum|Real|←|variable content real
|Valuedate|Date|←|variable content date

### Description
The command *hmRep_GET ARRAY ELEMENT* returns the value of an array element. Pass the name of the array in the parameter *varname*. According to the type of the array, you will get the value into the correct parameter.

* Real/Integer/Longint Array: *valuenum*
* Text Array: *valuetext*
* Date Array: *valuedate*
* Boolean Array: *valuenum* returns *1* for true, or *0* for false

### Example
The following example returns the 50th element of the array *myArray*:

```4d
$vt_text:=""
$vz_real:=0
$vd_date:=!00.00.0000!

hmRep_SET ARRAY ELEMENT ($vl_area;"myArray";50;$vt_text;$vz_real;$vd_date)
```
