## hmRep_GET REPORT DEPENDENCIES ( Area ; scopeArray ; scopeIDArray ; UUIDArray)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|Area reference
|scopeArray|ARRAY LONGINT|←|Array of scope IDs
|scopeIDArray|ARRAY LONGINT|←|Array of IDs
|UUIDArray|ARRAY TEXT|←|Array of UUIDs

### Description
The command *hmRep_GET REPORT DEPENDENCIES* returns all dependencies of the current report. The command is useful, if you want to know, if other reports must be loaded in the area. This may happen if the current report uses Subreport objects.

Pass a *scopeArray* to get an array of all scopes. A scope of *1* means, there is a dependency to a subreport object.

Pass a *scopeIDArray* to get an array of IDs of the scope. If scope is *1*, *scopeIDArray* is filled with the object ID.

Pass a *UUIDArray* to get an array of all report UUIDs used in the current report.

These three arrays have always the same size. They are synchronized.

To open an report with its dependencies of subreports, you have to do the following things:

- Call *hmRep_GET REPORT DEPENDENCIES*
- If there are dependencies, check with [hmRep_GET REPORT LIST](../Areas/hmRep_GetReportList.md) if these reports are already loaded in the area
- If not, open the report in the area ([hmRep_Create Report](hmRep_CreateReport.md) and [hmRep_BLOB TO REPORT](hmRep_BlobToReport.md)...)

### Example
The current example returns an array of all reports dependencies:

```4d
ARRAY LONGINT($tl_dep_scopes; 0)
ARRAY LONGINT($tl_dep_ID; 0)
ARRAY TEXT($tt_dep_uuid; 0)

hmRep_GET REPORT DEPENDENCIES($vl_area; $tl_dep_scopes; $tl_dep_ID; $tt_dep_uuid)
```
