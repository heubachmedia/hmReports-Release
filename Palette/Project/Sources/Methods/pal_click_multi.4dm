//%attributes = {}
C_TEXT:C284($vt_objectname)

If (Form event code:C388=On Clicked:K2:4)
	
	$vt_objectname:=OBJECT Get name:C1087(Object current:K67:2)
	$vt_objectname:=Replace string:C233($vt_objectname; "_multi"; "")
	
	OBJECT SET VISIBLE:C603(*; $vt_objectname+"_multi"; False:C215)
	OBJECT SET VISIBLE:C603(*; $vt_objectname; True:C214)
	GOTO OBJECT:C206(*; $vt_objectname)
	
	Case of 
		: ($vt_objectname="vl_obj_rahmenanzeigen")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_ShowFrame; $vt_objectname)
			
		: ($vt_objectname="vl_obj_hintergrundanz")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_ShowFill; $vt_objectname)
			
		: ($vt_objectname="vl_obj_fett")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_Fontstyle; $vt_objectname)
			
		: ($vt_objectname="vl_obj_kursiv")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_Fontstyle; $vt_objectname)
			
		: ($vt_objectname="vl_obj_unterstrichen")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_Fontstyle; $vt_objectname)
			
		: ($vt_objectname="vl_obj_durchgestrichen")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_Fontstyle; $vt_objectname)
			
		: ($vt_objectname="vl_obj_textumbruch")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_Wordwrap; $vt_objectname)
			
		: ($vt_objectname="vl_obj_antialiasing")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_Antialiasing; $vt_objectname)
			
		: ($vt_objectname="vl_obj_print")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_Print; $vt_objectname)
			
		: ($vt_objectname="vl_obj_moveable")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_Moveable; $vt_objectname)
			
		: ($vt_objectname="vl_obj_resizeable")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_Resizeable; $vt_objectname)
			
		: ($vt_objectname="vl_obj_fixedprinting")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_FixedPrinting; $vt_objectname)
			
		: ($vt_objectname="vl_obj_variableheight")
			OBJECT_SetLongint($vt_objectname; 0)
			pal_change_object(hmRep_oprop_VariableHeight; $vt_objectname)
			
	End case 
	
End if 
