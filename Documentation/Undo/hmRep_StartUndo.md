## hmRep_START UNDO ( Area )
###### Introduced in v5.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area

### Description
The command *hmRep_START UNDO* resets the undo stack of the current report. hmReports starts a new undo session automatically, but if you want to delete the current undo stack, you can call this command.
