## hmRep_ENCRYPT PDF ( Input ; Output ; Password)
###### Introduced in v20, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Input|Text|→|Input path
|Output|Text|→|Output path
|Password|Text|→|Password

### Description
The command *hmRep_ENCRYPT PDF* encrypts an existing PDF file with the given password.

The path must be in POSIX style on macOS.

### Example

```4d
var $fileFrom; $fileTo : 4D.File

hmRep_ENCRYPT PDF($fileFrom.path; $fileTo.path; "myPassword")

```
