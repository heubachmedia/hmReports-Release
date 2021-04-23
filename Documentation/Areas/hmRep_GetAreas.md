## hmRep_Get Areas → Areas
###### Introduced in 18.0.0.32777, Preemptive: yes

|Parameter|Type|In/Out|Description
|--- |---|:---:|---
|Areas|Collection|←|hmReports areas

### Description
With the command *hmRep_Get Areas* you can get a list of all currently valid hmReports areas of the current 4D application. The command is independently of the current process.

### Example
The following example returns a collection of all hmReports areas of the current 4D application:

```4d
C_COLLECTION($vc_coll)

$vc_coll:=hmRep_Get Areas
```

The result is a collection of all areas:

```json
[
	{
		"reference": 1,
		"threadID": 288964
	},
	{
		"reference": 2,
		"threadID": 288964
	}
]
```
