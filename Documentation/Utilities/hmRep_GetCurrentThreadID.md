## hmRep_Get Current Thread ID → Thread ID
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Thread|ID|←|<- thread ID

### Description
The command *** <self> *** returns the thread ID of the current thread.

### Example
The following example returns the current thread-ID:

```4d
var $vl_threadID : Integer

$vl_threadID:=hmRep_Get Current Thread ID
```
