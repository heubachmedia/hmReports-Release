var $vl_area : Integer
var $vo_file : 4D:C1709.File

If (Form event code:C388=On Clicked:K2:4)
	
	$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->
	
	$vo_file:=Folder:C1567(fk resources folder:K87:11).file("2010_FIFA_World_Cup_logo.svg")
	
	If ($vo_file.exists)
		
		cs:C1710.hmReportsSVG.new($vl_area; $vo_file.getContent()).import()
		
	End if 
	
End if 
