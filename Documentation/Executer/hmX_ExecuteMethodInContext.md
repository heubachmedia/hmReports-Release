## hmX_Execute Method In Context (Context ; Methodname ; Line) → Next line
###### Introduced in v3.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Context|Longint|→|Execution context
|Methodname|Text|→|Method name
|Line|Longint|→|Line to execute
|Nextline|Longint|←|Next line to execute

### Description
The command *hmX_Execute Method In Context* executes a method in an execution context. You can only execute methods you have added previously with the command [hmX_ADD METHOD TO CONTEXT](hmX_AddMethodToContext.md). Pass the name of the method you want to execute in the parameter *methodname*. The *line* parameter indicates, which line to execute. In this case *nextline* returns the next line. Pass *0* for all lines.

The result *nextline* returns the next line of execution. If you pass *0* as *line* and an error occurs, the executer will stop and the *nextline* returns the next line after the error.

### Example
The following example tokenizes a method, adds the method to the context and executes the method:

```4d
var $vx_script : Blob
var $context; $vl_nextline : Integer

SET BLOB SIZE($vx_script; 0)
hmX_TOKENIZE("$a:=100"; $vx_script)
hmX_ADD METHOD TO CONTEXT($context; "myMethod"; $vx_script)
$vl_nextline:=hmX_Execute Method In Context($context; "myMethod"; 0)
```
