## hmRep_GET PAPER SIZE ( Paper type ; Orientation ; Width ; Height)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Paper type|Longint|→|papertype
|Orientation|Longint|→|0=portrait<br />1=landscape
|Width|Longint|←|Paper width in pixels
|Height|Longint|←|Paper height in pixels

### Description
The command *hmRep_GET PAPER SIZE* returns the paper dimension of a format type in pixels.

You can get the following papertypes:

* 0 = A0
* 1 = A1
* 2 = A2
* 3 = A3
* 4 = A4
* 5 = A5
* 6 = A6
* 7 = A7
* 8 = A8
* 9 = A9
* 10 = A10

* 100 = Letter
* 101 = Legal
* 102 = Tabloid

Pass *0* in *orientation* for portrait, *1* if for landscape.
You will get the dimensions of the paper format in the parameters *width* and *height*.

### Example
The following example returns the dimension of the *DIN A4* format in pixels:

```4d
var $vl_width; $vl_height : Integer

$vl_width:=0
$vl_height:=0

hmRep_GET PAPER SIZE(4; 0; $vl_width; $vl_height)
```
