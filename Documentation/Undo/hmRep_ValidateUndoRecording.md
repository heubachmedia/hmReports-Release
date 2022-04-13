## hmRep_Validate Undo Recording( Area ) → Count Objects
###### Introduced in v5.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Count|Objects|←|<- count of changed objects

### Description
The command *hmRep_Validate Undo Recording* validates the current undo recording session which was started with the command [hmRep_START UNDO RECORDING](hmRep_StartUndoRecording.md).

This command puts the session on the undo stack only, if objects were changed. In this case *<self>* returns the count of changed objects. If the return value is 0, no undo record was put on the undo stack!

If there is no open recording session, the command does nothing and returns 0.
