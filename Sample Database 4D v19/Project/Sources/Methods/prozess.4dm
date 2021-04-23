//%attributes = {}
C_LONGINT:C283($vl_window; $vl_counter)

$vl_window:=Open window:C153(50; 50; 500; 250; Plain window:K34:13; "Operation läuft")

$vl_counter:=0

Repeat 
	
	ERASE WINDOW:C160($vl_window)
	$vl_counter:=$vl_counter+1
	MESSAGE:C88("test "+String:C10($vl_counter))
	
	DELAY PROCESS:C323(Current process:C322; 10)
	
Until (Shift down:C543)

CLOSE WINDOW:C154($vl_window)
