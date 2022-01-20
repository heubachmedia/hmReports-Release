## hmRep_CLOSE PRINTING JOB( Area )
###### Introduced in v6.0, Preemptive: no

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area

### Description
The command *hmRep_CLOSE PRINTING JOB* closes the current printing job which was opened previously with [hmRep_OPEN PRINTING JOB](hmRep_OpenPrintJob.md). If there is no current printing job, the command does nothing.

If there is a current printing job, the current printing job will be send to the printer.
