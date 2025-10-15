//%attributes = {}
var $vt_xml_parent; $vt_name; $vt_text; $vt_attr_name; $vt_attr_wert; $vt_align; $vt_source; $vt_tablename; $vt_fieldname; $vt_encoding; $vt_name_sub; $vt_value : Text
var $i; $j; $vl_area; $vl_count; $vl_object_id; $vl_pos1; $vl_pos2; $vl_format; $vl_style : Integer
var $vz_fontsize; $vz_linespacing; $vz_top_offset : Real
var $vb_pict : Picture
var $vx_script : Blob

$vt_xml_parent:=$1
$vl_area:=$2
$vz_top_offset:=$3

ARRAY LONGINT:C221($tl_element_types; 0)
ARRAY TEXT:C222($tt_element_ids; 0)

DOM GET XML CHILD NODES:C1081($vt_xml_parent; $tl_element_types; $tt_element_ids)

For ($i; 1; Size of array:C274($tt_element_ids))
	
	If ($tl_element_types{$i}=XML ELEMENT:K45:20)
		
		$vt_name:=""
		DOM GET XML ELEMENT NAME:C730($tt_element_ids{$i}; $vt_name)
		
		
		//=================================================================
		//Bounds ermitteln
		
		ARRAY REAL:C219($tz_bounds; 0)
		PP_GetBounds($tt_element_ids{$i}; "r"; ->$tz_bounds)
		
		$tz_bounds{2}:=$tz_bounds{2}+$vz_top_offset
		$tz_bounds{4}:=$tz_bounds{4}+$vz_top_offset
		
		//=================================================================
		//Attribute ermitteln
		
		$vl_count:=DOM Count XML attributes:C727($tt_element_ids{$i})
		
		ARRAY TEXT:C222($tt_attribute_names; 0)
		ARRAY TEXT:C222($tt_attribute_values; 0)
		
		ARR_Resize(->$tt_attribute_names; $vl_count)
		ARR_Resize(->$tt_attribute_values; $vl_count)
		
		For ($j; 1; $vl_count)
			
			$vt_attr_name:=""
			$vt_attr_wert:=""
			
			DOM GET XML ATTRIBUTE BY INDEX:C729($tt_element_ids{$i}; $j; $vt_attr_name; $vt_attr_wert)
			
			$tt_attribute_names{$j}:=$vt_attr_name
			$tt_attribute_values{$j}:=$vt_attr_wert
			
		End for 
		
		//=================================================================
		
		Case of 
				
				//=================================================================
				
			: ($vt_name="Text") | ($vt_name="Var") | ($vt_name="Field")
				
				$vt_text:=""
				DOM GET XML ELEMENT VALUE:C731($tt_element_ids{$i}; $vt_text)
				
				$vt_text:=Replace string:C233($vt_text; "<%="; "<%$0:=")
				
				$vl_object_id:=hmRep_Create Text($vl_area; $tz_bounds{1}; $tz_bounds{2}; $tz_bounds{3}; $tz_bounds{4}; $vt_text)
				
				$vz_fontsize:=DOM_GetAttributeReal($tt_element_ids{$i}; "size")
				
				hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Fontsize; $vz_fontsize; "")
				hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Fontname; 0; DOM_GetAttributeText($tt_element_ids{$i}; "font"))
				
				If (Find in array:C230($tt_attribute_names; "qdStyle")>0)
					$vl_style:=DOM_GetAttributeReal($tt_element_ids{$i}; "qdStyle")
				Else 
					$vl_style:=DOM_GetAttributeReal($tt_element_ids{$i}; "style")
				End if 
				
				hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Fontstyle; $vl_style; "")
				
				hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Wordwrap; DOM_GetAttributeReal($tt_element_ids{$i}; "wrap"); "")
				hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Dynamic; DOM_GetAttributeReal($tt_element_ids{$i}; "dynamic"); "")
				hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Name; 0; DOM_GetAttributeText($tt_element_ids{$i}; "id"))
				
				PP_SetColor($vl_area; $tt_element_ids{$i}; "textColor"; hmRep_clr_ObjectTextcolor; $vl_object_id)
				PP_SetColor($vl_area; $tt_element_ids{$i}; "frameColor"; hmRep_clr_ObjectFramecolor; $vl_object_id)
				PP_SetColor($vl_area; $tt_element_ids{$i}; "backColor"; hmRep_clr_ObjectFillcolor; $vl_object_id)
				
				$vt_align:=DOM_GetAttributeText($tt_element_ids{$i}; "halign")
				
				Case of 
					: ($vt_align="default")
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_AlignmentH; 1; "")
						
					: ($vt_align="left")
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_AlignmentH; 2; "")
						
					: ($vt_align="center")
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_AlignmentH; 3; "")
						
					: ($vt_align="right")
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_AlignmentH; 4; "")
						
					: ($vt_align="fulljustify")
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_AlignmentH; 5; "")
						
				End case 
				
				$vt_align:=DOM_GetAttributeText($tt_element_ids{$i}; "valign")
				
				Case of 
					: ($vt_align="default") | ($vt_align="top")
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_AlignmentV; 1; "")
						
					: ($vt_align="center")
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_AlignmentV; 2; "")
						
					: ($vt_align="bottom")
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_AlignmentV; 3; "")
						
				End case 
				
				If (DOM_GetAttributeReal($tt_element_ids{$i}; "attributed")=1)
					
					hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Multistyle; 1; "")
					hmRep_SET STYLED TEXT($vl_area; $vl_object_id; $vt_text)
					
				End if 
				
				$vz_linespacing:=DOM_GetAttributeReal($tt_element_ids{$i}; "lineSpacing")
				$vz_linespacing:=Round:C94($vz_linespacing; 1)
				
				If ($vz_linespacing#1) & ($vz_linespacing#0)
					
					$vz_linespacing:=($vz_linespacing*$vz_fontsize)-$vz_fontsize
					
					hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Linespacing; 1; "")
					
				End if 
				
				Case of 
					: ($vt_name="Var")
						
						$vt_source:=DOM_GetAttributeText($tt_element_ids{$i}; "source")
						
						If (Length:C16($vt_source)>0)
							
							hmRep_SET OBJECT DATA($vl_area; $vl_object_id; hmRep_ObjData_Variable; ""; ""; ""; $vt_source; 0)
							
						End if 
						
					: ($vt_name="Field")
						
						$vt_source:=DOM_GetAttributeText($tt_element_ids{$i}; "source")
						
						If (Length:C16($vt_source)>0)
							
							$vl_pos1:=Position:C15("["; $vt_source)
							$vl_pos2:=Position:C15("]"; $vt_source)
							
							$vt_tablename:=Substring:C12($vt_source; $vl_pos1+1; $vl_pos2-$vl_pos1-1)
							$vt_fieldname:=Substring:C12($vt_source; $vl_pos2+1)
							
							hmRep_SET OBJECT DATA($vl_area; $vl_object_id; hmRep_ObjData_4DInternal; ""; $vt_tablename; $vt_fieldname; ""; 0)
							
						End if 
						
				End case 
				
				//=================================================================
				
			: ($vt_name="Pict")
				
				$vl_object_id:=hmRep_Create Picture($vl_area; $tz_bounds{1}; $tz_bounds{2}; $tz_bounds{3}; $tz_bounds{4})
				
				PP_SetColor($vl_area; $tt_element_ids{$i}; "frameColor"; hmRep_clr_ObjectFramecolor; $vl_object_id)
				PP_SetColor($vl_area; $tt_element_ids{$i}; "backColor"; hmRep_clr_ObjectFillcolor; $vl_object_id)
				
				$vl_format:=DOM_GetAttributeReal($tt_element_ids{$i}; "format")
				
				Case of 
					: ($vl_format=0)  //Normal
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Pictureformat; Scaled to fit prop centered:K6:6; "")
						
					: ($vl_format=1)  //Centred
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Pictureformat; Truncated centered:K6:1; "")
						
					: ($vl_format=2)  //ScaledToFit
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Pictureformat; Scaled to fit:K6:2; "")
						
					: ($vl_format=3)  //ScaledProp
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Pictureformat; Scaled to fit proportional:K6:5; "")
						
					: ($vl_format=4)  //ScaledPropCentered
						hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Pictureformat; Scaled to fit prop centered:K6:6; "")
						
				End case 
				
				PP_SetColor($vl_area; $tt_element_ids{$i}; "frameColor"; hmRep_clr_ObjectFramecolor; $vl_object_id)
				PP_SetColor($vl_area; $tt_element_ids{$i}; "fillColor"; hmRep_clr_ObjectFillcolor; $vl_object_id)
				
				If (Find in array:C230($tt_attribute_names; "thickness")>0)
					
					hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Penwidth; DOM_GetAttributeReal($tt_element_ids{$i}; "thickness"); "")
					
				End if 
				
				hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_ShowFrame; Num:C11(DOM_GetAttributeReal($tt_element_ids{$i}; "frame")); "")
				
				//=================================================================
				
			: ($vt_name="Line")
				
				$vl_object_id:=hmRep_Create Line($vl_area; $tz_bounds{1}; $tz_bounds{4}; $tz_bounds{3}; $tz_bounds{2})
				
				PP_SetColor($vl_area; $tt_element_ids{$i}; "lineColor"; hmRep_clr_ObjectFramecolor; $vl_object_id)
				
				If (Find in array:C230($tt_attribute_names; "thickness")>0)
					
					hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Penwidth; DOM_GetAttributeReal($tt_element_ids{$i}; "thickness"); "")
					
				End if 
				
				//=================================================================
				
			: ($vt_name="Rect")
				
				$vl_object_id:=hmRep_Create Rectangle($vl_area; $tz_bounds{1}; $tz_bounds{2}; $tz_bounds{3}; $tz_bounds{4})
				
				PP_SetColor($vl_area; $tt_element_ids{$i}; "lineColor"; hmRep_clr_ObjectFramecolor; $vl_object_id)
				PP_SetColor($vl_area; $tt_element_ids{$i}; "fillColor"; hmRep_clr_ObjectFillcolor; $vl_object_id)
				
				If (Find in array:C230($tt_attribute_names; "thickness")>0)
					
					hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Penwidth; DOM_GetAttributeReal($tt_element_ids{$i}; "thickness"); "")
					
				End if 
				
				hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_ShowFill; DOM_GetAttributeReal($tt_element_ids{$i}; "fillPatern"); "")
				
				//=================================================================
				
			: ($vt_name="Oval")
				
				$vl_object_id:=hmRep_Create Oval($vl_area; $tz_bounds{1}; $tz_bounds{4}; $tz_bounds{3}; $tz_bounds{2})
				
				PP_SetColor($vl_area; $tt_element_ids{$i}; "lineColor"; hmRep_clr_ObjectFramecolor; $vl_object_id)
				
				If (Find in array:C230($tt_attribute_names; "thickness")>0)
					
					hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Penwidth; DOM_GetAttributeReal($tt_element_ids{$i}; "thickness"); "")
					
				End if 
				
				hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_ShowFill; DOM_GetAttributeReal($tt_element_ids{$i}; "fillPatern"); "")
				
				//=================================================================
				
		End case 
		
		//=================================================================
		
		If (DOM_GetAttributeReal($tt_element_ids{$i}; "locked")=1)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Selectable; 0; "")
			hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Moveable; 0; "")
			
		End if 
		
		If (Find in array:C230($tt_attribute_names; "visible")>0)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Visible; DOM_GetAttributeReal($tt_element_ids{$i}; "visible"); "")
			
		End if 
		
		If (Find in array:C230($tt_attribute_names; "selected")>0)
			
			hmRep_SET OBJECT PROPERTY($vl_area; $vl_object_id; hmRep_oprop_Selected; DOM_GetAttributeReal($tt_element_ids{$i}; "selected"); "")
			
		End if 
		
		//=================================================================
		//Unterelemente
		
		ARRAY LONGINT:C221($tl_element_types_sub; 0)
		ARRAY TEXT:C222($tt_element_ids_sub; 0)
		
		DOM GET XML CHILD NODES:C1081($tt_element_ids{$i}; $tl_element_types_sub; $tt_element_ids_sub)
		
		For ($j; 1; Size of array:C274($tt_element_ids_sub))
			
			If ($tl_element_types_sub{$j}=XML ELEMENT:K45:20)
				
				$vt_name_sub:=""
				DOM GET XML ELEMENT NAME:C730($tt_element_ids_sub{$j}; $vt_name_sub)
				$vt_value:=""
				DOM GET XML ELEMENT VALUE:C731($tt_element_ids_sub{$j}; $vt_value)
				
				Case of 
					: ($vt_name_sub="Script")
						
						//Alte Skripte
						
						//hmRep_SET SCRIPT ($vl_area;0;$vl_object_id;$vt_value)
						
						//Neue Skripte
						
						SET BLOB SIZE:C606($vx_script; 0)
						
						hmRep_TOKENIZE($vl_area; $vt_value; $vx_script)
						hmRep_SET TOKENIZED SCRIPT($vl_area; 0; $vl_object_id; $vx_script)
						
					: ($vt_name_sub="ImageData")
						
						$vt_encoding:=DOM_GetAttributeText($tt_element_ids_sub{$j}; "encoding")
						
						If ($vt_encoding="base64")
							
							SET BLOB SIZE:C606($vx_blob; 0)
							BASE64 DECODE:C896($vt_value; $vx_blob)
							
							BLOB TO VARIABLE:C533($vx_blob; $vb_pict)
							
							If (Picture size:C356($vb_pict)>0)
								
								hmRep_SET PICTURE($vl_area; $vl_object_id; $vb_pict)
								
							End if 
							
						End if 
						
				End case 
				
			End if 
			
		End for 
		
		//=================================================================
		
	End if 
	
End for 
