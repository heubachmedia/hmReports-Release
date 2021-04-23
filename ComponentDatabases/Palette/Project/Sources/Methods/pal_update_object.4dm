//%attributes = {}
C_LONGINT:C283($i; $vl_area; $vl_objectID; $vl_type_multi; $vl_pos; $vl_size; $vl_anz_pages)
C_TEXT:C284($vt_objectname; $vt_current_report; $vt_unit)
C_POINTER:C301($vp_object; $vp_object2; $vp_object3; $vp_object4)
C_BOOLEAN:C305($vf_object_text; $vf_object_subreport; $vf_publish)

$vl_area:=$1

If (Count parameters:C259>1)
	$vt_objectname:=$2
Else 
	$vt_objectname:=""
End if 

ARRAY LONGINT:C221($tl_selected_objects; 0)
ARRAY LONGINT:C221($tl_selected_objects_types; 0)

hmRep_GET OBJECT LIST($vl_area; hmRep_scope_Selected; 1; $tl_selected_objects)

If (Size of array:C274($tl_selected_objects)>0)
	
	ARR_Resize(->$tl_selected_objects_types; Size of array:C274($tl_selected_objects))
	
	For ($i; 1; Size of array:C274($tl_selected_objects))
		$tl_selected_objects_types{$i}:=intern_GetObjectType($vl_area; $tl_selected_objects{$i})
	End for 
	
	$vl_objectID:=$tl_selected_objects{1}
	
	OBJECT_SetLongint("vl_current_area"; $vl_area)
	
	//=================================================================
	
	$vl_type_multi:=-1  //Hier steht der Typ aller Objekte drin, wenn alle Objekte den selben Typ haben, wenn nicht, dann -1
	$vf_object_text:=False:C215
	$vf_object_subreport:=False:C215
	
	For ($i; 1; Size of array:C274($tl_selected_objects))
		
		If ($tl_selected_objects_types{$i}=$vl_type_multi) | ($vl_type_multi=-1)
			$vl_type_multi:=$tl_selected_objects_types{$i}
		Else 
			$vl_type_multi:=-1
			$i:=Size of array:C274($tl_selected_objects)+1
		End if 
		
	End for 
	
	For ($i; 1; Size of array:C274($tl_selected_objects))
		
		Case of 
			: ($tl_selected_objects_types{$i}=hmRep_ObjType_Text)
				$vf_object_text:=True:C214
				
			: ($tl_selected_objects_types{$i}=hmRep_ObjType_Subreport)
				$vf_object_subreport:=True:C214
				
		End case 
		
	End for 
	
	//=================================================================
	//Allgemein
	
	If (OBJECT_GetLongint("klapp_allgemein")=1)
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vt_obj_name")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Name; $vl_area; "vt_obj_name")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_id")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; -7; $vl_area; "vl_obj_id")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vt_obj_typ")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Type; $vl_area; "vt_obj_typ")
		End if 
		
	End if 
	
	//=================================================================
	//Größe
	
	If (OBJECT_GetLongint("klapp_groesse")=1)
		
		$vt_unit:=intern_GetUnitName($vl_area)
		
		OBJECT_SetText("vt_rep_rulerunit1"; $vt_unit)
		OBJECT_SetText("vt_rep_rulerunit2"; $vt_unit)
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_left")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; -1; $vl_area; "vz_left")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_top")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; -2; $vl_area; "vz_top")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_right")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; -3; $vl_area; "vz_right")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_bottom")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; -4; $vl_area; "vz_bottom")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_width")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; -5; $vl_area; "vz_width")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_height")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; -6; $vl_area; "vz_height")
		End if 
		
	End if 
	
	//=================================================================
	//Optionen
	
	If (OBJECT_GetLongint("klapp_optionen")=1)
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_antialiasing")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Antialiasing; $vl_area; "vl_obj_antialiasing")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_print")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Print; $vl_area; "vl_obj_print")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_moveable")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Moveable; $vl_area; "vl_obj_moveable")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_resizeable")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Resizeable; $vl_area; "vl_obj_resizeable")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_fixedprinting")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_FixedPrinting; $vl_area; "vl_obj_fixedprinting")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_rotation")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Rotation; $vl_area; "vz_obj_rotation")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_variableheight")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_VariableHeight; $vl_area; "vl_obj_variableheight")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="tt_object_verticalsizing")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_VerticalSizing; $vl_area; "tt_object_verticalsizing")
		End if 
		
	End if 
	
	//=================================================================
	//Rahmen und Hintergrund
	
	If (OBJECT_GetLongint("klapp_rahmen")=1)
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_rahmenanzeigen")
			OBJECT SET ENABLED:C1123(*; "vl_obj_rahmenanzeigen"; $vl_type_multi#hmRep_ObjType_Line)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_ShowFrame; $vl_area; "vl_obj_rahmenanzeigen")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="framecolor")
			OBJECT SET ENABLED:C1123(*; "framecolor_button"; $vl_type_multi#hmRep_ObjType_Line)
			OBJECT SET VISIBLE:C603(*; "framecolor_popup"; $vl_type_multi#hmRep_ObjType_Line)
			OBJECT SET VISIBLE:C603(*; "framecolor_multi"; $vl_type_multi#hmRep_ObjType_Line)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_clr_ObjectFramecolor+1000; $vl_area; "framecolor")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_framealpha")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_clr_ObjectFramecolor+2000; $vl_area; "vz_obj_framealpha")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_framesize")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Penwidth; $vl_area; "vz_obj_framesize")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_rounding")
			OBJECT SET ENABLED:C1123(*; "vz_obj_rounding_stepper"; $vl_type_multi#hmRep_ObjType_Line)
			OBJECT SET VISIBLE:C603(*; "vz_obj_rounding_multi"; $vl_type_multi#hmRep_ObjType_Line)
			OBJECT SET ENTERABLE:C238(*; "vz_obj_rounding"; $vl_type_multi#hmRep_ObjType_Line)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Rounding; $vl_area; "vz_obj_rounding")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vl_obj_hintergrundanz")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_ShowFill; $vl_area; "vl_obj_hintergrundanz")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="fillcolor")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_clr_ObjectFillcolor+1000; $vl_area; "fillcolor")
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="vz_obj_fillalpha")
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_clr_ObjectFillcolor+2000; $vl_area; "vz_obj_fillalpha")
		End if 
		
	End if 
	
	//=================================================================
	//Text
	
	If (OBJECT_GetLongint("klapp_text")=1)
		
		If ($vt_objectname="") | ($vt_objectname="tt_fontlist")
			
			OBJECT SET ENABLED:C1123(*; "tt_fontlist"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Fontname; $vl_area; "tt_fontlist")
			
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="tz_fontsize")
			
			$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tz_fontsize")
			If (Not:C34(Is nil pointer:C315($vp_object)))
				
				ARR_Resize($vp_object; 14)
				
				$vp_object->{0}:=0
				$vp_object->{1}:=8
				$vp_object->{2}:=9
				$vp_object->{3}:=10
				$vp_object->{4}:=12
				$vp_object->{5}:=13
				$vp_object->{6}:=14
				$vp_object->{7}:=16
				$vp_object->{8}:=18
				$vp_object->{9}:=20
				$vp_object->{10}:=22
				$vp_object->{11}:=26
				$vp_object->{12}:=32
				$vp_object->{13}:=48
				$vp_object->{14}:=72
				
			End if 
			
			OBJECT SET ENABLED:C1123(*; "tz_fontsize"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Fontsize; $vl_area; "tz_fontsize")
			
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="tt_alignment")
			
			$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_alignment")
			
			If (Not:C34(Is nil pointer:C315($vp_object)))
				
				ARR_Resize($vp_object; 4)
				
				$vp_object->{1}:=Get localized string:C991("standard")
				$vp_object->{2}:=Get localized string:C991("links")
				$vp_object->{3}:=Get localized string:C991("zentriert")
				$vp_object->{4}:=Get localized string:C991("rechts")
				
			End if 
			
			OBJECT SET ENABLED:C1123(*; "tt_alignment"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Alignment; $vl_area; "tt_alignment")
			
		End if 
		
		If ($vt_objectname="") | ($vt_objectname="vl_obj_fett")
			OBJECT SET ENABLED:C1123(*; "vl_obj_fett"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Fontstyle; $vl_area; "vl_obj_fett")
		End if 
		
		If ($vt_objectname="") | ($vt_objectname="vl_obj_kursiv")
			OBJECT SET ENABLED:C1123(*; "vl_obj_kursiv"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Fontstyle; $vl_area; "vl_obj_kursiv")
		End if 
		
		If ($vt_objectname="") | ($vt_objectname="vl_obj_unterstrichen")
			OBJECT SET ENABLED:C1123(*; "vl_obj_unterstrichen"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Fontstyle; $vl_area; "vl_obj_unterstrichen")
		End if 
		
		If ($vt_objectname="") | ($vt_objectname="vl_obj_durchgestrichen")
			OBJECT SET ENABLED:C1123(*; "vl_obj_durchgestrichen"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Fontstyle; $vl_area; "vl_obj_durchgestrichen")
		End if 
		
		If ($vt_objectname="") | ($vt_objectname="textcolor")
			OBJECT SET ENABLED:C1123(*; "textcolor_button"; $vf_object_text)
			OBJECT SET VISIBLE:C603(*; "textcolor_popup"; $vf_object_text)
			OBJECT SET VISIBLE:C603(*; "textcolor_multi"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_clr_ObjectTextcolor+1000; $vl_area; "textcolor")
		End if 
		
		If ($vt_objectname="") | ($vt_objectname="vz_obj_textalpha")
			OBJECT SET ENABLED:C1123(*; "vz_obj_textalpha"; $vf_object_text)
			OBJECT SET ENABLED:C1123(*; "vz_obj_textalpha_stepper"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_clr_ObjectTextcolor+2000; $vl_area; "vz_obj_textalpha")
		End if 
		
		If ($vt_objectname="") | ($vt_objectname="vl_obj_textumbruch")
			OBJECT SET ENABLED:C1123(*; "vl_obj_textumbruch"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Wordwrap; $vl_area; "vl_obj_textumbruch")
		End if 
		
		If ($vt_objectname="") | ($vt_objectname="tt_barcode")
			
			OBJECT SET ENABLED:C1123(*; "tt_barcode"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Barcode; $vl_area; "tt_barcode")
			
		End if 
		
		If ($vt_objectname="") | ($vt_objectname="vz_obj_linespacing")
			OBJECT SET ENABLED:C1123(*; "vz_obj_linespacing"; $vf_object_text)
			OBJECT SET ENABLED:C1123(*; "vz_obj_linespacing_stepper"; $vf_object_text)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_Linespacing; $vl_area; "vz_obj_linespacing")
		End if 
		
	End if 
	
	//=================================================================
	//Unterbericht
	
	If (OBJECT_GetLongint("klapp_unterbericht")=1)
		
		If ($vt_objectname="") | ($vt_objectname="tt_subreport_name")
			
			$vt_current_report:=hmRep_Get Current Report($vl_area)
			
			ARRAY TEXT:C222($tt_reports_name; 0)
			ARRAY TEXT:C222($tt_reports_uuid; 0)
			
			hmRep_GET REPORT LIST($vl_area; $tt_reports_uuid)
			
			$vl_pos:=Find in array:C230($tt_reports_uuid; $vt_current_report)
			If ($vl_pos>0)
				
				$vl_anz_pages:=hmRep_Count Pages($vl_area)
				
				$vf_publish:=False:C215
				
				For ($i; 1; $vl_anz_pages)
					
					If (intern_GetPagePropertyLong($vl_area; $i; hmRep_pprop_PublishAsSubreport)=1)
						$vf_publish:=True:C214
					End if 
					
				End for 
				
				If (Not:C34($vf_publish))
					DELETE FROM ARRAY:C228($tt_reports_uuid; $vl_pos)
				End if 
				
			End if 
			
			$vl_size:=Size of array:C274($tt_reports_uuid)
			
			If ($vl_size>0)
				
				ARR_Resize(->$tt_reports_name; $vl_size)
				
				For ($i; 1; $vl_size)
					
					hmRep_SET CURRENT REPORT($vl_area; $tt_reports_uuid{$i})
					
					$tt_reports_name{$i}:=parse_GetReportPropertyText($vl_area; hmRep_rprop_name)
					
				End for 
				
				hmRep_SET CURRENT REPORT($vl_area; $vt_current_report)
				
				INSERT IN ARRAY:C227($tt_reports_uuid; 1; 2)
				INSERT IN ARRAY:C227($tt_reports_name; 1; 2)
				
				$tt_reports_name{1}:=Get localized string:C991("Keine")
				$tt_reports_name{2}:="-"
				
			Else 
				
				INSERT IN ARRAY:C227($tt_reports_name; 1)
				INSERT IN ARRAY:C227($tt_reports_uuid; 1)
				
				$tt_reports_name{1}:=Get localized string:C991("Keine")
				
			End if 
			
			$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_name")
			$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_uuid")
			
			ARR_Copy(->$tt_reports_name; $vp_object)
			ARR_Copy(->$tt_reports_uuid; $vp_object2)
			
			$vp_object->:=1
			
			OBJECT SET ENABLED:C1123(*; "tt_subreport_name"; $vf_object_subreport)
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_SubreportUUID; $vl_area; "tt_subreport_name")
			
		End if 
		
		If (Length:C16($vt_objectname)=0) | ($vt_objectname="tt_subreport_page")
			
			$vt_current_report:=hmRep_Get Current Report($vl_area)
			
			$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_name")
			$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_uuid")
			
			$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_subreport_pages")
			$vp_object4:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_page")
			
			$vl_pos:=$vp_object->
			
			ARR_Resize($vp_object3; 0)
			ARR_Resize($vp_object4; 0)
			
			If ($vp_object2->{$vl_pos}=$vt_current_report)  //Eigener Report
				
				$vl_anz_pages:=hmRep_Count Pages($vl_area)
				
				For ($i; 1; $vl_anz_pages)
					
					If (intern_GetPagePropertyLong($vl_area; $i; hmRep_pprop_PublishAsSubreport)=1)
						
						APPEND TO ARRAY:C911($vp_object3->; hmRep_Get Page ID From Number($vl_area; $i))
						APPEND TO ARRAY:C911($vp_object4->; String:C10($i))
						
					End if 
					
				End for 
				
				OBJECT SET ENABLED:C1123(*; "tt_subreport_page"; $vf_object_subreport)
				
			Else 
				
				If (Length:C16($vp_object2->{$vl_pos})=0)
					
					APPEND TO ARRAY:C911($vp_object3->; 0)
					APPEND TO ARRAY:C911($vp_object4->; Get localized string:C991("aktuelle_seite"))
					OBJECT SET ENABLED:C1123(*; "tt_subreport_page"; False:C215)
					
				Else 
					
					APPEND TO ARRAY:C911($vp_object3->; 0)
					APPEND TO ARRAY:C911($vp_object4->; Get localized string:C991("aktuelle_seite"))
					APPEND TO ARRAY:C911($vp_object3->; 0)
					APPEND TO ARRAY:C911($vp_object4->; "-")
					
					hmRep_SET CURRENT REPORT($vl_area; $vp_object2->{$vl_pos})
					$vl_anz_pages:=hmRep_Count Pages($vl_area)
					
					For ($i; 1; $vl_anz_pages)
						
						APPEND TO ARRAY:C911($vp_object3->; hmRep_Get Page ID From Number($vl_area; $i))
						APPEND TO ARRAY:C911($vp_object4->; String:C10($i))
						
					End for 
					
					hmRep_SET CURRENT REPORT($vl_area; $vt_current_report)
					OBJECT SET ENABLED:C1123(*; "tt_subreport_page"; $vf_object_subreport)
					
				End if 
				
			End if 
			
			pal_update_object_setmulti(->$tl_selected_objects; ->$tl_selected_objects_types; hmRep_oprop_SubreportPageID; $vl_area; "tt_subreport_page")
			
		End if 
		
		//If ($vt_objectname="") | ($vt_objectname="tt_subreport_darstellung")
		//
		//$vp_object:=OBJECT Get pointer(Object named;"tt_subreport_darstellung")
		//
		//ARR_Resize ($vp_object;2)
		//$vp_object->{1}:=Get localized string("On_Background")
		//$vp_object->{2}:=Get localized string("Scaled_to_Fit")
		//
		//OBJECT SET ENABLED(*;"tt_subreport_darstellung";$vf_object_subreport)
		//pal_update_object_setmulti (->$tl_selected_objects;->$tl_selected_objects_types;hmRep_oprop_Pictureformat;$vl_area;"tt_subreport_darstellung")
		//
		//End if 
		
	End if 
	
End if 
