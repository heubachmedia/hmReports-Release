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
 C_LONGINT(Callback;$0)
 C_LONGINT(Callback;$1)
 C_LONGINT(Callback;$2)
 C_TEXT(Callback;$3)
 C_LONGINT(Callback;$4)
 C_LONGINT(Callback;$5)
 C_TEXT(Callback;$6)
 ```
 
### Parameters
#### $0
The result should be *0* by default. You must always pass a value as *$0*. The meaning of this parameter is defined by the event.

#### $1
This parameter returns the area id.

#### $2
In this parameter you got the event id. For documentation of all events, see [Events].

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
C_LONGINT($vl_area; $vl_event; $vl_result; $vl_param1; $vl_param2)
C_TEXT($vt_report; $vt_param)

$vl_area:=$1
$vl_event:=$2
$vt_report:=$3
$vl_param1:=$4
$vl_param2:=$5
$vt_param:=$6

Case of 
	: ($vl_event=hmRep_OnError)
		
	: ($vl_event=hmRep_OnCreateNewReport)
		hmRep_SET SECTION ITERATION($vl_area; 1; 0; Table(->[Customers]); "")
		
	: ($vl_event=hmRep_OnExecuteScript)
		
End case 

$0:=$vl_result
 ```
