//%attributes = {}
C_POINTER:C301($vp_objects; $vp_object; $vp_object2; $vp_object3; $vp_objects_types; $vp_object4)
C_TEXT:C284($vt_objectname; $vt_last_value; $vt_value; $vt_uuid)
C_LONGINT:C283($i; $vl_selector; $vl_area; $vl_red; $vl_green; $vl_blue; $vl_fontstyle; $vl_pos; $vl_pageid; $vl_type)
C_BOOLEAN:C305($vf_multi)
C_REAL:C285($vz_last_value; $vz_value; $vz_left; $vz_top; $vz_right; $vz_bottom; $vz_alpha)

$vp_objects:=$1
$vp_objects_types:=$2
$vl_selector:=$3
$vl_area:=$4
$vt_objectname:=$5

$vf_multi:=False:C215  //Alle Eigenschaften gleich?

If ($vl_selector=hmRep_oprop_Name) | ($vl_selector=hmRep_oprop_Fontname) | ($vl_selector=hmRep_oprop_SubreportUUID)
	
	For ($i; 1; Size of array:C274($vp_objects->))
		
		$vl_type:=$vp_objects_types->{$i}
		$vt_last_value:=intern_GetObjectPropertyText($vl_area; $vp_objects->{$i}; $vl_selector)
		
		If ($i=1)
			
			$vt_value:=$vt_last_value
			
			Case of 
				: ($vl_selector=hmRep_oprop_Fontname)
					
					$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_fontlist")
					If (Not:C34(Is nil pointer:C315($vp_object)))
						$vp_object->{0}:=$vt_value
					End if 
					
				: ($vl_selector=hmRep_oprop_SubreportUUID)
					
					If ($vl_type=hmRep_ObjType_Subreport)
						
						$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_name")
						$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_uuid")
						$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_subreport_pages")
						
						If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object2)))
							
							$vl_pos:=Find in array:C230($vp_object2->; $vt_value)
							
							If ($vl_pos>0)
								
								$vp_object->:=$vl_pos
								
							Else 
								
								If (Size of array:C274($vp_object->)=1)
									
									APPEND TO ARRAY:C911($vp_object->; "-")
									APPEND TO ARRAY:C911($vp_object2->; "")
									APPEND TO ARRAY:C911($vp_object3->; 0)
									
								End if 
								
								APPEND TO ARRAY:C911($vp_object->; "? "+intern_GetObjectPropertyText($vl_area; $vp_objects->{$i}; hmRep_oprop_SubreportName)+" ?")
								APPEND TO ARRAY:C911($vp_object2->; $vt_value)
								APPEND TO ARRAY:C911($vp_object3->; intern_GetObjectPropertyLong($vl_area; $vp_objects->{$i}; hmRep_oprop_SubreportPageID))
								
								$vp_object->:=Size of array:C274($vp_object->)
								
							End if 
							
						End if 
						
					End if 
					
				Else 
					
					OBJECT_SetText($vt_objectname; $vt_value)
					
			End case 
			
		Else 
			
			If (Not:C34(String_Compare($vt_value; $vt_last_value)))
				$vf_multi:=True:C214
				$i:=Size of array:C274($vp_objects->)+1
			End if 
			
		End if 
		
	End for 
	
Else 
	
	For ($i; 1; Size of array:C274($vp_objects->))
		
		$vl_type:=$vp_objects_types->{$i}
		
		If ($vl_selector=-1) | ($vl_selector=-2) | ($vl_selector=-3) | ($vl_selector=-4) | ($vl_selector=-5) | ($vl_selector=-6)
			
			$vz_left:=0
			$vz_top:=0
			$vz_right:=0
			$vz_bottom:=0
			
			hmRep_GET OBJECT RECT($vl_area; $vp_objects->{$i}; $vz_left; $vz_top; $vz_right; $vz_bottom)
			
			$vz_left:=Round:C94(hmRep_Pixel To Rulerunit($vl_area; $vz_left); 2)
			$vz_top:=Round:C94(hmRep_Pixel To Rulerunit($vl_area; $vz_top); 2)
			$vz_right:=Round:C94(hmRep_Pixel To Rulerunit($vl_area; $vz_right); 2)
			$vz_bottom:=Round:C94(hmRep_Pixel To Rulerunit($vl_area; $vz_bottom); 2)
			
		End if 
		
		Case of 
			: ($vl_selector=-1)
				$vz_last_value:=$vz_left
				
			: ($vl_selector=-2)
				$vz_last_value:=$vz_top
				
			: ($vl_selector=-3)
				$vz_last_value:=$vz_right
				
			: ($vl_selector=-4)
				$vz_last_value:=$vz_bottom
				
			: ($vl_selector=-5)
				$vz_last_value:=$vz_right-$vz_left
				
			: ($vl_selector=-6)
				$vz_last_value:=$vz_bottom-$vz_top
				
			: ($vl_selector=-7)
				$vz_last_value:=$vp_objects->{$i}
				
			: ($vl_selector=(hmRep_clr_ObjectFramecolor+1000))
				
				$vl_red:=0
				$vl_green:=0
				$vl_blue:=0
				$vz_alpha:=0
				hmRep_GET COLOR WITH ALPHA($vl_area; hmRep_clr_ObjectFramecolor; $vp_objects->{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				$vz_last_value:=intern_Color16BitTo8Bit($vl_red; $vl_green; $vl_blue)
				
				vl_framecolor_popup:=intern_ColorGetIndexFrom16Bit($vl_red; $vl_green; $vl_blue)
				
			: ($vl_selector=(hmRep_clr_ObjectFramecolor+2000))
				
				$vl_red:=0
				$vl_green:=0
				$vl_blue:=0
				$vz_alpha:=0
				
				hmRep_GET COLOR WITH ALPHA($vl_area; hmRep_clr_ObjectFramecolor; $vp_objects->{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				$vz_last_value:=$vz_alpha
				
			: ($vl_selector=(hmRep_clr_ObjectFillcolor+1000))
				
				$vl_red:=0
				$vl_green:=0
				$vl_blue:=0
				$vz_alpha:=0
				
				hmRep_GET COLOR WITH ALPHA($vl_area; hmRep_clr_ObjectFillcolor; $vp_objects->{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				$vz_last_value:=intern_Color16BitTo8Bit($vl_red; $vl_green; $vl_blue)
				
				vl_fillcolor_popup:=intern_ColorGetIndexFrom16Bit($vl_red; $vl_green; $vl_blue)
				
			: ($vl_selector=(hmRep_clr_ObjectFillcolor+2000))
				
				$vl_red:=0
				$vl_green:=0
				$vl_blue:=0
				$vz_alpha:=0
				
				hmRep_GET COLOR WITH ALPHA($vl_area; hmRep_clr_ObjectFillcolor; $vp_objects->{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				$vz_last_value:=$vz_alpha
				
			: ($vl_selector=(hmRep_clr_ObjectTextcolor+1000))
				
				$vl_red:=0
				$vl_green:=0
				$vl_blue:=0
				$vz_alpha:=0
				
				hmRep_GET COLOR WITH ALPHA($vl_area; hmRep_clr_ObjectTextcolor; $vp_objects->{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				$vz_last_value:=intern_Color16BitTo8Bit($vl_red; $vl_green; $vl_blue)
				
				vl_textcolor_popup:=intern_ColorGetIndexFrom16Bit($vl_red; $vl_green; $vl_blue)
				
			: ($vl_selector=(hmRep_clr_ObjectTextcolor+2000))
				
				$vl_red:=0
				$vl_green:=0
				$vl_blue:=0
				$vz_alpha:=0
				
				hmRep_GET COLOR WITH ALPHA($vl_area; hmRep_clr_ObjectTextcolor; $vp_objects->{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				$vz_last_value:=$vz_alpha
				
			: ($vl_selector=hmRep_oprop_Fontstyle) & ($vt_objectname="vl_obj_fett")
				$vl_fontstyle:=intern_GetObjectPropertyLong($vl_area; $vp_objects->{$i}; $vl_selector)
				$vz_last_value:=Num:C11(($vl_fontstyle & Bold:K14:2)>0)
				
			: ($vl_selector=hmRep_oprop_Fontstyle) & ($vt_objectname="vl_obj_kursiv")
				$vl_fontstyle:=intern_GetObjectPropertyLong($vl_area; $vp_objects->{$i}; $vl_selector)
				$vz_last_value:=Num:C11(($vl_fontstyle & Italic:K14:3)>0)
				
			: ($vl_selector=hmRep_oprop_Fontstyle) & ($vt_objectname="vl_obj_unterstrichen")
				$vl_fontstyle:=intern_GetObjectPropertyLong($vl_area; $vp_objects->{$i}; $vl_selector)
				$vz_last_value:=Num:C11(($vl_fontstyle & Underline:K14:4)>0)
				
			: ($vl_selector=hmRep_oprop_Fontstyle) & ($vt_objectname="vl_obj_durchgestrichen")
				$vl_fontstyle:=intern_GetObjectPropertyLong($vl_area; $vp_objects->{$i}; $vl_selector)
				$vz_last_value:=Num:C11(($vl_fontstyle & 8)>0)
				
			: ($vl_selector=hmRep_oprop_SubreportPageID)
				
				If ($vl_type=hmRep_ObjType_Subreport)
					
					$vl_pageid:=intern_GetObjectPropertyReal($vl_area; $vp_objects->{$i}; hmRep_oprop_SubreportPageID)
					
					$vt_uuid:=intern_GetObjectPropertyText($vl_area; $vp_objects->{$i}; hmRep_oprop_SubreportUUID)
					
					If ($vt_uuid#"")
						
						If ($vl_pageid=0)
							
							$vz_last_value:=0
							
						Else 
							
							$vz_last_value:=$vl_pageid
							
						End if 
						
					Else 
						$vz_last_value:=0
					End if 
					
					$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_subreport_pages")
					$vp_object4:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_page")
					
					$vl_pos:=Find in array:C230($vp_object3->; $vz_last_value)
					
					If ($vl_pos>0)
						$vp_object4->:=$vl_pos
					Else 
						$vp_object4->:=0
					End if 
					
				End if 
				
			Else 
				$vz_last_value:=intern_GetObjectPropertyReal($vl_area; $vp_objects->{$i}; $vl_selector)
				
		End case 
		
		If ($i=1)
			
			$vz_value:=$vz_last_value
			
			Case of 
				: ($vl_selector=hmRep_oprop_Type)
					OBJECT_SetText($vt_objectname; intern_GetLocalizedObjectType($vl_area; $vp_objects->{$i}))
					
				: ($vl_selector=hmRep_oprop_Penwidth)
					OBJECT_SetLongint("vz_obj_framesize_stepper"; $vz_value)
					OBJECT_SetReal($vt_objectname; $vz_value)
					
				: ($vl_selector=hmRep_oprop_Linespacing)
					OBJECT_SetLongint("vz_obj_linespacing_stepper"; $vz_value)
					OBJECT_SetReal($vt_objectname; $vz_value)
					
				: ($vl_selector=hmRep_oprop_Rounding)
					OBJECT_SetLongint("vz_obj_rounding_stepper"; $vz_value)
					OBJECT_SetReal($vt_objectname; $vz_value)
					
				: ($vl_selector=(hmRep_clr_ObjectFramecolor+1000))
					OBJECT SET RGB COLORS:C628(*; $vt_objectname; 0; $vz_value)
					
				: ($vl_selector=(hmRep_clr_ObjectFillcolor+1000))
					OBJECT SET RGB COLORS:C628(*; $vt_objectname; 0; $vz_value)
					
				: ($vl_selector=(hmRep_clr_ObjectTextcolor+1000))
					OBJECT SET RGB COLORS:C628(*; $vt_objectname; 0; $vz_value)
					
				: ($vl_selector=hmRep_oprop_Fontsize)
					
					$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tz_fontsize")
					If (Not:C34(Is nil pointer:C315($vp_object)))
						$vp_object->{0}:=$vz_value
					End if 
					
				: ($vl_selector=hmRep_oprop_Alignment)
					
					$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_alignment")
					If (Not:C34(Is nil pointer:C315($vp_object)))
						$vp_object->:=$vz_value
					End if 
					
				: ($vl_selector=(hmRep_clr_ObjectFramecolor+2000))
					OBJECT_SetLongint("vz_obj_framealpha_stepper"; $vz_value)
					OBJECT_SetReal($vt_objectname; $vz_value)
					
				: ($vl_selector=(hmRep_clr_ObjectFillcolor+2000))
					OBJECT_SetLongint("vz_obj_fillalpha_stepper"; $vz_value)
					OBJECT_SetReal($vt_objectname; $vz_value)
					
				: ($vl_selector=(hmRep_clr_ObjectTextcolor+2000))
					OBJECT_SetLongint("vz_obj_textalpha_stepper"; $vz_value)
					OBJECT_SetReal($vt_objectname; $vz_value)
					
				: ($vl_selector=hmRep_oprop_Barcode)
					
					$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_barcode")
					$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_barcode")
					
					If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object2)))
						
						$vl_pos:=Find in array:C230($vp_object2->; $vz_value)
						
						If ($vl_pos>0)
							$vp_object->:=$vl_pos
						Else 
							$vp_object->:=1
						End if 
						
					End if 
					
				: ($vl_selector=hmRep_oprop_SubreportPageID)
					
				: ($vl_selector=hmRep_oprop_Pictureformat)
					
					//If ($vl_type=hmRep_ObjType_Subreport)
					//
					//$vp_object:=OBJECT Get pointer(Object named;"tt_subreport_darstellung")
					//
					//If (Not(Nil($vp_object)))
					//
					//Case of 
					//: ($vz_value=2)
					//$vp_object->:=2
					//
					//: ($vz_value=3)
					//$vp_object->:=1
					//
					//Else 
					//$vp_object->:=1
					//
					//End case 
					//
					//End if 
					//
					//End if 
					
				: ($vl_selector=hmRep_oprop_VerticalSizing)
					
					$vp_object:=OBJECT_GetPointer("tt_object_verticalsizing")
					
					If (Not:C34(Is nil pointer:C315($vp_object)))
						
						$vp_object->:=$vz_value+1
						
					End if 
					
				Else 
					OBJECT_SetReal($vt_objectname; $vz_value)
					
			End case 
			
		Else 
			
			If ($vz_last_value#$vz_value)
				$vf_multi:=True:C214
				$i:=Size of array:C274($vp_objects->)+1
			End if 
			
		End if 
		
	End for 
	
End if 

If ($vf_multi)
	
	OBJECT SET VISIBLE:C603(*; $vt_objectname+"_multi"; True:C214)
	OBJECT SET VISIBLE:C603(*; $vt_objectname; False:C215)
	
	Case of 
		: ($vl_selector=hmRep_oprop_ShowFrame)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		: ($vl_selector=hmRep_oprop_ShowFill)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		: ($vl_selector=hmRep_oprop_Fontstyle)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		: ($vl_selector=hmRep_oprop_Wordwrap)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		: ($vl_selector=hmRep_oprop_Antialiasing)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		: ($vl_selector=hmRep_oprop_Print)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		: ($vl_selector=hmRep_oprop_Moveable)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		: ($vl_selector=hmRep_oprop_Resizeable)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		: ($vl_selector=hmRep_oprop_FixedPrinting)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		: ($vl_selector=hmRep_oprop_VariableHeight)
			OBJECT_SetLongint($vt_objectname+"_multi"; 2)
			
		Else 
			OBJECT_SetText($vt_objectname+"_multi"; Get localized string:C991("multiple_values"))
			
	End case 
	
Else 
	
	OBJECT SET VISIBLE:C603(*; $vt_objectname+"_multi"; False:C215)
	OBJECT SET VISIBLE:C603(*; $vt_objectname; True:C214)
	
End if 

