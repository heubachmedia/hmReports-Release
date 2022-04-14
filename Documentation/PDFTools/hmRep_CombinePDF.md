## hmRep_Combine PDF (source1 ; source2 ; target) → Result
###### Introduced in v6.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Source1|Text|→|PDF source file 1
|Source2|Text|→|PDF source file 2
|Target|Text|→|PDF target file
|Result|Longint|←|error code

### Description
The command *hmRep_Combine PDF* combines two PDF's into one PDF. The PDF file *source2* will be attached at the end of *source1*.

The result is the error code.

The path must be in POSIX style on Mac.
