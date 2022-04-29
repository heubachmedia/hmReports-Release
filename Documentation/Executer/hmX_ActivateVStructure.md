## hmX_ACTIVATE VSTRUCTURE (Context ; onOff)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|OnOff|Longint|→|0=off, 1=on

### Description
The command *hmX_ACTIVATE VSCTRUCTURE* activates the virtual structure for the execution context. The virtual structure is off by default.
If the virtual structure is on, only tables and fields within the virtual structure will be recognized for tokenizing and detokenizing. If the virtual structure is off, all tables and fields will be recognized for tokenizing and detokenizing.

### Example
The following example activates the virtual structure for the given execution context:

```4d
var $vl_context : Integer

hmX_ACTIVATE VSCTRUCTURE($vl_context; 1)
```
