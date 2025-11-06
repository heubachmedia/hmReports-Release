//%attributes = {}
#DECLARE($vt_locString : Text; $vt_param : Text)

var $vl_ref : Integer
var $vt_text : Text

$vt_text:=Localized string:C991($vt_locString)

If (Length:C16($vt_param)>0)
	$vt_text:=Replace string:C233($vt_text; "%%%"; $vt_param)
End if 

$vl_ref:=Open form window:C675("DLG_Alert"; Movable form dialog box:K39:8)
DIALOG:C40("DLG_Alert"; {text: $vt_text})
CLOSE WINDOW:C154($vl_ref)
