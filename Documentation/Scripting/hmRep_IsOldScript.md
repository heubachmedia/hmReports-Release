## hmRep_Is Old Script ( Area ) → isOld
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|IsOld|Longint|←|0 = new script<br />1 = old script

### Description
The command *hmRep_Is Old Script* returns during the event *hmRep_OnExecuteScript*, if the current script is a new script or an old script.
