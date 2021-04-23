## hmRep_SET EVENT STATE (Area ; Event ; State)
###### Introduced in v1.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Event|Longint|→|Event number
|State|Longint|→|1=activated<br />0=deactivated

### Description
With the command *hmRep_SET EVENT STATE* you can activate and deactivate events. Deactivated events no longer call the callback method but will be internally executed.

**Important: All events are deactivated by default.**

### Example
The following example deactivates the event *hmRep_OnClickObject* and will no longer call the callback method:

```4d
hmRep_SET EVENT STATE(hmRep;hmRep_OnClickObject;0)
```
