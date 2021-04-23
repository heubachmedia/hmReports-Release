C_POINTER:C301($vp_object)

If (Form event code:C388=On Clicked:K2:4)
	
	If (vl_preview_currentpage>1)
		
		vl_preview_currentpage:=vl_preview_currentpage-1
		
		vb_preview:=tb_pictures{vl_preview_currentpage}
		
		$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "vt_previewtext")
		
		$vp_object->:=String:C10(vl_preview_currentpage)+"/"+String:C10(Size of array:C274(tb_pictures))
		
	Else 
		
		BEEP:C151
		
	End if 
	
End if 
