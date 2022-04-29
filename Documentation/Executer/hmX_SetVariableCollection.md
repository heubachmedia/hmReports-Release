## hmX_SET VARIABLE COLLECTION (Context ; Name ; Collection)
###### Introduced in v19.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Name|Text|→|variable name
|Collection|Collection|→|Collection variable

### Description
The command *hmX_SET VARIABLE COLLECTION* adds a collection variable and a it's value to an execution context.
If a variable with the variable name exists, the variable will be overwritten.
Important: No copy of the collection will be created, only a reference!

### Example
The following example adds a collection variable *myCollection* into the context:

```4d
var $collection : Collection

$collection:=New collection(1; 2)

hmX_SET VARIABLE COLLECTION($context; "myCollection"; $collection)
```
