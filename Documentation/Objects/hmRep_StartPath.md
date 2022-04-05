## hmRep_START PATH ( Area )
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area

### Description
The command *hmRep_START PATH* begins a new path in memory. If there is an open path already in memory, it will overwritten.

Now you have to add points, curves, subpaths with the following commands:

* [hmRep_PATH POINT](hmRep_PathPoint.md)
* [hmRep_PATH MOVE TO](hmRep_PathMoveTo.md)
* [hmRep_PATH CURVE](hmRep_PathCurve.md)
* [hmRep_CLOSE PATH](hmRep_ClosePath.md)

If you want to finish path drawing, you can create a new object with the command [hmRep_End Path](hmRep_EndPath.md).
