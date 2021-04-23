## hmRep_DRAG AND DROP PROP (Area ; Variable ; Arrayindex ; Process ; x ; y)
###### Introduced in v2, Preemptive: no

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Variable|Pointer|←|Pointer to the source-variable
|Arrayindex|Longint|←|Array position
|Process|Longint|←|Process number
|x|Real|←|x coordinate of the dropped position in the report
|y|Real|←|y coordinate of the dropped position in the report

### Description
The command *hmRep_DRAG AND DROP PROP* returns information about the last drop action from outside the hmReports area. For example from a listbox or from an other process. Usually the command is called in the callback-method, installed through [hmRep_INSTALL CALLBACK](hmRep_InstallCallback.md), with the event *hmRep_OnOutsideDrop*, in order to receive closer information about the source element of the last drag & drop action.

The parameter *variable* returns a pointer to the source variable.
**Important: The parameter *variable* must be a valid pointer and cannot be NULL! So you must point to a variable before calling this command!**

If the source element is an array, then in the parameter *arrayindex* is returned the element number. In all cases the parameter *process* returns the process number of the source element. The parameters *x* and *y* return the droped position in the current report (where the user releases the mouse button).

### Example
The following example provides more information about the source element of the last drag & drop action:

```4d
var $vl_arrayindex; $vl_process : Integer
var $vp_variable : Pointer
var $vz_x; $vz_y : Real

$vl_arrayindex:=0
$vl_process:=0
$vz_x:=0
$vz_y:=0
$vp_variable:=->$vz_x  //Point to a variable, which variable does not matter

hmRep_DRAG AND DROP PROP($vl_area; $vp_variable; $vl_arrayindex; $vl_process; $vz_x; $vz_y)
 ```
