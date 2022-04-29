## hmX_GET AVAILABLE COMMANDS (CommandNumbers)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|CommandNumbers|ARRAY LONGINT|→|Commands

### Description
The command *hmX_GET AVAILABLE COMMANDS* returns an array with all available 4D commands in the executer.

### Example
The following example tokenizes 4D code:

```4d
ARRAY LONGINT($tl_commands;0)

hmX_GET AVAILABLE COMMANDS($tl_commands)
```
