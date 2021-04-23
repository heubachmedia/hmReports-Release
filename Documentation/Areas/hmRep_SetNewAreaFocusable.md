## hmRep_SET NEW AREA FOCUSABLE (onOff)
###### Introduced in v6, Preemptive: no

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|onOff|Longint|→|0 = new areas cannot get focus <br />1 = new areas can get focus (default)

### Description
The command *hmRep_SET NEW AREA FOCUSABLE* sets new plugin-areas to focusable or not. If you pass *0*, new opened hmReports plugin area cannot get focus. Default value is *1*.
The command works globally for all processes. You should restore the default value (1), so that future plugin-areas behave like default (focusable).

### Example
The following example sets the hmReports area on the form to "not-focusable":

```4d
hmRep_SET NEW AREA FOCUSABLE(0)
$vl_ref:=Open Form Window (...)
 ```
