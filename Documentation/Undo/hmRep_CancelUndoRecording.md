## hmRep_CANCEL UNDO RECORDING ( Area )
###### Introduced in v5.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area

### Description
The command *hmRep_CANCEL UNDO RECORDING* stops the recording of the current undo session you have started with [hmRep_START UNDO RECORDING](hmRep_StartUndoRecording.md).

If there was no open recording session, the command does nothing.
