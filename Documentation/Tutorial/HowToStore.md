To store a report is very easy with hmReports. Just call [hmRep_REPORT TO BLOB](../Reports/hmRep_ReportToBlob.md).

Now this blob contains all information about the report. All pages, objects, layers, guides, print settings, sections and reports properties are in this blob.

You can store the blob into a database record or you can save it to the hard disk.

## Format of the Blob

The hmReports blob is an open format. It contains a XML document. The blob can be compressed, so you can easily access all reports data:

```4d
var $vx_hmreports : Blob
var $vl_compression : Integer

$vl_compression:=0
BLOB PROPERTIES($vx_hmreports; $vl_compression)

If ($vl_compression#Is not compressed)
	EXPAND BLOB($vx_hmreports)
End if
```
Now you can parse the report with the 4D DOM commands.

## Changes to the report

You can make changes to the blob, but be careful. You should always read the blob only.
