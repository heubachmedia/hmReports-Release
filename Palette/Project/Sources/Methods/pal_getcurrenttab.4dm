//%attributes = {}
C_POINTER:C301($vp_object1; $vp_object2; $vp_object3)
C_LONGINT:C283($vl_currenttab)

$vp_object1:=OBJECT Get pointer:C1124(Object named:K67:5; "vl_btn_layerlist")
$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "vl_btn_objectlist")
$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "vl_btn_database")

Case of 
	: ($vp_object1->=1)
		$vl_currenttab:=1
		
	: ($vp_object2->=1)
		$vl_currenttab:=2
		
	: ($vp_object3->=1)
		$vl_currenttab:=3
		
	Else 
		$vl_currenttab:=0
		
End case 

$0:=$vl_currenttab
