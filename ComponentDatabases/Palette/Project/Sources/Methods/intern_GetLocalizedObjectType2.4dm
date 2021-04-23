//%attributes = {}
C_LONGINT:C283($vl_objecttype)
C_TEXT:C284($vt_objecttype)

$vl_objecttype:=$1

Case of 
	: ($vl_objecttype=hmRep_ObjType_Unknown)
		$vt_objecttype:="unknown"
		
	: ($vl_objecttype=hmRep_ObjType_Group)
		$vt_objecttype:="TypeGroup"
		
	: ($vl_objecttype=hmRep_ObjType_Line)
		$vt_objecttype:="line"
		
	: ($vl_objecttype=hmRep_ObjType_Oval)
		$vt_objecttype:="oval"
		
	: ($vl_objecttype=hmRep_ObjType_Rect)
		$vt_objecttype:="rect"
		
	: ($vl_objecttype=hmRep_ObjType_Text)
		$vt_objecttype:="text"
		
	: ($vl_objecttype=hmRep_ObjType_Picture)
		$vt_objecttype:="picture"
		
	: ($vl_objecttype=hmRep_ObjType_Arc)
		$vt_objecttype:="arc"
		
	: ($vl_objecttype=hmRep_ObjType_Path)
		$vt_objecttype:="path"
		
	: ($vl_objecttype=hmRep_ObjType_Freehand)
		$vt_objecttype:="freehand"
		
	: ($vl_objecttype=hmRep_ObjType_Subreport)
		$vt_objecttype:="subreport"
		
	: ($vl_objecttype=hmRep_ObjType_Chart)
		$vt_objecttype:="chart"
		
	Else 
		$vt_objecttype:="unknown"
		
End case 

$0:=Get localized string:C991($vt_objecttype)
