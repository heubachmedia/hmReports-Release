## hmRep_Count Runs ( Area ; objectID) → count
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object id
|Count|Longint|←|Count runs

### Description
The command *hmRep_Count Runs* returns the number of runs of the object defined by *objectID*.

### Example
The following example returns the number of runs and loop through each run to get the styled information:

```4d
var $i; $vl_runs; $vl_from; $vl_to; $vl_fontsize; $vl_fontstyle; $vl_red; $vl_green; $vl_blue : Integer
var $vt_fontname : Text
var $vz_alpha : Real

$vl_runs:=hmRep_Count Runs(reparea; $vl_object)

For ($i; 1; $vl_runs)
	
	hmRep_GET STYLED TEXT RUN(reparea; $vl_object; $i; $vl_from; $vl_to; $vt_fontname; $vl_fontsize; $vl_fontstyle; $vl_red; $vl_green; $vl_blue; $vz_alpha)
	
End for 
```
