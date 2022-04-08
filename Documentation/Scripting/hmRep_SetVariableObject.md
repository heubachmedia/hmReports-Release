## hmRep_SET VARIABLE OBJECT ( Area ; varname ; object)
###### Introduced in v19.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Varname|Text|→|variable name
|object|Object|→|object variable

### Description
The command *hmRep_SET VARIABLE OBJECT* adds an object variable to the hmReports-Area. The variable is available in all currently open reports and all future reports. The variable stack is only temporary and will **not** be saved into a report.
Pass the variable name into the parameter *varname*. The name of the variable is not case sensitive. So *myvariable* is the same as *MyVariable*. Like in 4D.
Important: no copy of the object will created, only a reference!

If a variable with the variable name exists, the variable will be overwritten.

### Example
The following example adds a variable *vt_myvariable* into the area *reparea* with the value "My value":

```4d
var $object : Object

$object:=New object
$object.text:="some text"

hmRep_SET VARIABLE OBJECT(reparea; "vt_myvariable"; $object)
```
