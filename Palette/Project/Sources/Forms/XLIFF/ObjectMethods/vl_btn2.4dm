C_POINTER:C301($vp_tt_resnames)
C_LONGINT:C283($vl_size)

If (Form event code:C388=On Clicked:K2:4)
	
	$vp_tt_resnames:=OBJECT_GetPointer("tt_resnames")
	
	$vl_size:=Size of array:C274($vp_tt_resnames->)
	
	LISTBOX INSERT ROWS:C913(*; "tf_xliff_listbox"; $vl_size+1)
	
End if 
