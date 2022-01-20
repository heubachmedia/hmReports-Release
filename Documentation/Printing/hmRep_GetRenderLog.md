## hmRep_GET RENDER LOG ( Area ; arrayType ; arrayRef1 ; arrayRef2 ; arrayRef3 ; arrayInOut)
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|arrayType|Integer-Array|←|Log type
|arrayRef1|Longint-Array|←|References 1 specific to type
|arrayRef2|Longint-Array|←|References 2 specific to type
|arrayRef3|Longint-Array|←|References 3 specific to type
|arrayInOut|Integer-Array|←|In/Out Info

### Description
The command *hmRep_GET RENDER LOG* returns the current call chain (log) of the current rendering report.
This command only returns values, if a report is in a rendering context. That means, that you have to call this command within printing events, only (hmRep_OnBeforePrinting, hmRep_OnAfterPrinting, hmRep_OnDuringPrinting, hmRep_OnBeforePrintingPage).
Notice, that rendering subreports within a report has its own call chain (log).

All arrays have the same size. Each element is a log entry.
The following types are supported:

## Types
### 1 (Script)

* arrayRef1 = 1: Object Script (On Before)
* arrayRef1 = 2: Section Script (arrayRef2 = section type, arrayRef3 = section count)
* arrayRef1 = 3: Report Script (arrayRef2 = 1: Start Script, arrayRef2 = 2: Body Script, arrayRef2 = 3: End Script)
* arrayRef1 = 4: Object Script (On After)
* arrayRef1 = 5: Object Script (On After Render)

### 2 (Starting Report Rendering)
### 3 (Render Page)

* arrayRef1=Page ID

### 4 (Begin New Page)
### 5 (End Page)
### 6 (Section)

* arrayRef1 = section type
* arrayRef2 = section count
* arrayRef3 = 0: Render section
* arrayRef3 = -1: Section not used
* arrayRef3 = -2: Section not printed

### 7 (Detail section)
### 8 (Detail iteration)

* arrayRef1=Iteration number

### 9 (Script Error)

* arrayRef1 = Native hmExecuter error
* arrayRef2 = Next line (next line where the error occurs)

## In/Out Info
The array *arrayInOut* contains infos about the jump-in/jump-out status:

* 1 = jump in
* 0 = jump out
* 2 = only information

### Example
The following example shows how you get information about the current rendering report:

```4d
ARRAY INTEGER($tg_arrayType; 0)
ARRAY LONGINT($tl_arrayRef1; 0)
ARRAY LONGINT($tl_arrayRef2; 0)
ARRAY LONGINT($tl_arrayRef3; 0)
ARRAY INTEGER($tg_arrayinOut; 0)

hmRep_GET RENDER LOG($vl_area; $tg_arrayType; $tl_arrayRef1; $tl_arrayRef2; $tl_arrayRef3; $tg_arrayinOut)
```
