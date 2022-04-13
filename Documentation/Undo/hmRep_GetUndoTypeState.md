## hmRep_Get Undo Type State ( Area ; type) → State
###### Introduced in v5.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Type|Longint|→|undo type
|State|Longint|←|0=inactive<br />1=interface<br />2=programming

### Description
The command *hmRep_Get Undo Type State* returns the state of the undo action. See chapter [hmRep_SET UNDO TYPE STATE](hmRep_SetUndoTypeState.md) for available undo actions.

### Example
The following example returns the active-state of the undo action *hmRep_Undo_Change_Picture*:

```4d
var $vl_state : Integer
var $vf_interface; $vf_programming : Boolean

$vl_state:=hmRep_Get Undo Type State($area; hmRep_Undo_Change_Picture)
$vf_interface:=($vl_state & hmRep_Undo_Active_Interface)=hmRep_Undo_Active_Interface
$vf_programming:=($vl_state & hmRep_Undo_Active_Programming)=hmRep_Undo_Active_Programming
```
