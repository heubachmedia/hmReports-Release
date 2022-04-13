## hmRep_SET UNDO TYPE STATE ( Area ; type ; State)
###### Introduced in v5.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Type|Longint|→|undo type
|State|Longint|→|0=inactive<br />1=interface<br />2=programming

### Description
The command *hmRep_SET UNDO TYPE STATE* sets the state of the undo action. Pass one of the following undo types:

* hmRep_Undo_Move (1)
* hmRep_Undo_Resize (2)
* hmRep_Undo_Delete (3)
* hmRep_Undo_New (4)
* hmRep_Undo_Change_Picture (5)

If you activate an action, the undo action will automatically recorded. If you pass *0* in *state*, the action will not be recorded.

You can set the state for the interface and programming by passing the bit constants into the parameter *state*:

* hmRep_Undo_Active_No (0)
* hmRep_Undo_Active_Interface (1)
* hmRep_Undo_Active_Programming (2)

### Example
The following example activates the undo action *hmRep_Undo_Change_Picture* for interace and programming:

```4d
hmRep_SET UNDO TYPE STATE($area;hmRep_Undo_Change_Picture;hmRep_Undo_Active_Interface+hmRep_Undo_Active_Programming)
```

The following example deactivates the undo recording for the *hmRep_Undo_Move*-action:

```4d
hmRep_SET UNDO TYPE STATE($area;hmRep_Undo_Move;hmRep_Undo_Active_No)
```
