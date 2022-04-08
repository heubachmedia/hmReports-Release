## hmRep_GET VARS FROM SCRIPTS ( Area ; listtype ; arrayNames ; arrayTypes)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Listtype|Longint|→|1=Process Variables<br />2=Interprocess Variables<br />3=Local Variables
|ArrayNames|Array-Text|←|Array variable names
|ArrayTypes|Array-Longint|←|Array variable types

### Description
The command *hmRep_GET VARS FROM SCRIPTS* returns information about all variables, used in all scripts of the current report.
The command browses all scripts of the current report and returns an array with the name *arrayNames* and the type *arrayTypes*.
Because this command does not execute any code in the hmReports script executer; this command only browses through the tokens of the scripts and tries to find the type. The type of a variable can only be found, if the variable was defined by a compiler declaration (e. g. C_TEXT, C_LONGINT...). If a variable was **not** explicitly declared, the type is always 5 = undefined. If a variable is not declared explictly, the code can run without any problems because the variable was defined by an assignment like **myvar:="test"**. In this case the command *<self>* returns undefined for the variable.

### Example
The following example returns all process variables used in the current report:

```4d
ARRAY TEXT($tt_varnames;0)
ARRAY LONGINT($tl_vartypes;0)

hmRep_GET VARS FROM SCRIPTS ($vl_area;1;$tt_varnames;$tl_vartypes)
```
