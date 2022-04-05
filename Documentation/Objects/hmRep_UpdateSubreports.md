## hmRep_UPDATE SUBREPORTS ( Area )
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area

### Description
The command *hmRep_UPDATE SUBREPORTS* updates all subreport objects of the current report. Updating the subreports of the current report can be necessary, if you change the dependent subreport by programming language. The main report does not notice changes. In this case you have to update the main report. The update is only necessary for the user. If you working offscreen, you do need to call this command.

### Background
To display reports with subreports, hmReports does not always render subreport objects if you change the main report. The content of the subreport object is cached. But if you change the subreport itself by programming language, you have to give the main report the chance to build a new cache. This is done with **<self>**.

### Example
The current example updates all subreport objects of the current report:

```4d
hmRep_UPDATE SUBREPORTS(hmRep)
```
