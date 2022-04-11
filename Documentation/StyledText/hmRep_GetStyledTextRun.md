## hmRep_GET STYLED TEXT RUN ( Area ; objectID ; number ; from ; to ; fontname ; fontsize ; fontstyle ; red ; green ; blue ; alpha ; back-red ; back-green ; back-blue ; back-alpha)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object id
|Number|Longint|→|run number
|From|Longint|←|From text position
|To|Longint|←|To text position
|Fontname|Text|←|Fontname
|Fontsize|Longint|←|Fontsize
|Fontstyle|Longint|←|Fontstyle
|Red|Longint|←|Red color component (16bit)
|Green|Longint|←|Green color component (16bit)
|Blue|Longint|←|Blue color component (16bit)
|Alpha|Real|←|Alpha channel (0-100 percent)
|Back-red|Longint|←|Red color component (16bit)
|Back-green|Longint|←|Green color component (16bit)
|Back-blue|Longint|←|Blue color component (16bit)
|Back-alpha|Real|←|Alpha channel (0-100 percent)

### Description
The command *hmRep_GET STYLED TEXT RUN* returns a styled text run defined by *number* from an object defined by *objectID*. The run number is an index value, where each run starts with 1 to n. *From* and *to* returns the text position of the run. Also the fontname, fontsize and fontstyle is returned. In *red*, *green* and *blue* you will get each color component as 16 bit. *Alpha* returns the alpha channel, where you will get values from 0 to 100 (percent). A value of 100 means 100 % opaque.
In *back-red*, *back-green* and *back-blue* you will get the color components for the background color. *back-alpha* defines the alpha channel of the background color. Default is *0*, which means: no background visible. Background color is currently supported under Mac only.

### Example
The following example returns the number of runs and loop through each run to get the styled information:

```4d
var $i; $vl_runs; $vl_from; $vl_to; $vl_fontsize; $vl_fontstyle; $vl_red; $vl_green; $vl_blue; $vl_bred; $vl_bgreen; $vl_bblue : Integer
var $vt_fontname : Text
var $vz_alpha; $vz_balpha : Real

$vl_runs:=hmRep_Count Runs(reparea; $vl_object)

For ($i; 1; $vl_runs)
	
	hmRep_GET STYLED TEXT RUN(reparea; $vl_object; $i; $vl_from; $vl_to; $vt_fontname; $vl_fontsize; $vl_fontstyle; $vl_red; $vl_green; $vl_blue; $vz_alpha; $vl_bred; $vl_bgreen; $vl_bblue; $vz_balpha)
	
End for 
```
