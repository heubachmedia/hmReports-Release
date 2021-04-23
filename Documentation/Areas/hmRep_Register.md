## hmRep_Register (Serial number) → Error code
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Serial number|Text|→|Serial number for hmReports
|Error code|Longint|←|Error code

### Description
The command *hmRep_Register* registers the plugin. The *Serial number* parameter is the appropriate serial number from heubach media.

Put an empty string in the parameter *Serialnumber* and the Plugin will run 60 minutes in the demo mode. If you do not call the command, all other commands will be ignore.

You have to call this command only **one** time. The second call (and any further calls) is ignored and returns an error. You have to call this command depending on the current application type. For example, you cannot pass a development license to the command if you run a runtime application.

### Possible results
* 0 = no error
* -1 = wrong license
* -2 = not yet registered (internally)
* -3 = internal error
* -4 = demo license
* -5 = wrong product version
* -6 = wrong 4D version
* -7 = reached max clients
* -8 = expired
* -9 = Wrong 4D product
* -10 = Wrong 4D server number
* -11 = in demo mode not allowed

### Example

```4d
var $vl_error : Integer

$vl_error:=hmRep_Register("78HMmg1UkopPjifgJKm")
 ```
