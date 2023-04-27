C_POINTER:C301($vp_object)
C_LONGINT:C283($vl_area)

Case of 
	: (Form event code:C388=On Load:K2:1)
		
		$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_register1")
		
		ARRAY TEXT:C222($vp_object->; 2)
		$vp_object->{1}:="Report"
		$vp_object->{2}:="XML"
		$vp_object->:=1
		
		$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "vt_xmlcontent")
		
		$vp_object->:=Convert to text:C1012([Reports:11]Blob:4; "UTF-8")
		
		$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->
		
		If (Not:C34(Is new record:C668([Reports:11])))
			hmRep_BLOB TO REPORT($vl_area; hmRep_Import_hmReports; [Reports:11]Blob:4)
		End if 
		
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Pagelist; 0; "")
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Tabbar; 0; "")
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Toolbar; 0; "")
		
End case 
