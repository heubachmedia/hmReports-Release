## hmRep_Page Setup ( Area ; Dialogs) → result
###### Introduced in v1.0, Preemptive: no

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Dialogs|Longint|→|0 = shows page setup and print settings, 1 = shows page setup, 2 = shows print settings
|Result|Longint|←|result

### Description
The command *hmRep_Page Setup* shows dialogs for page setup and print settings of the current report. If the result is *1*, all shown dialogs where accepted by the user.
