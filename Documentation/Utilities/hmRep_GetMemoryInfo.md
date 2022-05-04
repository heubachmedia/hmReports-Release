## hmRep_GET MEMORY INFO ( Handles ; Bytes)
###### Introduced in v1.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Handles|Longint|←|number Handles
|Bytes|Longint|←|number Bytes


### Description
The command *hmRep_GET MEMORY INFO* returns the current memory allocation. The parameter *handles* returns the number of blocks in the heap. The parameter *bytes* returns the number of all bytes of all blocks.

The command includes the memory of all currently allocated hmReport areas.
