//%attributes = {}
C_LONGINT:C283($vl_area; $vl_formevent)

$vl_formevent:=$1

$vl_area:=OBJECT_GetLongint("hmReports_Pluginarea")

//If ($vl_formevent=On Load)
//
//$vp_container:=OBJECT Get pointer(Object subform container)
//
//If (Not(Nil($vp_container)))
//C_LONGINT($vp_container->)
//$vp_container->:=$vl_area
//End if 
//
//End if 

If ($vl_formevent=On Load:K2:1) | ($vl_formevent=On Clicked:K2:4) | ($vl_formevent=On Double Clicked:K2:5) | ($vl_formevent=On Plug in Area:K2:16) | ($vl_formevent=0)
	
	EXECUTE METHOD IN SUBFORM:C1085("palette_subform"; "pal_update"; *; $vl_area; $vl_formevent)
	
End if 

$0:=$vl_area
