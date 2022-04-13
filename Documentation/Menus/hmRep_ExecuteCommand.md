## hmRep_EXECUTE COMMAND ( Area ; action)
###### Introduced in v1.2, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Action|Longint|←|action command to execute

### Description
The command *hmRep_EXECUTE COMMAND* executes a menu command.
If you execute a command, the callback events *hmRep_OnCommandBefore* and *hmRep_OnCommandAfter* will also be executed.

See [Menu actions](MenuActions.md) for a complete list of all commands.
