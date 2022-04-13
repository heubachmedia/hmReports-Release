## hmRep_START UNDO RECORDING ( Area )
###### Introduced in v5.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area

### Description
The command *hmRep_START UNDO RECORDING* starts an undo recording session to put it on the undo stack.
After the call, all modifications on objects will be recorded. This effects only changes through programming language.

After finishing the modification of objects, you have to call [hmRep_Validate Undo Recording](hmRep_ValidateUndoRecording.md) or abort the recording with [hmRep_CANCEL UNDO RECORDING](hmRep_CancelUndoRecording.md).

If there is already an open recording session, the previous session will be deleted and a new one will be created.

### Example
The following example shows how to use *hmRep_START UNDO RECORDING*:

```4d
hmRep_START UNDO RECORDING ($vl_area)

hmRep_SET OBJECT PROPERTY ($vl_area;11;hmRep_oprop_Text;0;"New Text")
hmRep_SET OBJECT PROPERTY ($vl_area;41;hmRep_oprop_Text;0;"New Text")

$vl_changed_objects:=hmRep_Validate Undo Recording ($vl_area)
```
