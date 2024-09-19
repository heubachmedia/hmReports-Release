## hmRep_INSTALL CALLBACK (Area ; Method name)
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Method name|Text|→|Method name

### Description

The command *hmRep_INSTALL CALLBACK* installs a callback method in the hmReports area. Pass the callback method name in the seconds parameter *methodname*. The callback method can be a 4D method or a method shared by a component.

**Important: All events are deactivated by default. If you want to use several events, you have to call [hmRep_SET EVENT STATE](hmRep_SetEventState.md).**

The callback method must have to following declaration:

```4d
#DECLARE($vl_area : Integer; $vl_event : Integer; $vt_report : Text; $vl_param1 : Integer; $vl_param2 : Integer; $vt_param : Text)->$vl_result : Integer
 ```
 
### Parameters
#### $0
The result should be *0* by default. You must always pass a value as *$0*. The meaning of this parameter is defined by the event.

#### $1
This parameter returns the area id.

#### $2
In this parameter you got the event id. For documentation of all events, see [Events](../Appendix/Events.md).

#### $3
This parameter returns always the UUID of the report.

#### $4
This parameter depends on the event.

#### $5
This parameter depends on the event.

#### $6
This parameter depends on the event.

### Example

```4d
#DECLARE($vl_area : Integer; $vl_event : Integer; $vt_report : Text; $vl_param1 : Integer; $vl_param2 : Integer; $vt_param : Text)->$vl_result : Integer

$vl_result:=0

Case of 
    : ($vl_event=hmRep_OnError)
        
    : ($vl_event=hmRep_OnCreateNewReport)
        hmRep_SET SECTION ITERATION($vl_area; 1; 0; Table(->[Customers]); "")
        
    : ($vl_event=hmRep_OnExecuteScript)
        
End case 
 ```
