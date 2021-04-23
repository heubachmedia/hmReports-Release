//%attributes = {}
C_LONGINT:C283($i; $vl_area; $vl_selector; $vl_red; $vl_green; $vl_blue; $vl_color; $vl_8bitcolor; $vl_type; $vl_alignment; $vl_fontstyle; $vl_font_bold; $vl_font_italic; $vl_font_underline; $vl_barcode; $vl_pos; $vl_page; $vl_font_strikethrough)
C_TEXT:C284($vt_objectname; $vt_fontname; $vt_uuid)
C_REAL:C285($vz_left; $vz_top; $vz_right; $vz_bottom; $vz_width; $vz_height; $vz_value; $vz_fontsize; $vz_alpha)
C_BOOLEAN:C305($vf_ok)
C_POINTER:C301($vp_object; $vp_object2; $vp_object3)

$vl_selector:=$1
$vt_objectname:=$2

$vl_area:=OBJECT_GetLongint("vl_current_area")

ARRAY LONGINT:C221($tl_selected_objects; 0)
hmRep_GET OBJECT LIST($vl_area; hmRep_scope_Selected; 1; $tl_selected_objects)

$vf_ok:=True:C214

For ($i; 1; Size of array:C274($tl_selected_objects))
	
	$vl_type:=intern_GetObjectType($vl_area; $tl_selected_objects{$i})
	
	Case of 
		: ($vl_selector=-1)  //Größe
			
			$vz_left:=0
			$vz_top:=0
			$vz_right:=0
			$vz_bottom:=0
			hmRep_GET OBJECT RECT($vl_area; $tl_selected_objects{$i}; $vz_left; $vz_top; $vz_right; $vz_bottom)
			
			Case of 
				: ($vt_objectname="vz_left")
					$vz_left:=hmRep_Rulerunit To Pixel($vl_area; OBJECT_GetReal($vt_objectname))
					
				: ($vt_objectname="vz_top")
					$vz_top:=hmRep_Rulerunit To Pixel($vl_area; OBJECT_GetReal($vt_objectname))
					
				: ($vt_objectname="vz_right")
					$vz_right:=hmRep_Rulerunit To Pixel($vl_area; OBJECT_GetReal($vt_objectname))
					
				: ($vt_objectname="vz_bottom")
					$vz_bottom:=hmRep_Rulerunit To Pixel($vl_area; OBJECT_GetReal($vt_objectname))
					
				: ($vt_objectname="vz_width")
					$vz_width:=hmRep_Rulerunit To Pixel($vl_area; OBJECT_GetReal($vt_objectname))
					$vz_right:=$vz_left+$vz_width
					
				: ($vt_objectname="vz_height")
					$vz_height:=hmRep_Rulerunit To Pixel($vl_area; OBJECT_GetReal($vt_objectname))
					$vz_bottom:=$vz_top+$vz_height
					
			End case 
			
			hmRep_SET OBJECT RECT($vl_area; $tl_selected_objects{$i}; $vz_left; $vz_top; $vz_right; $vz_bottom)
			
		: ($vl_selector=hmRep_oprop_Name)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; 0; OBJECT_GetText($vt_objectname))
			
		: ($vl_selector=hmRep_oprop_ShowFrame)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetLongint($vt_objectname); "")
			
		: ($vl_selector=hmRep_oprop_ShowFill)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetLongint($vt_objectname); "")
			
		: (($vl_selector=(hmRep_clr_ObjectFramecolor+1000)) & ($vt_objectname="framecolor_popup")) | (($vl_selector=(hmRep_clr_ObjectFillcolor+1000)) & ($vt_objectname="fillcolor_popup")) | (($vl_selector=(hmRep_clr_ObjectTextcolor+1000)) & ($vt_objectname="textcolor_popup"))
			
			$vl_color:=OBJECT_GetLongint($vt_objectname)
			$vl_color:=$vl_color-1
			
			$vl_red:=0
			$vl_green:=0
			$vl_blue:=0
			
			$vz_alpha:=0
			hmRep_GET COLOR WITH ALPHA($vl_area; $vl_selector-1000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
			
			hmRep_INDEX2RGB($vl_color; $vl_red; $vl_green; $vl_blue)
			
			hmRep_SET COLOR WITH ALPHA($vl_area; $vl_selector-1000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
			
		: (($vl_selector=(hmRep_clr_ObjectFramecolor+1000)) & ($vt_objectname="framecolor_button")) | (($vl_selector=(hmRep_clr_ObjectFillcolor+1000)) & ($vt_objectname="fillcolor_button")) | (($vl_selector=(hmRep_clr_ObjectTextcolor+1000)) & ($vt_objectname="textcolor_button"))
			
			If ($i=1)
				
				$vl_red:=0
				$vl_green:=0
				$vl_blue:=0
				$vz_alpha:=0
				
				hmRep_GET COLOR WITH ALPHA($vl_area; $vl_selector-1000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				
				$vl_8bitcolor:=intern_Color16BitTo8Bit($vl_red; $vl_green; $vl_blue)
				
				$vl_8bitcolor:=Select RGB color:C956($vl_8bitcolor)
				
				If (OK=1)
					
					intern_COLOR8BITTO16BIT($vl_8bitcolor; ->$vl_red; ->$vl_green; ->$vl_blue)
					
				Else 
					$vf_ok:=False:C215
				End if 
				
			End if 
			
			If ($vf_ok)
				
				hmRep_SET COLOR WITH ALPHA($vl_area; $vl_selector-1000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
				
			End if 
			
		: ($vl_selector=hmRep_oprop_Penwidth)
			
			$vz_value:=OBJECT_GetReal($vt_objectname)
			
			If ($vz_value<=0)
				$vz_value:=0.25
			End if 
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; $vz_value; "")
			
		: ($vl_selector=hmRep_oprop_Rounding)
			
			If ($vl_type=hmRep_ObjType_Rect)
				
				$vz_value:=OBJECT_GetReal($vt_objectname)
				
				If ($vz_value<=0)
					$vz_value:=0
				End if 
				
				hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; $vz_value; "")
				
			End if 
			
		: ($vl_selector=hmRep_oprop_Fontname)
			
			If ($vl_type=hmRep_ObjType_Text)
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_objectname)
				
				If (Not:C34(Is nil pointer:C315($vp_object)))
					
					$vt_fontname:=$vp_object->{0}
					hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; 0; $vt_fontname)
					
				End if 
				
			End if 
			
		: ($vl_selector=hmRep_oprop_Fontsize)
			
			If ($vl_type=hmRep_ObjType_Text)
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_objectname)
				
				If (Not:C34(Is nil pointer:C315($vp_object)))
					
					$vz_fontsize:=$vp_object->{0}
					hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; $vz_fontsize; "")
					
				End if 
				
			End if 
			
		: ($vl_selector=hmRep_oprop_Alignment)
			
			If ($vl_type=hmRep_ObjType_Text)
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_objectname)
				
				If (Not:C34(Is nil pointer:C315($vp_object)))
					
					$vl_alignment:=$vp_object->
					hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; $vl_alignment; "")
					
				End if 
				
			End if 
			
		: ($vl_selector=hmRep_oprop_Fontstyle)
			
			If ($vl_type=hmRep_ObjType_Text)
				
				$vl_fontstyle:=intern_GetObjectPropertyLong($vl_area; $tl_selected_objects{$i}; hmRep_oprop_Fontstyle)
				
				$vl_font_bold:=Num:C11(($vl_fontstyle & Bold:K14:2)>0)
				$vl_font_italic:=Num:C11(($vl_fontstyle & Italic:K14:3)>0)
				$vl_font_underline:=Num:C11(($vl_fontstyle & Underline:K14:4)>0)
				$vl_font_strikethrough:=Num:C11(($vl_fontstyle & 8)>0)
				
				Case of 
					: ($vt_objectname="vl_obj_fett")
						$vl_font_bold:=OBJECT_GetLongint($vt_objectname)
						
					: ($vt_objectname="vl_obj_kursiv")
						$vl_font_italic:=OBJECT_GetLongint($vt_objectname)
						
					: ($vt_objectname="vl_obj_unterstrichen")
						$vl_font_underline:=OBJECT_GetLongint($vt_objectname)
						
					: ($vt_objectname="vl_obj_durchgestrichen")
						$vl_font_strikethrough:=OBJECT_GetLongint($vt_objectname)
						
				End case 
				
				$vl_fontstyle:=$vl_font_bold+($vl_font_italic*2)+($vl_font_underline*4)+($vl_font_strikethrough*8)
				
				hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; $vl_fontstyle; "")
				
			End if 
			
		: ($vl_selector=(hmRep_clr_ObjectFramecolor+2000)) | ($vl_selector=(hmRep_clr_ObjectTextcolor+2000)) | ($vl_selector=(hmRep_clr_ObjectFillcolor+2000))
			
			$vl_red:=0
			$vl_green:=0
			$vl_blue:=0
			$vz_alpha:=0
			
			hmRep_GET COLOR WITH ALPHA($vl_area; $vl_selector-2000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
			
			$vz_alpha:=OBJECT_GetReal($vt_objectname)
			
			hmRep_SET COLOR WITH ALPHA($vl_area; $vl_selector-2000; $tl_selected_objects{$i}; $vl_red; $vl_green; $vl_blue; $vz_alpha)
			
		: ($vl_selector=hmRep_oprop_Wordwrap)
			
			If ($vl_type=hmRep_ObjType_Text)
				hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetLongint($vt_objectname); "")
			End if 
			
		: ($vl_selector=hmRep_oprop_Antialiasing)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetLongint($vt_objectname); "")
			
		: ($vl_selector=hmRep_oprop_Print)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetLongint($vt_objectname); "")
			
		: ($vl_selector=hmRep_oprop_Moveable)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetLongint($vt_objectname); "")
			
		: ($vl_selector=hmRep_oprop_Resizeable)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetLongint($vt_objectname); "")
			
		: ($vl_selector=hmRep_oprop_FixedPrinting)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetLongint($vt_objectname); "")
			
		: ($vl_selector=hmRep_oprop_VariableHeight)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetLongint($vt_objectname); "")
			
		: ($vl_selector=hmRep_oprop_VerticalSizing)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetCurrentArrayIndex($vt_objectname)-1; "")
			
		: ($vl_selector=hmRep_oprop_Barcode)
			
			If ($vl_type=hmRep_ObjType_Text)
				
				$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_barcode")
				$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_barcode")
				
				If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object2)))
					
					$vl_pos:=$vp_object->
					
					If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object2->))
						
						$vl_barcode:=$vp_object2->{$vl_pos}
						
						hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; $vl_barcode; "")
						
					End if 
					
				End if 
				
			End if 
			
		: ($vl_selector=hmRep_oprop_SubreportUUID)
			
			$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_name")
			$vp_object2:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_uuid")
			
			If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object2)))
				
				$vl_pos:=$vp_object->
				
				If ($vl_pos>0) & ($vl_pos<=Size of array:C274($vp_object2->))
					
					$vt_uuid:=$vp_object2->{$vl_pos}
					
					hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; 0; $vt_uuid)
					
				End if 
				
			End if 
			
		: ($vl_selector=hmRep_oprop_SubreportPageID)
			
			$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_subreport_page")
			$vp_object3:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_subreport_pages")
			
			If (Not:C34(Is nil pointer:C315($vp_object))) & (Not:C34(Is nil pointer:C315($vp_object3)))
				
				$vl_pos:=$vp_object->
				$vl_page:=$vp_object3->{$vl_pos}
				
				hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; hmRep_oprop_SubreportPageID; $vl_page; "")
				
			End if 
			
		: ($vl_selector=hmRep_oprop_Pictureformat)
			
			//If ($vl_type=hmRep_ObjType_Subreport)
			//
			//$vp_object:=OBJECT Get pointer(Object named;"tt_subreport_darstellung")
			//
			//If (Not(Nil($vp_object)))
			//
			//Case of 
			//: ($vp_object->=1)
			//hmRep_SET OBJECT PROPERTY ($vl_area;$tl_selected_objects{$i};hmRep_oprop_Pictureformat;3;"")
			//
			//: ($vp_object->=2)
			//hmRep_SET OBJECT PROPERTY ($vl_area;$tl_selected_objects{$i};hmRep_oprop_Pictureformat;2;"")
			//
			//Else 
			//hmRep_SET OBJECT PROPERTY ($vl_area;$tl_selected_objects{$i};hmRep_oprop_Pictureformat;3;"")
			//
			//End case 
			//
			//End if 
			//
			//End if 
			
		: ($vl_selector=hmRep_oprop_Rotation)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; OBJECT_GetReal($vt_objectname); "")
			
		: ($vl_selector=hmRep_oprop_Linespacing)
			
			If ($vl_type=hmRep_ObjType_Text)
				
				$vz_value:=OBJECT_GetReal($vt_objectname)
				
				If ($vz_value<=0)
					$vz_value:=0
				End if 
				
				hmRep_SET OBJECT PROPERTY($vl_area; $tl_selected_objects{$i}; $vl_selector; $vz_value; "")
				
			End if 
			
	End case 
	
	If (Not:C34($vf_ok))
		$i:=Size of array:C274($tl_selected_objects)+1
	End if 
	
End for 

pal_update_object($vl_area)
