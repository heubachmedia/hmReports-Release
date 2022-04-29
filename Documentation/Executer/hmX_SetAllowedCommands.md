## hmX_SET ALLOWED COMMANDS (Context ; CommandNumbers ; Option)
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|CommandNumbers|ARRAY LONGINT|→| List of Commands
|Option|Longint|→|0=Replace list<br />1=Add to list<br />2=Remove from list<br />3=set all allowed

### Description
The command *hmX_SET ALLOWED COMMANDS* maintains a list of allowed 4D commands in the executer. Use options 0-3 to apply a specific operation.

### Example
The following example sets all commands as allowed, except **DELETE RECORD** (which has command number 58):

```4d
ARRAY LONGINT($tl_commands;0)
hmX_SET ALLOWED COMMANDS($vl_context;$tl_commands;3)

APPEND TO ARRAY($tl_commands;58)
hmX_SET ALLOWED COMMANDS($vl_context;$tl_commands;2)
```
