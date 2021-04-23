## hmRep_Is Area Valid (Area) → Valid
###### Introduced in v1.0, Preemptive: yes

<span style="color:gray;font-family:monospace">This command is deprecated in v18. It will be removed in future versions. Please use [hmRep_Get Areas](hmRep_GetAreas.md) instead.</span>

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Valid|Longint|←|1=valid, 0=invalid

### Description
The command *hmRep_Is Area Valid* returns if the hmReports area, defined by the parameter *Area* is valid or not. If the area is valid a *1* is returned. If the area is invalid a *0* is returned.

### Example
The following example returns, if the area is valid or not:

```4d
If (hmRep_Is Area Valid(135468941)=1)
	ALERT("Valid!")
	
	//Do something...
	
Else 
	ALERT("Invalid!")
End if 
 ```
