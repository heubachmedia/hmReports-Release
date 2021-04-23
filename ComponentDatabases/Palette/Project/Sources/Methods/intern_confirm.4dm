//%attributes = {}
C_LONGINT:C283($vl_window)
C_TEXT:C284($vt_loc)

$vt_loc:=$1

vt_dialog_alert:=Get localized string:C991($vt_loc)

$vl_window:=Open form window:C675("DLG_Confirm"; Movable form dialog box:K39:8)
DIALOG:C40("DLG_Confirm")
CLOSE WINDOW:C154($vl_window)

$0:=vl_ok=1
