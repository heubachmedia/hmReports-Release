## hmRep_Get Subcommand ( Area ) → action
###### Introduced in v1.3, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Action|Longint|←|action command

### Description
The command *hmRep_Get Subcommand* returns the subordinated command. The command only returns valid information, if its called within the callback method if the events *hmRep_OnCommandBefore* and *hmRep_OnCommandAfter* are fired.

### Example
The following example shows the usage in the callback method. If the user selects "Database>Script>Startscript" in the menubar, the event is catched for own usage.

```4d
var $vl_area; $vl_event; $vl_result; $vl_param1; $vl_param2 : Integer
var $vt_report; $vt_param : Text

$vl_area:=$1
$vl_event:=$2
$vt_report:=$3
$vl_param1:=$4
$vl_param2:=$5
$vt_param:=$6

Case of 
	: ($vl_event=hmRep_OnCommandBefore)
		
		$vl_subcommand:=hmRep_Get Subcommand($vl_area)
		
		If ($vl_subcommand=59)
			
			$vl_result:=-1
			//own action
			
		End if 
		
End case 

$0:=$vl_result
```
