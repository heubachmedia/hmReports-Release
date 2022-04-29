## hmX_GET ALLOWED COMMANDS (Context ; CommandNumbers)
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|CommandNumbers|ARRAY LONGINT|←|List of Commands

### Description
The command *hmX_GET ALLOWED COMMANDS* returns a list of all allowed 4D commands in the executer.

### Example
The following example returns all allowed commands:

```4d
ARRAY LONGINT($tl_commands;0)
hmX_GET ALLOWED COMMANDS($vl_context;$tl_commands)
```
