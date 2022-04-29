## hmX_Delete Variable (Context ; Stack_id ; Typelocalglobal ; Name) -> Error
###### Introduced in v19.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Stack_id|Longint|→|stack id or 0
|Typelocalglobal|Longint|→|1=local<br />2=global<br />3=inter process variable
|Name|Text|→|Variable name
|Error|Longint|←|Error code

### Description
The command *hmX_Delete Variable* deletes a variable within it's execution context. 
