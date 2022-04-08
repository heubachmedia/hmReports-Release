## hmRep_SET VARIABLE ( Area ; varname ; vartype ; valuetext ; valuenum ; valuedate)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Varname|Text|→|variable name
|Vartype|Longint|→|variable type
|Valuetext|Text|→|variable content text
|Valuenum|Real|→|variable content real
|Valuedate|Date|→|variable content date

### Description
The command *hmRep_SET VARIABLE* adds a variable and a it's value to the hmReports-Area. The variable is available in all currently open reports and all future reports. The variable stack is only temporary and will **not** be saved into a report.
Pass the variable name into the parameter *varname*. The name of the variable is not case sensitive. So *myvariable* is the same as *MyVariable*. Like in 4D.
The following types of variables are currently supported:

* Is Real (1): use *valuenum*
* Is Text (2): use *valuetext*
* Is Date (4): use *valuedate*
* Is Boolean (6): *valuenum* must be *1* for true, or *0* for false
* Is LongInt (9): use *valuenum*
* Is Time (11): *valuenum* is the number of seconds

If a variable with the variable name exists, the variable will be overwritten.

### Example
The following example adds a variable *vt_myvariable* into the area *reparea* with the value "My value":

```4d
hmRep_SET VARIABLE (reparea;"vt_myvariable";Is Text;"My value";0;!00.00.00!)
```
