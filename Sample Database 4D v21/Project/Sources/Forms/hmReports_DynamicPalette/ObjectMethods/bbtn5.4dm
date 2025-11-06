var $vl_pos : Integer
var $vp_object_id; $vp_object_name : Pointer

If (Form event code:C388=On Clicked:K2:4)
	
	$vp_object_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_reports")
	$vp_object_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_reports")
	
	$vl_pos:=$vp_object_name->
	
	If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object_id->))
		
		CONFIRM:C162("Are you sure?")
		
		If (OK=1)
			
			QUERY:C277([Reports:11]; [Reports:11]ID:1=$vp_object_id->{$vl_pos})
			
			If (Records in selection:C76([Reports:11])=1)
				
				Write(->[Reports:11])
				DELETE RECORD:C58([Reports:11])
				ReadOnly(->[Reports:11])
				
				Editor_InitReportList
				$vp_object_name->:=1
				Editor_LoadReport
				
			End if 
			
		End if 
		
	End if 
	
End if 
