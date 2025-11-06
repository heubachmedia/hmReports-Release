//%attributes = {}
var $vl_window; $vl_area : Integer
var $vo_obj : Object

$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->

ARRAY PICTURE:C279($tb_pictures; 0)
hmRep_RENDER TO PICTURE($vl_area; $tb_pictures; hmRep_PicType_PNG; 0; 0; 0)

If (Size of array:C274($tb_pictures)>0)
	
	$vo_obj:={}
	$vo_obj.pics:=[]
	$vo_obj.currentpage:=1
	
	ARRAY TO COLLECTION:C1563($vo_obj.pics; $tb_pictures)
	
	$vl_window:=Open form window:C675("Preview"; Plain window:K34:13)
	DIALOG:C40("Preview"; $vo_obj)
	
Else 
	
	ALERT:C41("No preview available!")
	
End if 
