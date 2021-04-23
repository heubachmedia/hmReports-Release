## hmRep_Get Version → Version
###### Introduced in v1.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Version|Longint|←|Version number of hmReports

### Description
The command *hmRep_Get Version* returns the version number of hmReports. The version number consists of two bytes with the following structure:

 * 0xFF00 - Major version
 * 0x00F0 - Minor version
 * 0x000F - Revision version

### Example
The following example shows the version number as a message:

```4d
C_LONGINT($vl_version; $vl_majorversion; $vl_minorversion; $vl_revision)

$vl_version:=hmRep_Get Version
$vl_majorversion:=($vl_version & 0x0F00) >> 8
$vl_minorversion:=($vl_version & 0x00F0) >> 4
$vl_revision:=$vl_version & 0x000F

ALERT("hmReports Version "+String($vl_majorversion)+"."+String($vl_minorversion)+"."+String($vl_revision)+" is running.")
 ```
