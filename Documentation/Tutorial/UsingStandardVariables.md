**This chapter is obsolete with hmReports 3.0! Please do not use this variables in new reports.**

You can use instead of hmRep_Date a script "$0:=String(Current Date)"
You can use instead of hmRep_Time a script "$0:=String(Current Time)"
You can use instead of hmRep_Area all report/object properties directly"
You can use instead of hmRep_ObjectID all report/object properties directly"
You can use instead of hmRep_Record all section properties directly"
You can use instead of hmRep_Page all report properties directly"
You can use instead of hmRep_ReportPage all report properties directly"

hmReports provides some standard variables you can use in your scripts or directly.

For SuperReport Pro compatibility, hmReports also supports SRP variables. You can still use them but you should convert them into hmReports variables in the future.

Before using the variables in your database (before open the form with the hmReports area on it), you should declare and define all variables you want to use. For example, the *On Load* procedure may have the following code:

```4d
C_DATE(hmRep_Date)
C_TIME(hmRep_Time)
C_LONGINT(hmRep_Area;hmRep_ObjectID;hmRep_Record;hmRep_Page;hmRep_ReportPage)

hmRep_Date:=!00.00.00!
hmRep_Time:=†00:00:00†
hmRep_Area:=0
hmRep_ObjectID:=0
hmRep_Record:=0
hmRep_Page:=0
hmRep_ReportPage:=0
```

The following variables are available in hmReports:

## hmReports Standard Variables

### hmRep_Date

- defined as C_DATE
- SRP Variable name is *SRDate*.
- The variable is filled with the current date before printing

### hmRep_Time

- defined as C_TIME
- SRP Variable name is *SRTime*.
- The variable is filled with the current time before printing

### hmRep_Area

- defined as C_LONGINT
- SRP Variable name is *SRArea*.
- The variable is filled with the area reference

### hmRep_ObjectID

- defined as C_LONGINT
- SRP Variable name is *SRObjectID*.
- The variable is filled with the current object id before executing the object script

### hmRep_Record

- defined as C_LONGINT
- SRP Variable name is *SRRecord*.
- The variable is filled with the current iteration number

### hmRep_Page

- defined as C_LONGINT
- No SRP Variable available
- The variable is filled with the current page number of the entire result document

### hmRep_ReportPage

- defined as C_LONGINT
- SRP Variable name is *SRPage*.
- The variable is filled with the current page number of the current report

## The different between hmRep_Page and hmRep_ReportPage

There is a different between the variables *hmRep_Page* and *hmRep_ReportPage* if you are using more than one page in the report.

**For example:**

If you have two pages defined: 1st page is a static page and the 2nd page is a report page definition which may have 5 pages as result.

The result is:

- Page 1: Static Page (hmRep_Page=1, hmRep_ReportPage=1)
- Page 2: Report Page 1 (hmRep_Page=2, hmRep_ReportPage=1)
- Page 3: Report Page 2 (hmRep_Page=3, hmRep_ReportPage=2)
- Page 4: Report Page 3 (hmRep_Page=4, hmRep_ReportPage=3)
- Page 5: Report Page 4 (hmRep_Page=5, hmRep_ReportPage=4)
- Page 6: Report Page 5 (hmRep_Page=6, hmRep_ReportPage=5)
