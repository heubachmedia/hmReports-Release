//%attributes = {}
C_TEXT:C284($vt_locString)
C_LONGINT:C283($vl_ref)

$vt_locString:=$1

vt_dialog_alert:=Get localized string:C991($vt_locString)

If (Count parameters:C259>1)
	vt_dialog_alert:=Replace string:C233(vt_dialog_alert; "%%%"; $2)
End if 

$vl_ref:=Open form window:C675("DLG_Alert"; Movable form dialog box:K39:8)
DIALOG:C40("DLG_Alert")
CLOSE WINDOW:C154($vl_ref)
