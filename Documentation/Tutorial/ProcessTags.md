The command [hmX_Process Tags] is a very powerful command.

This command parses the text for executable tags and executes the source into an own context.

The command [hmX_Process Tags] works like the 4D command but with the following advantages:

- You can use local variables in the HTML template
- You can work like in 4D with Case of/For/If - no special 4D-tags needed
- You can pass variables before processing

## Example

This example shows a possible "On Web Connection" method.
This example creates an execution context, adds a variable and an array to the context. Then it calls the command [hmX_Process Tags] for processing.

Finally the html text is send back to the HTTP-Client.

```4d
C_TEXT($vt_url;$vt_file;$vt_document;$1)
C_BLOB($vx_blob)
C_LONGINT($vl_context)

$vt_url:=$1

If ($vt_url="/")  //index

$vt_file:=Get 4D folder(HTML Root folder)+"myindex.html"

If (Test path name($vt_file)=Is a document)

SET BLOB SIZE($vx_blob;0)
DOCUMENT TO BLOB($vt_file;$vx_blob)
$vt_document:=Convert to text($vx_blob;"utf-8")

$vl_context:=hmX_Create Execution Context 

ARRAY TEXT($tt_array;3)
$tt_array{1}:="Element 1"
$tt_array{2}:="Element 2"
$tt_array{3}:="Element 3"

hmX_SET VARIABLE ($vl_context;"testvariable";Is text;"Test Content";0;!00.00.0000!)
hmX_SET ARRAY ($vl_context;"testarray";$tt_array)

$vl_error:=hmX_Process Tags ($vl_context;$vt_document)

hmX_DELETE EXECUTION CONTEXT ($vl_context)

WEB SEND TEXT($vt_document;"text/html")

End if 

End if 
```

## HTML Tags

Between *<%* and *%>* will be parsed as 4D code. If you use *$0* the text will be inserted at this place.

### Example of If

```4d
<%
$0:="TestVariable: "+testvariable+"<br />"
$0:=$0+"Testarray Size: "+string(size of array(testarray))+"\r"
for($i;1;size of array(testarray))
$0:=$0+testarray{$i}+"<br />"
end for
%>
```

You can use **one** For/End for and Case Of over several HTML code blocks. Example:

```4d
<%If([Offer]Value>0)%>
<tr>
<td></td>
<td valign="top" align="right"><%$0:=String([Offer]Value;"###,###,##0.00;-###,###,##0.00;0.00")%> &euro;</td>	
</tr>	
<%End If%>
```

### Example of Case Of

<%Case Of
:(vl_office=1)%>

	<td valign="top" class="footer">heubach media<br /></td>

<%:(vl_office=2)%>

	<td valign="top" class="footer">milo rental<br /></td>

<%:(vl_office=3)%>

	<td valign="top" class="footer">heubach media GmbH<br /></td>

<%End Case%>
