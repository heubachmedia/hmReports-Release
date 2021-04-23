## hmRep_Get Callback (Area) → Method name
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Method name|Text|←|Method name

### Description
The command *hmRep_Get Callback* returns the current callback method of the hmReports area.

### Example

```4d
C_TEXT($callback)

$callback:=hmRep_Get Callback($area)
```
