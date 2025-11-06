var $vx_blob : Blob
var $vp_object : Pointer
var $vl_area : Integer

If (Form event code:C388=On Clicked:K2:4)
	
	Case of 
		: (FORM Get current page:C276=1)
			
			$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->
			
			SET BLOB SIZE:C606($vx_blob; 0)
			hmRep_REPORT TO BLOB($vl_area; $vx_blob)
			[Reports:11]Blob:4:=$vx_blob
			
		: (FORM Get current page:C276=2)
			
			$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "vt_xmlcontent")
			
			CONVERT FROM TEXT:C1011($vp_object->; "UTF-8"; [Reports:11]Blob:4)
			
	End case 
	
	ACCEPT:C269
	
End if 
