## hmRep_SET ARRAY ELEMENT ( Area ; varname ; arrayindex ; valuetext ; valuenum ; valuedate)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Varname|Text|→|variable name
|Arrayindex|Longint|→|array index
|Valuetext|Text|→|variable content text
|Valuenum|Real|→|variable content real
|Valuedate|Date|→|variable content date

### Description
The command *hmRep_SET ARRAY ELEMENT* sets the value of an array element. Pass the name of the array in the parameter *varname*. According to the type of the array, you have to pass the value into the correct parameter.

* Real/Integer/Longint Array: use *valuenum*
* Text Array: use *valuetext*
* Date Array: use *valuedate*
* Boolean Array: *valuenum* must be *1* for true, or *0* for false

### Example
The following example sets the 50th element of the array *myArray* to *test*:

```4d
hmRep_SET ARRAY ELEMENT ($vl_area;"myArray";50;"test";0;!00.00.00!)
```
