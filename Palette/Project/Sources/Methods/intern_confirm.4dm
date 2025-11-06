//%attributes = {}
#DECLARE($vt_loc : Text) : Boolean

var $vl_window : Integer
var $vo_obj : Object

$vo_obj:={text: Localized string:C991($vt_loc); ok: False:C215}

$vl_window:=Open form window:C675("DLG_Confirm"; Movable form dialog box:K39:8)
DIALOG:C40("DLG_Confirm"; $vo_obj)
CLOSE WINDOW:C154($vl_window)

return ($vo_obj.ok)
