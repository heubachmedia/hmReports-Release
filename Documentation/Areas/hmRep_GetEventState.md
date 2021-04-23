## hmRep_Get Event State (Area ; Event) → state
###### Introduced in v1.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Event|Longint|→|Event number
|State|Longint|←|1=activated<br />0=deactivated

### Description
The command *hmRep_Get Event State* returns if an event is activated or deactivated.

### Example
The following example returns if the event *hmRep_OnClickObject* is activated:

```4d
var $active : Boolean

$active=hmRep_Get Event State(hmRep; hmRep_OnClickObject)=1
```
