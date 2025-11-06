property area : Integer
property blob : Blob
property stack; globalMatrix; fonts; elementProps : Collection
property dynamicWidth; dynamicHeight : Boolean
property dom; currentelement : Text
property dynamicWidthPercent; dynamicHeightPercent : Real

Class constructor($vl_area : Integer; $vx_blob : Blob)
	
	This:C1470.area:=$vl_area
	This:C1470.blob:=$vx_blob
	This:C1470.stack:=[]
	This:C1470.globalMatrix:=[1; 0; 0; 1; 0; 0]
	This:C1470.dynamicWidth:=False:C215
	This:C1470.dynamicHeight:=False:C215
	This:C1470.dynamicWidthPercent:=100  //Prozent
	This:C1470.dynamicHeightPercent:=100
	This:C1470.dom:=""
	This:C1470.fonts:=[]
	This:C1470.currentelement:=""
	This:C1470.elementProps:=[]
	
Function import()
	var $vl_current_page : Integer
	
	This:C1470.dom:=DOM Parse XML variable:C720(This:C1470.blob)
	
	If (OK=1)
		
		hmRep_CLEAR REPORT(This:C1470.area)
		hmRep_SET REPORT PROPERTY(This:C1470.area; hmRep_rprop_name; 0; "svg")
		hmRep_SET REPORT PROPERTY(This:C1470.area; hmRep_rprop_ShowObjectBounds; 0; "")
		
		$vl_current_page:=hmRep_Get Current Page(This:C1470.area)
		
		hmRep_SET PAGE PROPERTY(This:C1470.area; $vl_current_page; hmRep_pprop_Show_SectionCapt; 0; "")
		hmRep_SET PAGE PROPERTY(This:C1470.area; $vl_current_page; hmRep_pprop_Show_SectionLines; 0; "")
		hmRep_SET PAGE PROPERTY(This:C1470.area; $vl_current_page; hmRep_pprop_Show_Sections; 0; "")
		hmRep_SET PAGE PROPERTY(This:C1470.area; $vl_current_page; hmRep_pprop_PrintAsReport; 0; "")
		
		ARRAY TEXT:C222($tt_fonts; 0)
		FONT LIST:C460($tt_fonts)
		ARRAY TO COLLECTION:C1563(This:C1470.fonts; $tt_fonts)
		
		This:C1470.elementsTree(This:C1470.dom)
		This:C1470.doEnd()
		
		DOM CLOSE XML:C722(This:C1470.dom)
		
	End if 
	
Function doEnd()
	var $i; $vl_current_page : Integer
	var $vz_left; $vz_top; $vz_right; $vz_bottom; $vz_width; $vz_height : Real
	
	If (This:C1470.dynamicWidth) | (This:C1470.dynamicHeight)
		
		//maximale Abmessungen ermitteln
		
		ARRAY LONGINT:C221($tl_objects; 0)
		hmRep_GET OBJECT LIST(This:C1470.area; hmRep_scope_Layer; 0; $tl_objects)
		
		$vz_width:=0
		$vz_height:=0
		
		For ($i; 1; Size of array:C274($tl_objects))
			
			$vz_left:=0
			$vz_top:=0
			$vz_right:=0
			$vz_bottom:=0
			hmRep_GET OBJECT RECT(This:C1470.area; $tl_objects{$i}; $vz_left; $vz_top; $vz_right; $vz_bottom)
			
			If ($vz_right>$vz_width)
				$vz_width:=$vz_right
			End if 
			
			If ($vz_bottom>$vz_height)
				$vz_height:=$vz_bottom
			End if 
			
		End for 
		
		$vl_current_page:=hmRep_Get Current Page(This:C1470.area)
		
		hmRep_SET PAGE PROPERTY(This:C1470.area; $vl_current_page; hmRep_pprop_pagewidth; $vz_width*(This:C1470.dynamicWidthPercent/100); "")
		hmRep_SET PAGE PROPERTY(This:C1470.area; $vl_current_page; hmRep_pprop_pageheight; $vz_height*(This:C1470.dynamicHeightPercent/100); "")
		
	End if 
	
Function elementsTree($vt_dom_element : Text)
	var $vl_size : Integer
	var $vt_dom_child; $vt_elementname : Text
	var $vf_out : Boolean
	
	$vt_elementname:=""
	DOM GET XML ELEMENT NAME:C730($vt_dom_element; $vt_elementname)
	
	Case of 
		: ($vt_elementname="defs")  //defs-Elemente nicht abarbeiten
			
		: ($vt_elementname="clipPath")
			
		Else 
			
			This:C1470.stack.push({dom: $vt_dom_element; name: $vt_elementname})
			
			This:C1470.currentelement:=$vt_dom_element
			
			This:C1470.loadProperties($vt_dom_element)
			
			If (Not:C34(This:C1470.findProp("display"; "none")))
				
				This:C1470.importElement($vt_dom_element)
				
			End if 
			
			$vt_dom_child:=DOM Get first child XML element:C723($vt_dom_element)
			
			If (OK=1)
				
				This:C1470.elementsTree($vt_dom_child)
				
				Repeat 
					
					$vt_dom_child:=DOM Get next sibling XML element:C724($vt_dom_child)
					
					If (OK=1)
						This:C1470.elementsTree($vt_dom_child)
					Else 
						$vf_out:=True:C214
					End if 
					
				Until ($vf_out)
				
			End if 
			
			$vl_size:=This:C1470.stack.length
			If ($vl_size>0)
				This:C1470.stack.pop()
			End if 
			
	End case 
	
Function loadProperties($vt_dom : Text)
	var $vt_AttribName; $vt_AttribWert : Text
	var $i; $vl_count : Integer
	
	$vl_count:=DOM Count XML attributes:C727($vt_dom)
	
	This:C1470.elementProps:=[]
	
	For ($i; 1; $vl_count)
		$vt_AttribName:=""
		$vt_AttribWert:=""
		DOM GET XML ATTRIBUTE BY INDEX:C729($vt_dom; $i; $vt_AttribName; $vt_AttribWert)
		This:C1470.elementProps.push({name: $vt_AttribName; value: $vt_AttribWert})
	End for 
	
Function importElement($vt_dom_element : Text)
	var $vt_elementname; $vt_value : Text
	
	$vt_elementname:=""
	DOM GET XML ELEMENT NAME:C730($vt_dom_element; $vt_elementname)
	
	Case of 
		: ($vt_elementname="svg")
			This:C1470.importElementSVG($vt_dom_element)
			
		: ($vt_elementname="title")
			
			$vt_value:=""
			DOM GET XML ELEMENT VALUE:C731($vt_dom_element; $vt_value)
			
			hmRep_SET REPORT PROPERTY(This:C1470.area; hmRep_rprop_name; 0; $vt_value)
			
		: ($vt_elementname="path")
			This:C1470.importElementPath()
			
		: ($vt_elementname="polygon")
			This:C1470.importElementPolygon(True:C214)
			
		: ($vt_elementname="polyline")
			This:C1470.importElementPolygon(False:C215)
			
		: ($vt_elementname="rect")
			This:C1470.importElementRect()
			
		: ($vt_elementname="line")
			This:C1470.importElementLine()
			
		: ($vt_elementname="g")
			
		: ($vt_elementname="ellipse")
			This:C1470.importElementEllipse()
			
		: ($vt_elementname="circle")
			This:C1470.importElementCircle()
			
		: ($vt_elementname="text")
			This:C1470.importElementText(False:C215)
			
		: ($vt_elementname="textArea")
			This:C1470.importElementText(True:C214)
			
		: ($vt_elementname="linearGradient")
			
		: ($vt_elementname="use")
			This:C1470.importElementUse($vt_dom_element)
			
		: ($vt_elementname="image")
			This:C1470.importElementImage()
			
		: ($vt_elementname="tspan")
			This:C1470.importElementTspan()
			
		: ($vt_elementname="symbol")
			
		Else 
			//TRACE
			
	End case 
	
Function getAttributeText($vt_area : Text; $vt_attribute : Text)->$vt_result : Text
	
	$vt_result:=""
	Try
		DOM GET XML ATTRIBUTE BY NAME:C728($vt_area; $vt_attribute; $vt_result)
	End try
	
Function getAttributeReal($vt_area : Text; $vt_attribute : Text)->$vz_result : Real
	
	$vz_result:=0
	Try
		DOM GET XML ATTRIBUTE BY NAME:C728($vt_area; $vt_attribute; $vz_result)
	End try
	
Function importElementSVG($vt_dom : Text)
	var $vz_width; $vz_height : Real
	var $vl_current_page : Integer
	var $vt_title; $vt_width; $vt_height; $vt_viewbox : Text
	var $vc_elements : Collection
	
	$vt_width:=This:C1470.getProp("width")
	$vt_height:=This:C1470.getProp("height")
	
	If ($vt_width="")
		$vt_width:="100%"
	End if 
	
	If ($vt_height="")
		$vt_height:="100%"
	End if 
	
	$vz_width:=Num:C11($vt_width; ".")
	$vz_height:=Num:C11($vt_height; ".")
	
	If ($vt_width="@mm")
		$vz_width:=($vz_width/25.6)*96
	End if 
	
	If ($vt_height="@mm")
		$vz_height:=($vz_height/25.6)*96
	End if 
	
	If ($vt_width="@in")
		$vz_width:=$vz_width*96
	End if 
	
	If ($vt_height="@in")
		$vz_height:=$vz_height*96
	End if 
	
	If ($vt_width="@pt")
		$vz_width:=$vz_width*96/72
	End if 
	
	If ($vt_height="@pt")
		$vz_height:=$vz_height*96/72
	End if 
	
	If ($vt_width="@%")
		This:C1470.dynamicWidth:=True:C214
		This:C1470.dynamicWidthPercent:=$vz_width
		$vz_width:=1000  //erstmal
	End if 
	
	If ($vt_height="@%")
		This:C1470.dynamicHeight:=True:C214
		This:C1470.dynamicHeightPercent:=$vz_height
		$vz_height:=1000  //erstmal
	End if 
	
	$vt_title:=This:C1470.getProp("title")
	
	$vt_viewbox:=This:C1470.getAttributeText($vt_dom; "viewBox")
	
	If (Length:C16($vt_viewbox)>0)
		
		$vt_viewbox:=Replace string:C233($vt_viewbox; ","; " ")
		
		$vc_elements:=Split string:C1554($vt_viewbox; " ")
		
		If ($vc_elements.length=4)
			
			If (This:C1470.dynamicWidth) | (This:C1470.dynamicHeight)
				
				This:C1470.dynamicWidth:=False:C215
				This:C1470.dynamicHeight:=False:C215
				This:C1470.dynamicWidthPercent:=0
				This:C1470.dynamicHeightPercent:=0
				
				$vz_width:=Num:C11($vc_elements[2]; ".")
				$vz_height:=Num:C11($vc_elements[3]; ".")
				
			Else 
				
				This:C1470.globalMatrix[0]:=$vz_width/Num:C11($vc_elements[2]; ".")
				This:C1470.globalMatrix[3]:=$vz_height/Num:C11($vc_elements[3]; ".")
				
				This:C1470.globalMatrix[4]:=-Num:C11($vc_elements[0]; ".")
				This:C1470.globalMatrix[5]:=-Num:C11($vc_elements[0]; ".")
				
				This:C1470.globalMatrix[4]:=This:C1470.globalMatrix[4]*This:C1470.globalMatrix[0]
				This:C1470.globalMatrix[5]:=This:C1470.globalMatrix[5]*This:C1470.globalMatrix[3]
				
			End if 
			
		End if 
		
	End if 
	
	$vl_current_page:=hmRep_Get Current Page(This:C1470.area)
	
	hmRep_SET PAGE PROPERTY(This:C1470.area; $vl_current_page; hmRep_pprop_pagewidth; $vz_width; "")
	hmRep_SET PAGE PROPERTY(This:C1470.area; $vl_current_page; hmRep_pprop_pageheight; $vz_height; "")
	
	If (Length:C16($vt_title)>0)
		hmRep_SET REPORT PROPERTY(This:C1470.area; hmRep_rprop_name; 0; $vt_title)
	End if 
	
Function getRealAsText($vz_real : Real) : Text
	return Replace string:C233(String:C10(Round:C94($vz_real; 4)); ","; ".")
	
Function getPropReal($vt_propname : Text) : Real
	return (Num:C11(This:C1470.getProp($vt_propname); "."))
	
Function getProp($vt_propname : Text)->$vt_result : Text
	var $i; $vl_size : Integer
	var $vz_result : Real
	var $vc_props : Collection
	
	If ($vt_propname="x") | ($vt_propname="y")  //Addieren
		
		$vz_result:=0
		$vl_size:=This:C1470.stack.length
		
		For ($i; $vl_size; 1; -1)
			
			If ($vl_size>1) & ($vl_size=$i) & (This:C1470.stack[$i-1].name="tSpan")
				
				If (This:C1470.stack[$i-2].name="text")
					
					$vz_result:=$vz_result+This:C1470.getAttributeReal(This:C1470.stack[$i-1].dom; $vt_propname)
					$i:=$i-1
					
				Else 
					$vz_result:=$vz_result+This:C1470.getAttributeReal(This:C1470.stack[$i-1].dom; $vt_propname)
					
				End if 
				
			Else 
				$vz_result:=$vz_result+This:C1470.getAttributeReal(This:C1470.stack[$i-1].dom; $vt_propname)
			End if 
			
		End for 
		
		$vt_result:=This:C1470.getRealAsText($vz_result)
		
	Else 
		
		$vc_props:=This:C1470.elementProps.query("name == :1"; $vt_propname)
		
		If ($vc_props.length>0)
			$vt_result:=$vc_props.first().value
		Else 
			$vt_result:=""
			
			//übergeordnete Einträge anschauen
			
			$vl_size:=This:C1470.stack.length
			
			If ($vl_size>1)
				
				For ($i; This:C1470.stack.length-1; 1; -1)
					
					$vt_result:=This:C1470.getAttributeText(This:C1470.stack[$i-1].dom; $vt_propname)
					
					If (Length:C16($vt_result)>0)
						$i:=0
					End if 
					
				End for 
				
			End if 
			
		End if 
		
	End if 
	
Function importElementTspan()
	This:C1470.importElementText(False:C215)
	
	//$vz_x:=This.getPropReal("x")
	//$vz_y:=This.getPropReal("y")
	//
	//$vt_text:=""
	//
	//DOM GET XML ELEMENT VALUE(vt_svg_currentelement;$vt_text)
	//
	
Function importElementPath()
	var $vl_id : Integer
	var $vt_d : Text
	
	$vt_d:=Trim:C1853(This:C1470.getProp("d"))
	
	If (Length:C16($vt_d)>0)
		
		$vl_id:=hmRep_Create Path(This:C1470.area; $vt_d)
		
		If ($vl_id>0)
			This:C1470.importProperties($vl_id)
		Else 
			TRACE:C157
		End if 
		
	End if 
	
Function importElementText($vf_textarea : Boolean)
	var $vl_id; $vl_style : Integer
	var $vz_x; $vz_y; $vz_width; $vz_height; $vz_fontsize; $vz_ascent; $vz_descent : Real
	var $vt_text; $vt_fontname; $vt_style; $vt_childname; $vt_childdom : Text
	
	$vt_childname:=""
	$vt_childdom:=DOM Get first child XML element:C723(This:C1470.currentelement; $vt_childname)
	
	If (Length:C16($vt_childname)>0) & (OK=1)
		
		//svg_import_element_tspan ($vl_area;$vt_childdom)
		
	Else 
		
		$vz_x:=This:C1470.getPropReal("x")
		$vz_y:=This:C1470.getPropReal("y")
		
		$vt_text:=""
		
		DOM GET XML ELEMENT VALUE:C731(This:C1470.currentelement; $vt_text)
		
		$vt_text:=Replace string:C233($vt_text; Char:C90(Carriage return:K15:38)+Char:C90(Line feed:K15:40); Char:C90(Carriage return:K15:38))
		$vt_text:=Replace string:C233($vt_text; Char:C90(Line feed:K15:40); Char:C90(Carriage return:K15:38))
		
		$vt_style:=This:C1470.getProp("style")
		$vt_fontname:=This:C1470.getProp("font-family")
		$vz_fontsize:=This:C1470.getPropReal("font-size")
		
		$vt_fontname:=This:C1470.verifyFont($vt_fontname)
		
		$vl_style:=This:C1470.getTextStyle($vt_style)
		
		If ($vf_textarea)
			
			$vz_width:=This:C1470.getPropReal("width")
			$vz_height:=This:C1470.getPropReal("height")
			
			$vl_id:=hmRep_Create Text(This:C1470.area; $vz_x; $vz_y; $vz_x+$vz_width; $vz_y+$vz_height; $vt_text)
			
		Else 
			
			$vz_width:=0
			$vz_height:=0
			$vz_ascent:=0
			$vz_descent:=0
			hmRep_GET TEXT MEASURES($vt_text; $vt_fontname; $vz_fontsize; $vl_style; $vz_width; $vz_height; $vz_ascent; $vz_descent)
			
			$vl_id:=hmRep_Create Text(This:C1470.area; $vz_x; $vz_y-$vz_ascent; $vz_x+$vz_width+4; $vz_y+$vz_descent; $vt_text)
			
		End if 
		
		If ($vl_id>0)
			
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Fontname; 0; $vt_fontname)
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Fontsize; $vz_fontsize; "")
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Fontstyle; $vl_style; "")
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Wordwrap; Num:C11($vf_textarea); "")
			
			This:C1470.importProperties($vl_id)
			
		Else 
			TRACE:C157
		End if 
		
	End if 
	
Function verifyFont($vt_font : Text) : Text
	var $vt_standardfont : Text
	
	$vt_standardfont:="Arial"
	
	If (Length:C16($vt_font)=0)
		$vt_font:=$vt_standardfont
	End if 
	
	If (This:C1470.fonts.indexOf($vt_font)<0)
		$vt_font:=$vt_standardfont
	End if 
	
	return ($vt_font)
	
Function getTextStyle($vt_style : Text)->$vl_style : Integer
	
	$vl_style:=0
	
	If ($vt_style="@bold@")
		$vl_style:=$vl_style+Bold:K14:2
	End if 
	
	If ($vt_style="@italic@")
		$vl_style:=$vl_style+Italic:K14:3
	End if 
	
	If ($vt_style="@underline@")
		$vl_style:=$vl_style+Underline:K14:4
	End if 
	
Function getObjectType($vl_objectID : Integer)->$vl_type : Integer
	var $vz_prop_real : Real
	var $vt_prop_text : Text
	
	$vz_prop_real:=0
	$vt_prop_text:=""
	hmRep_GET OBJECT PROPERTY(This:C1470.area; $vl_objectID; hmRep_oprop_Type; $vz_prop_real; $vt_prop_text)
	$vl_type:=$vz_prop_real
	
Function importProperties($vl_id : Integer)
	var $vl_red; $vl_green; $vl_blue; $vl_pos; $vl_objecttype : Integer
	var $vt_fillcolor; $vt_strokecolor; $vt_style; $vt_tag; $vt_transform; $vt_url; $vt_XML_gradient; $vt_id; $vt_textalign; $vt_fillrule : Text
	var $vz_strokewidth; $vz_alpha; $vz_temp1; $vz_temp4; $vz_x; $vz_y; $vz_fillopacity : Real
	var $vc_matrix; $vc_transforms; $vc_styles; $vc_matrixTemp; $vc_tags; $vc_tagsSub : Collection
	var $vo_stack; $vo_tag : Object
	
	$vl_objecttype:=This:C1470.getObjectType($vl_id)
	
	$vt_fillcolor:=This:C1470.getProp("fill")
	$vt_strokecolor:=This:C1470.getProp("stroke")
	$vt_id:=This:C1470.getProp("id")
	
	$vt_fillrule:=This:C1470.getProp("fill-rule")
	
	$vz_strokewidth:=This:C1470.getPropReal("stroke-width")
	$vz_alpha:=This:C1470.getPropReal("opacity")*100
	$vz_fillopacity:=This:C1470.getPropReal("fill-opacity")*100
	
	If ($vz_alpha<=0) | ($vz_alpha>100)
		$vz_alpha:=100
	End if 
	
	$vt_textalign:=This:C1470.getProp("text-align")
	
	If ($vt_textalign="")
		$vt_textalign:=This:C1470.getProp("text-anchor")
	End if 
	
	$vt_style:=This:C1470.getProp("style")
	
	This:C1470.importCustProp($vl_id)
	
	//PROPERTIES =============================================================
	
	$vc_styles:=[]
	
	If (Length:C16($vt_style)>0)
		$vc_styles:=Split string:C1554($vt_style; ";")
	End if 
	
	$vc_tags:=[]
	
	For each ($vt_style; $vc_styles)
		
		$vl_pos:=Position:C15(":"; $vt_style)
		
		If ($vl_pos>0)
			$vc_tags.push({name: Trim:C1853(Substring:C12($vt_style; 1; $vl_pos-1)); value: Trim:C1853(Substring:C12($vt_style; $vl_pos+1))})
		End if 
		
	End for each 
	
	$vt_tag:=This:C1470.getProp("fill")
	
	If (Length:C16($vt_tag)>0)
		
		$vc_tagsSub:=$vc_tags.query("name == 'fill'")
		If ($vc_tagsSub.length>0)
			$vc_tagsSub.first().value:=$vt_tag
		Else 
			$vc_tags.push({name: "fill"; value: Trim:C1853($vt_tag)})
		End if 
		
	End if 
	
	//========================================================================
	
	For each ($vo_tag; $vc_tags)
		
		Case of 
			: ($vo_tag.name="fill")
				
				If ($vo_tag.value="url(#@")
					
					$vt_url:=Replace string:C233($vo_tag.value; "url(#"; "")
					$vt_url:=Replace string:C233($vt_url; ")"; "")
					
					If ($vt_url#"")
						
						$vt_XML_gradient:=DOM Find XML element by ID:C1010(This:C1470.dom; $vt_url)
						
						If (OK=1)
							
							This:C1470.importElementChild($vl_id; $vt_XML_gradient)
							
						End if 
						
					End if 
					
					$vt_fillcolor:=""
				Else 
					$vt_fillcolor:=$vo_tag.value
				End if 
				
			: ($vo_tag.name="stroke")
				$vt_strokecolor:=$vo_tag.value
				
			: ($vo_tag.name="stroke-width")
				$vz_strokewidth:=Num:C11($vo_tag.value; ".")
				
			: ($vo_tag.name="fill-opacity")
				$vz_alpha:=Round:C94(Num:C11($vo_tag.value; ".")*100; 2)
				
		End case 
		
	End for each 
	
	Case of 
		: ($vl_objecttype=hmRep_ObjType_Line)
			$vt_fillcolor:=$vt_strokecolor
			
		: ($vl_objecttype=hmRep_ObjType_Text)
			
	End case 
	
	//==============================
	//Fill
	
	Case of 
		: ($vt_fillcolor="none") | (($vz_fillopacity=0) & (This:C1470.isPropAvailable("fill-opacity")))
			$vt_fillcolor:=""
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFill; 0; "")
			
		: ($vt_fillcolor#"")
			
			$vl_red:=0
			$vl_green:=0
			$vl_blue:=0
			This:C1470.colorToRGB($vt_fillcolor; ->$vl_red; ->$vl_green; ->$vl_blue)
			
			If ($vl_objecttype=hmRep_ObjType_Text)
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFill; 0; "")
				hmRep_SET COLOR(This:C1470.area; hmRep_clr_ObjectTextcolor; $vl_id; $vl_red; $vl_green; $vl_blue)
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFrame; 0; "")
			Else 
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFill; 1; "")
				hmRep_SET COLOR(This:C1470.area; hmRep_clr_ObjectFillcolor; $vl_id; $vl_red; $vl_green; $vl_blue)
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFrame; 0; "")
			End if 
			
		Else 
			
			If ($vl_objecttype=hmRep_ObjType_Text)
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFill; 0; "")
			Else 
				hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFill; 1; "")
			End if 
			
	End case 
	
	//==============================
	//Stroke
	
	Case of 
		: ($vt_strokecolor="none")
			$vt_strokecolor:=""
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFrame; 0; "")
			
		: ($vt_strokecolor#"")
			
			$vl_red:=0
			$vl_green:=0
			$vl_blue:=0
			This:C1470.colorToRGB($vt_strokecolor; ->$vl_red; ->$vl_green; ->$vl_blue)
			
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFrame; 1; "")
			hmRep_SET COLOR(This:C1470.area; hmRep_clr_ObjectFramecolor; $vl_id; $vl_red; $vl_green; $vl_blue)
			
		Else 
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFrame; 0; "")
			
	End case 
	
	If ($vz_strokewidth#0)
		hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Penwidth; $vz_strokewidth; "")
	End if 
	
	hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Alpha; $vz_alpha; "")
	
	If (Length:C16($vt_id)>0)
		hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Name; 0; $vt_id)
	End if 
	
	Case of 
		: ($vt_textalign="start")
			//hmRep_SET OBJECT PROPERTY ($vl_area;$vl_id;hmRep_oprop_Alignment;Align default;"")
			//nix
			
		: ($vt_textalign="middle") | ($vt_textalign="center")
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Alignment; Align center:K42:3; "")
			
		: ($vt_textalign="end")
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Alignment; Align right:K42:4; "")
			
	End case 
	
	If ($vt_fillrule="evenodd")
		hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_FillRule; 1; "")
	End if 
	
	//==============================
	//Transform
	
	$vc_matrix:=This:C1470.globalMatrix.copy()
	
	//Matrixen addieren
	
	$vc_transforms:=[]
	
	For each ($vo_stack; This:C1470.stack)
		
		$vt_transform:=This:C1470.getAttributeText($vo_stack.dom; "transform")
		
		If (Length:C16($vt_transform)>0)
			$vc_transforms.push($vt_transform)
		End if 
		
	End for each 
	
	If ($vl_objecttype=hmRep_ObjType_Path)
		
		$vz_x:=This:C1470.getPropReal("x")
		$vz_y:=This:C1470.getPropReal("y")
		
		If ($vz_x#0) | ($vz_y#0)
			$vc_transforms.push("Translate("+Replace string:C233(String:C10($vz_x); ","; ".")+" "+Replace string:C233(String:C10($vz_y); ","; ".")+")")
		End if 
		
	End if 
	
	If ($vc_transforms.length>0)
		
		For each ($vt_transform; $vc_transforms)
			
			$vc_matrixTemp:=[1; 0; 0; 1; 0; 0]
			
			If (This:C1470.getMatrix($vt_transform; $vc_matrixTemp))
				
				$vz_temp1:=$vc_matrix[0]
				$vz_temp4:=$vc_matrix[3]
				
				$vc_matrix[0]:=$vc_matrix[0]*$vc_matrixTemp[0]
				$vc_matrix[1]:=$vc_matrix[1]*$vc_matrixTemp[1]
				$vc_matrix[2]:=$vc_matrix[2]*$vc_matrixTemp[2]
				$vc_matrix[3]:=$vc_matrix[3]*$vc_matrixTemp[3]
				$vc_matrix[4]:=$vc_matrix[4]+($vc_matrixTemp[4]*$vz_temp1)
				$vc_matrix[5]:=$vc_matrix[5]+($vc_matrixTemp[5]*$vz_temp4)
				
			End if 
			
		End for each 
		
		hmRep_SET OBJECT MATRIX(This:C1470.area; $vl_id; $vc_matrix[0]; $vc_matrix[1]; $vc_matrix[2]; $vc_matrix[3]; $vc_matrix[4]; $vc_matrix[5])
		
	Else 
		
		If ($vc_matrix[0]#1) | ($vc_matrix[1]#0) | ($vc_matrix[2]#0) | ($vc_matrix[3]#1) | ($vc_matrix[4]#0) | ($vc_matrix[5]#0)
			hmRep_SET OBJECT MATRIX(This:C1470.area; $vl_id; $vc_matrix[0]; $vc_matrix[1]; $vc_matrix[2]; $vc_matrix[3]; $vc_matrix[4]; $vc_matrix[5])
		End if 
		
	End if 
	
Function importCustProp($vl_id : Integer)
	var $vl_import : Integer
	var $vt_temp : Text
	var $vo_prop : Object
	
	$vl_import:=0
	$vt_temp:=""
	hmRep_GET AREA PROPERTY(This:C1470.area; hmRep_prop_SVGpropImport; $vl_import; $vt_temp)
	
	If ($vl_import=1)
		
		For each ($vo_prop; This:C1470.elementProps)
			hmRep_SET PROPERTY BY NAME(This:C1470.area; hmRep_scope_Object; $vl_id; $vo_prop.name; $vo_prop.value)
		End for each 
		
	End if 
	
Function colorToRGB($vt_color : Text; $vp_red : Pointer; $vp_green : Pointer; $vp_blue : Pointer)
	var $vl_length : Integer
	var $vz_alpha : Real
	var $vc_rgb : Collection
	
	$vt_color:=Trim:C1853($vt_color)
	
	//http://www.december.com/html/spec/colorsvghex.html
	
	Case of 
		: ($vt_color="#@")
			
			$vt_color:=Replace string:C233($vt_color; "#"; "")
			$vl_length:=Length:C16($vt_color)
			
			Case of 
				: ($vl_length=3)
					$vp_red->:=This:C1470.hexToDec($vt_color[[1]]*4)
					$vp_green->:=This:C1470.hexToDec($vt_color[[2]]*4)
					$vp_blue->:=This:C1470.hexToDec($vt_color[[3]]*4)
					
				: ($vl_length=6)
					$vp_red->:=This:C1470.hexToDec(($vt_color[[1]]+$vt_color[[2]])*2)
					$vp_green->:=This:C1470.hexToDec(($vt_color[[3]]+$vt_color[[4]])*2)
					$vp_blue->:=This:C1470.hexToDec(($vt_color[[5]]+$vt_color[[6]])*2)
					
					//$vp_red->:=this.hexToDec (($vt_color≤1≥+$vt_color≤2≥))
					//$vp_green->:=this.hexToDec (($vt_color≤3≥+$vt_color≤4≥))
					//$vp_blue->:=this.hexToDec (($vt_color≤5≥+$vt_color≤6≥))
					//
					//$vp_red->:=($vp_red->) << 8
					//$vp_green->:=($vp_green->) << 8
					//$vp_blue->:=($vp_blue->) << 8
					
				Else 
					TRACE:C157
					
			End case 
			
		: ($vt_color="rgb(@")  //rgb(255,0,0)
			
			$vt_color:=Replace string:C233($vt_color; "rgb("; "")
			$vt_color:=Replace string:C233($vt_color; ")"; "")
			
			$vc_rgb:=Split string:C1554($vt_color; ",")
			$vc_rgb:=$vc_rgb.resize(3; "")
			
			//rgb(70.980392%,81.568627%,81.568627%)
			
			If ($vc_rgb[0]="@%@")
				$vp_red->:=0xFFFF*(Num:C11($vc_rgb[0]; ".")/100)
			Else 
				$vp_red->:=Num:C11($vc_rgb[0]) << 8
			End if 
			
			If ($vc_rgb[1]="@%@")
				$vp_green->:=0xFFFF*(Num:C11($vc_rgb[1]; ".")/100)
			Else 
				$vp_green->:=Num:C11($vc_rgb[1]) << 8
			End if 
			
			If ($vc_rgb[2]="@%@")
				$vp_blue->:=0xFFFF*(Num:C11($vc_rgb[2]; ".")/100)
			Else 
				$vp_blue->:=Num:C11($vc_rgb[2]) << 8
			End if 
			
			//http://www.december.com/html/spec/colorsvghex.html
			
		: ($vt_color="rgb16(@")
			
			$vz_alpha:=0
			This:C1470.getColorFromText($vt_color; $vp_red; $vp_green; $vp_blue; ->$vz_alpha)
			
		: ($vt_color="white")
			This:C1470.colorSetRGB8Bit($vp_red; $vp_green; $vp_blue; 0x00FF; 0x00FF; 0x00FF)
			
		: ($vt_color="red")
			This:C1470.colorSetRGB8Bit($vp_red; $vp_green; $vp_blue; 0x00FF; 0x0000; 0x0000)
			
		: ($vt_color="gray")
			This:C1470.colorSetRGB($vp_red; $vp_green; $vp_blue; 0x00808080)
			
		: ($vt_color="black")
			This:C1470.colorSetRGB($vp_red; $vp_green; $vp_blue; 0x0000)
			
		: ($vt_color="navy")
			This:C1470.colorSetRGB($vp_red; $vp_green; $vp_blue; 0x0080)
			
		: ($vt_color="darkblue")
			This:C1470.colorSetRGB($vp_red; $vp_green; $vp_blue; 0x008B)
			
		: ($vt_color="mediumblue")
			This:C1470.colorSetRGB($vp_red; $vp_green; $vp_blue; 0x00CD)
			
		: ($vt_color="blue")
			This:C1470.colorSetRGB($vp_red; $vp_green; $vp_blue; 0x00FF)
			
		Else 
			TRACE:C157
			
	End case 
	
Function importElementChild($vl_id : Integer; $vt_XML_child : Text)
	var $vt_dom_child; $vt_name; $vt_style; $vt_tag; $vt_transform; $vt_offset; $vt_value; $vt_url; $vt_XML_url : Text
	var $vl_gradienttype; $vl_count; $vl_red; $vl_green; $vl_blue; $vl_pos : Integer
	var $vz_x1; $vz_y1; $vz_x2; $vz_y2; $vz_offset; $vz_alpha; $vz_radius : Real
	var $vf_linear : Boolean
	var $vx_value : Blob
	var $vc_styles; $vc_tags; $vc_tagsSub; $vc_matrix : Collection
	var $vo_tag : Object
	
	$vt_name:=""
	DOM GET XML ELEMENT NAME:C730($vt_XML_child; $vt_name)
	
	Case of 
		: ($vt_name="linearGradient") | ($vt_name="radialGradient")
			
			$vf_linear:=$vt_name="linearGradient"
			
			If ($vf_linear)
				$vz_x1:=This:C1470.getAttributeReal($vt_XML_child; "x1")
				$vz_y1:=This:C1470.getAttributeReal($vt_XML_child; "y1")
				$vz_x2:=This:C1470.getAttributeReal($vt_XML_child; "x2")
				$vz_y2:=This:C1470.getAttributeReal($vt_XML_child; "y2")
				
				If (This:C1470.getAttributeText($vt_XML_child; "x1")="@%")
					$vl_gradienttype:=2
				Else 
					$vl_gradienttype:=1
				End if 
				
			Else 
				$vz_x1:=This:C1470.getAttributeReal($vt_XML_child; "cx")
				$vz_y1:=This:C1470.getAttributeReal($vt_XML_child; "cy")
				$vz_x2:=This:C1470.getAttributeReal($vt_XML_child; "fx")
				$vz_y2:=This:C1470.getAttributeReal($vt_XML_child; "fy")
				$vz_radius:=This:C1470.getAttributeReal($vt_XML_child; "r")
				
				If (This:C1470.getAttributeText($vt_XML_child; "cx")="@%")
					$vl_gradienttype:=2
				Else 
					$vl_gradienttype:=1
				End if 
				
			End if 
			
			$vt_url:=This:C1470.getAttributeText($vt_XML_child; "xlink:href")
			
			If (Length:C16($vt_url)>0)
				
				$vt_url:=Replace string:C233($vt_url; "#"; "")
				
				$vt_XML_url:=DOM Find XML element by ID:C1010(This:C1470.dom; $vt_url)
				
				If (OK=1)
					$vt_XML_child:=$vt_XML_url
				End if 
				
			End if 
			
			$vt_transform:=This:C1470.getAttributeText($vt_XML_child; "gradientTransform")
			
			If ($vf_linear)
				hmRep_SET OBJECT LIN GRADIENT(This:C1470.area; $vl_id; $vl_gradienttype; $vz_x1; $vz_y1; $vz_x2; $vz_y2)
			Else 
				hmRep_SET OBJECT RAD GRADIENT(This:C1470.area; $vl_id; $vl_gradienttype; $vz_x1; $vz_y1; $vz_x2; $vz_y2; $vz_radius)
			End if 
			
			$vt_dom_child:=DOM Get first child XML element:C723($vt_XML_child)
			
			If (OK=1)
				
				$vl_count:=0
				
				Repeat 
					
					$vl_count:=$vl_count+1
					
					$vt_name:=""
					DOM GET XML ELEMENT NAME:C730($vt_dom_child; $vt_name)
					
					If ($vt_name="stop")
						
						$vt_offset:=This:C1470.getAttributeText($vt_dom_child; "offset")
						
						If ($vt_offset="@%")
							$vz_offset:=Num:C11($vt_offset; ".")/100
						Else 
							$vz_offset:=Num:C11($vt_offset; ".")
						End if 
						
						$vt_style:=This:C1470.getAttributeText($vt_dom_child; "style")
						$vz_alpha:=100
						$vl_red:=0
						$vl_green:=0
						$vl_blue:=0
						
						$vc_styles:=[]
						
						If (Length:C16($vt_style)>0)
							$vc_styles:=Split string:C1554($vt_style; ";")
						End if 
						
						$vc_tags:=[]
						
						For each ($vt_style; $vc_styles)
							
							$vl_pos:=Position:C15(":"; $vt_style)
							
							If ($vl_pos>0)
								$vc_tags.push({name: Substring:C12($vt_style; 1; $vl_pos-1); value: Substring:C12($vt_style; $vl_pos+1)})
							End if 
							
						End for each 
						
						$vt_tag:=This:C1470.getAttributeText($vt_dom_child; "stop-color")
						
						If (Length:C16($vt_tag)>0)
							$vc_tagsSub:=$vc_tags.query("name ==  'stop-color'")
							If ($vc_tagsSub.length>0)
								$vc_tagsSub.first().value:=$vt_tag
							Else 
								$vc_tags.push({name: "stop-color"; value: $vt_tag})
							End if 
						End if 
						
						For each ($vo_tag; $vc_tags)
							
							Case of 
								: ($vo_tag.name="stop-color")
									This:C1470.colorToRGB($vo_tag.value; ->$vl_red; ->$vl_green; ->$vl_blue)
									
								: ($vo_tag.name="stop-opacity")
									$vz_alpha:=Num:C11($vo_tag.value; ".")*100
									
							End case 
							
						End for each 
						
						hmRep_SET OBJECT GRADIENTSTOP(This:C1470.area; $vl_id; $vl_count; $vz_offset; $vz_alpha; $vl_red; $vl_green; $vl_blue)
						
					End if 
					
					$vt_dom_child:=DOM Get next sibling XML element:C724($vt_dom_child)
					
				Until (OK=0)
				
			End if 
			
			//Matrix
			
			$vc_matrix:=[1; 0; 0; 1; 0; 0]
			
			If (This:C1470.getMatrix($vt_transform; $vc_matrix))
				
				hmRep_SET OBJECT GRADIENTMATR(This:C1470.area; $vl_id; $vc_matrix[0]; $vc_matrix[1]; $vc_matrix[2]; $vc_matrix[3]; $vc_matrix[4]; $vc_matrix[5])
				
			End if 
			
		: ($vt_name="script")
			
			$vt_value:=""
			DOM GET XML ELEMENT VALUE:C731($vt_XML_child; $vt_value)
			
			hmRep_SET SCRIPT(This:C1470.area; 0; $vl_id; $vt_value)
			
		: ($vt_name="TokenizedScript")
			
			SET BLOB SIZE:C606($vx_value; 0)
			DOM GET XML ELEMENT VALUE:C731($vt_XML_child; $vx_value)
			
			hmRep_SET TOKENIZED SCRIPT(This:C1470.area; 0; $vl_id; $vx_value)
			
		: ($vt_name="TokenizedScript_After")
			
			SET BLOB SIZE:C606($vx_value; 0)
			DOM GET XML ELEMENT VALUE:C731($vt_XML_child; $vx_value)
			
			hmRep_SET TOKENIZED SCRIPT(This:C1470.area; -4; $vl_id; $vx_value)
			
		: ($vt_name="TokenizedScript_After_Render")
			
			SET BLOB SIZE:C606($vx_value; 0)
			DOM GET XML ELEMENT VALUE:C731($vt_XML_child; $vx_value)
			
			hmRep_SET TOKENIZED SCRIPT(This:C1470.area; -5; $vl_id; $vx_value)
			
	End case 
	
Function getMatrix($vt_transform : Text; $vc_matrix : Collection)->$vf_ok : Boolean
	var $vt_transform_type; $vt_transform_text : Text
	var $vf_out : Boolean
	var $vz_temp1; $vz_temp4 : Real
	var $vl_pos1; $vl_pos2 : Integer
	var $vc_points : Collection
	
	$vf_ok:=False:C215
	
	$vt_transform:=Trim:C1853($vt_transform)
	
	$vc_matrix.resize(6; 0)
	
	If ($vt_transform="matrix(@")
		
		$vt_transform:=Replace string:C233($vt_transform; "matrix("; "")
		$vt_transform:=Replace string:C233($vt_transform; ")"; "")
		$vt_transform:=Replace string:C233($vt_transform; ","; " ")
		
		$vc_points:=Split string:C1554($vt_transform; " ")
		
		If ($vc_points.length=6)
			
			$vc_matrix[0]:=Num:C11($vc_points[0]; ".")
			$vc_matrix[1]:=Num:C11($vc_points[1]; ".")
			$vc_matrix[2]:=Num:C11($vc_points[2]; ".")
			$vc_matrix[3]:=Num:C11($vc_points[3]; ".")
			$vc_matrix[4]:=Num:C11($vc_points[4]; ".")
			$vc_matrix[5]:=Num:C11($vc_points[5]; ".")
			
			$vf_ok:=True:C214
			
		End if 
		
	Else 
		
		$vz_temp1:=$vc_matrix[0]
		$vz_temp4:=$vc_matrix[3]
		
		Repeat 
			
			$vl_pos1:=Position:C15("("; $vt_transform)
			$vl_pos2:=Position:C15(")"; $vt_transform)
			
			If ($vl_pos1>0) & ($vl_pos2>0)
				
				$vt_transform_type:=Substring:C12($vt_transform; 1; $vl_pos1-1)
				$vt_transform_text:=Substring:C12($vt_transform; $vl_pos1+1; $vl_pos2-$vl_pos1-1)
				$vt_transform_text:=Replace string:C233($vt_transform_text; ","; " ")
				
				$vt_transform:=Substring:C12($vt_transform; $vl_pos2+1)
				$vt_transform:=Trim:C1853($vt_transform)
				
				Case of 
					: ($vt_transform_type="translate")
						
						$vc_points:=Split string:C1554($vt_transform_text; " ")
						
						If ($vc_points.length>0)
							$vc_matrix[4]:=$vc_matrix[4]+(Num:C11($vc_points[0]; ".")*$vz_temp1)
						End if 
						
						If ($vc_points.length>1)
							$vc_matrix[5]:=$vc_matrix[5]+(Num:C11($vc_points[1]; ".")*$vz_temp4)
						End if 
						
						$vf_out:=False:C215
						$vf_ok:=True:C214
						
					: ($vt_transform_type="scale")
						
						$vc_points:=Split string:C1554($vt_transform_text; " ")
						
						If ($vc_points.length=1)
							$vc_matrix[0]:=$vc_matrix[0]*(Num:C11($vc_points[0]; "."))
							$vc_matrix[3]:=$vc_matrix[3]*(Num:C11($vc_points[0]; "."))
						End if 
						
						If ($vc_points.length=2)
							$vc_matrix[0]:=$vc_matrix[0]*(Num:C11($vc_points[0]; "."))
							$vc_matrix[3]:=$vc_matrix[3]+(Num:C11($vc_points[1]; "."))
						End if 
						
						$vf_out:=False:C215
						$vf_ok:=True:C214
						
					Else 
						$vf_ok:=True:C214
						
				End case 
				
			Else 
				$vf_out:=True:C214
			End if 
			
		Until ($vf_out)
		
	End if 
	
	//Prüft, ob ein Propertyname mit dem Value vorhanden ist
Function findProp($vt_propname : Text; $vt_value : Text)->$vf_found : Boolean
	var $i : Integer
	var $vt_result : Text
	
	$vf_found:=False:C215
	
	//übergeordnete Einträge anschauen
	
	If (This:C1470.stack.length>1)
		
		For ($i; This:C1470.stack.length-1; 1; -1)
			
			$vt_result:=This:C1470.getAttributeText(This:C1470.stack[$i-1].dom; $vt_propname)
			
			If ($vt_result=$vt_value)
				$vf_found:=True:C214
				$i:=0
				
			End if 
			
		End for 
		
	End if 
	
Function importElementUse($vt_dom : Text)
	var $vt_xlink; $vt_dest_element : Text
	
	$vt_xlink:=This:C1470.getProp("xlink:href")
	
	If (Length:C16($vt_xlink)>0)
		
		$vt_xlink:=Replace string:C233($vt_xlink; "#"; "")
		
		$vt_dest_element:=DOM Find XML element by ID:C1010($vt_dom; $vt_xlink)
		
		If (OK=1)
			
			This:C1470.elementsTree($vt_dest_element)
			
		End if 
		
	End if 
	
Function isPropAvailable($vt_propname : Text) : Boolean
	return (This:C1470.elementProps.query("name == :1"; $vt_propname).length>0)
	
Function importElementPolygon($vf_polygon : Boolean)
	var $i; $vl_id; $vl_size; $vl_pos; $vl_pairs; $vl_index : Integer
	var $vt_d; $vt_point : Text
	var $vz_point_x; $vz_point_y : Real
	var $vc_points : Collection
	
	$vt_d:=This:C1470.getProp("points")
	$vt_d:=Trim:C1853($vt_d)
	
	//584.33,535.896 584.33,539.906 582.128,539.906 582.128,529.068 584.33,529.068 584.33,533.087 596.126,533.087 596.126,535.896
	
	$vc_points:=Split string:C1554($vt_d; " "; sk ignore empty strings:K86:1+sk trim spaces:K86:2)
	
	If ($vc_points.length=1)  //Eine Liste mit ","???
		
		//285.72,538.41,292.51,538.41,292.51,559,302.22,559,300.13,564.57,300.13,564.57,285.72,564.57
		
		$vc_points:=Split string:C1554($vt_d; ",")
		
		$vl_size:=$vc_points.length
		
		If ($vl_size>0) & (($vl_size%2)=0)
			
			hmRep_START PATH(This:C1470.area)
			
			$vl_pairs:=$vl_size/2
			
			For ($i; 1; $vl_pairs)
				
				$vl_index:=($i*2)-1
				
				$vz_point_x:=Num:C11($vc_points[$vl_index-1]; ".")
				$vz_point_y:=Num:C11($vc_points[$vl_index]; ".")
				
				hmRep_PATH POINT(This:C1470.area; $vz_point_x; $vz_point_y)
				
			End for 
			
			If ($vf_polygon)
				hmRep_CLOSE PATH(This:C1470.area)  //nicht beu Polyline
			End if 
			
			$vl_id:=hmRep_End Path(This:C1470.area)
			
			If ($vl_id>0)
				This:C1470.importProperties($vl_id)
			Else 
				TRACE:C157
			End if 
			
		End if 
		
	Else 
		
		If ($vc_points.length>0)
			
			hmRep_START PATH(This:C1470.area)
			
			If (Position:C15(","; $vt_d)>0)  //durch , getrennte Paare
				
				For each ($vt_point; $vc_points)
					
					$vl_pos:=Position:C15(","; $vt_point)
					
					If ($vl_pos>0)
						
						$vz_point_x:=Num:C11(Substring:C12($vt_point; 1; $vl_pos-1); ".")
						$vz_point_y:=Num:C11(Substring:C12($vt_point; $vl_pos+1); ".")
						
						hmRep_PATH POINT(This:C1470.area; $vz_point_x; $vz_point_y)
						
					Else 
						TRACE:C157
					End if 
					
				End for each 
				
			Else 
				
				//durch SPACE getrennte Paare
				
				$vl_pairs:=$vl_size/2
				
				For ($i; 1; $vl_pairs)
					
					$vl_index:=($i*2)-1
					
					$vz_point_x:=Num:C11($vc_points[$vl_index-1]; ".")
					$vz_point_y:=Num:C11($vc_points[$vl_index]; ".")
					
					hmRep_PATH POINT(This:C1470.area; $vz_point_x; $vz_point_y)
					
				End for 
				
			End if 
			
			If ($vf_polygon)
				hmRep_CLOSE PATH(This:C1470.area)  //nicht beu Polyline
			End if 
			
			$vl_id:=hmRep_End Path(This:C1470.area)
			
			If ($vl_id>0)
				This:C1470.importProperties($vl_id)
			Else 
				TRACE:C157
			End if 
			
		End if 
		
	End if 
	
Function importElementRect()
	var $vl_id : Integer
	var $vz_x; $vz_y; $vz_width; $vz_height; $vz_radius_x; $vz_radius_y : Real
	
	$vz_x:=This:C1470.getPropReal("x")
	$vz_y:=This:C1470.getPropReal("y")
	$vz_width:=This:C1470.getPropReal("width")
	$vz_height:=This:C1470.getPropReal("height")
	
	$vz_radius_x:=This:C1470.getPropReal("rx")*2
	$vz_radius_y:=This:C1470.getPropReal("ry")*2
	
	$vl_id:=hmRep_Create Rectangle(This:C1470.area; $vz_x; $vz_y; $vz_x+$vz_width; $vz_y+$vz_height)
	
	If ($vl_id>0)
		
		hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_Rounding; $vz_radius_x; "")
		
		This:C1470.importProperties($vl_id)
		
	Else 
		TRACE:C157
	End if 
	
Function importElementLine()
	var $vl_id : Integer
	var $vz_left; $vz_top; $vz_right; $vz_bottom : Real
	
	$vz_left:=This:C1470.getPropReal("x1")
	$vz_top:=This:C1470.getPropReal("y1")
	$vz_right:=This:C1470.getPropReal("x2")
	$vz_bottom:=This:C1470.getPropReal("y2")
	
	$vl_id:=hmRep_Create Line(This:C1470.area; $vz_left; $vz_top; $vz_right; $vz_bottom)
	
	If ($vl_id>0)
		This:C1470.importProperties($vl_id)
	Else 
		TRACE:C157
	End if 
	
Function importElementEllipse()
	var $vl_id : Integer
	var $vz_radius_x; $vz_radius_y; $vz_x; $vz_y : Real
	
	$vz_x:=This:C1470.getPropReal("cx")
	$vz_y:=This:C1470.getPropReal("cy")
	$vz_radius_x:=This:C1470.getPropReal("rx")
	$vz_radius_y:=This:C1470.getPropReal("ry")
	
	$vl_id:=hmRep_Create Oval(This:C1470.area; $vz_x-$vz_radius_x; $vz_y-$vz_radius_y; $vz_x+$vz_radius_x; $vz_y+$vz_radius_y)
	
	If ($vl_id>0)
		This:C1470.importProperties($vl_id)
	Else 
		TRACE:C157
	End if 
	
Function importElementCircle()
	var $vl_id : Integer
	var $vz_radius; $vz_x; $vz_y : Real
	
	$vz_x:=This:C1470.getPropReal("cx")
	$vz_y:=This:C1470.getPropReal("cy")
	$vz_radius:=This:C1470.getPropReal("r")
	
	$vl_id:=hmRep_Create Oval(This:C1470.area; $vz_x-$vz_radius; $vz_y-$vz_radius; $vz_x+$vz_radius; $vz_y+$vz_radius)
	
	If ($vl_id>0)
		This:C1470.importProperties($vl_id)
	Else 
		TRACE:C157
	End if 
	
Function importElementImage()
	var $vl_id : Integer
	var $vz_x; $vz_y; $vz_width; $vz_height : Real
	var $vt_imagebase64 : Text
	var $vx_blob : Blob
	var $vb_picture : Picture
	
	$vz_x:=This:C1470.getPropReal("x")
	$vz_y:=This:C1470.getPropReal("y")
	$vz_width:=This:C1470.getPropReal("width")
	$vz_height:=This:C1470.getPropReal("height")
	
	$vt_imagebase64:=This:C1470.getProp("xlink:href")
	
	If (Length:C16($vt_imagebase64)=0)
		$vt_imagebase64:=This:C1470.getProp("xl:href")
	End if 
	
	Case of 
		: ($vt_imagebase64="data:;base64,@")
			
			$vt_imagebase64:=Delete string:C232($vt_imagebase64; 1; 13)
			
			SET BLOB SIZE:C606($vx_blob; 0)
			CONVERT FROM TEXT:C1011($vt_imagebase64; "UTF-8"; $vx_blob)
			
			BASE64 DECODE:C896($vx_blob)
			
			BLOB TO PICTURE:C682($vx_blob; $vb_picture)
			
		: ($vt_imagebase64="data:image/png;base64,@")
			
			$vt_imagebase64:=Delete string:C232($vt_imagebase64; 1; 22)
			
			SET BLOB SIZE:C606($vx_blob; 0)
			CONVERT FROM TEXT:C1011($vt_imagebase64; "UTF-8"; $vx_blob)
			
			BASE64 DECODE:C896($vx_blob)
			
			BLOB TO PICTURE:C682($vx_blob; $vb_picture)
			
		: ($vt_imagebase64="data:image/jpeg;base64,@")
			
			$vt_imagebase64:=Delete string:C232($vt_imagebase64; 1; 23)
			
			SET BLOB SIZE:C606($vx_blob; 0)
			CONVERT FROM TEXT:C1011($vt_imagebase64; "UTF-8"; $vx_blob)
			
			BASE64 DECODE:C896($vx_blob)
			
			BLOB TO PICTURE:C682($vx_blob; $vb_picture)
			
		: ($vt_imagebase64="data:image/tiff;base64,@")
			
			$vt_imagebase64:=Delete string:C232($vt_imagebase64; 1; 23)
			
			SET BLOB SIZE:C606($vx_blob; 0)
			CONVERT FROM TEXT:C1011($vt_imagebase64; "UTF-8"; $vx_blob)
			
			BASE64 DECODE:C896($vx_blob)
			
			BLOB TO PICTURE:C682($vx_blob; $vb_picture)
			
		: ($vt_imagebase64="data:image/gif;base64,@")
			
			$vt_imagebase64:=Delete string:C232($vt_imagebase64; 1; 22)
			
			SET BLOB SIZE:C606($vx_blob; 0)
			CONVERT FROM TEXT:C1011($vt_imagebase64; "UTF-8"; $vx_blob)
			
			BASE64 DECODE:C896($vx_blob)
			
			BLOB TO PICTURE:C682($vx_blob; $vb_picture)
			
		: ($vt_imagebase64="data:image/bmp;base64,@")
			
			$vt_imagebase64:=Delete string:C232($vt_imagebase64; 1; 22)
			
			SET BLOB SIZE:C606($vx_blob; 0)
			CONVERT FROM TEXT:C1011($vt_imagebase64; "UTF-8"; $vx_blob)
			
			BASE64 DECODE:C896($vx_blob)
			
			BLOB TO PICTURE:C682($vx_blob; $vb_picture)
			
		Else 
			
			//$vl_temp:=0
			//$vt_svgrootfolder:=""
			//hmRep_GET AREA PROPERTY(This.area; hmRep_prop_SVGrootFolder; $vl_temp; $vt_svgrootfolder)
			
			//$vt_picfile:=$vt_svgrootfolder+$vt_imagebase64
			
			//If (Test path name($vt_picfile)=Is a document)
			
			//READ PICTURE FILE($vt_picfile; $vb_picture)
			
			//End if 
			
	End case 
	
	$vl_id:=hmRep_Create Picture(This:C1470.area; $vz_x; $vz_y; $vz_x+$vz_width; $vz_y+$vz_height)
	
	If ($vl_id>0)
		
		This:C1470.importProperties($vl_id)
		
		If (Picture size:C356($vb_picture)>0)
			
			hmRep_SET PICTURE(This:C1470.area; $vl_id; $vb_picture)
			
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFill; 0; "")
			hmRep_SET OBJECT PROPERTY(This:C1470.area; $vl_id; hmRep_oprop_ShowFrame; 0; "")
			
		End if 
		
	Else 
		TRACE:C157
	End if 
	
Function getColorFromText($vt_color : Text; $vp_red : Pointer; $vp_green : Pointer; $vp_blue : Pointer; $vp_alpha : Pointer)
	var $vc_colors : Collection
	
	$vt_color:=Replace string:C233($vt_color; "rgb16("; "")
	$vt_color:=Replace string:C233($vt_color; ")"; "")
	
	$vc_colors:=Split string:C1554($vt_color; ",")
	
	Case of 
		: ($vc_colors.length=3)
			
			$vp_red->:=Num:C11($vc_colors[0])
			$vp_green->:=Num:C11($vc_colors[1])
			$vp_blue->:=Num:C11($vc_colors[2])
			$vp_alpha->:=100
			
		: ($vc_colors.length=4)
			
			$vp_red->:=Num:C11($vc_colors[0])
			$vp_green->:=Num:C11($vc_colors[1])
			$vp_blue->:=Num:C11($vc_colors[2])
			$vp_alpha->:=Num:C11($vc_colors[3]; ".")*100
			
		Else 
			
			$vp_red->:=0
			$vp_green->:=0
			$vp_blue->:=0
			$vp_alpha->:=1
			
	End case 
	
Function colorSetRGB($vp_red : Pointer; $vp_green : Pointer; $vp_blue : Pointer; $vl_rgb : Integer)
	var $vl_red; $vl_green; $vl_blue : Integer
	
	$vl_red:=($vl_rgb & 0x00FF0000) >> 16
	$vl_green:=($vl_rgb & 0xFF00) >> 8
	$vl_blue:=($vl_rgb & 0x00FF)
	
	$vp_red->:=($vl_red << 8)+$vl_red
	$vp_green->:=($vl_green << 8)+$vl_green
	$vp_blue->:=($vl_blue << 8)+$vl_blue
	
Function colorSetRGB8Bit($vp_red : Pointer; $vp_green : Pointer; $vp_blue : Pointer; $vl_red : Integer; $vl_green : Integer; $vl_blue : Integer)
	$vp_red->:=($vl_red << 8)+$vl_red
	$vp_green->:=($vl_green << 8)+$vl_green
	$vp_blue->:=($vl_blue << 8)+$vl_blue
	
Function hexToDec($vt_hexstring : Text)->$vl_shift : Integer
	var $vt_char : Text
	var $i; $j; $vl_value : Integer
	
	$j:=1
	$vl_shift:=0
	
	For ($i; Length:C16($vt_hexstring); 1; -1)
		
		$vt_char:=$vt_hexstring[[$i]]
		
		Case of 
			: ($vt_char="a")
				$vl_value:=((16^($j-1))*10)
				$vl_shift:=$vl_shift+$vl_value
				
			: ($vt_char="b")
				$vl_value:=((16^($j-1))*11)
				$vl_shift:=$vl_shift+$vl_value
				
			: ($vt_char="c")
				$vl_value:=((16^($j-1))*12)
				$vl_shift:=$vl_shift+$vl_value
				
			: ($vt_char="d")
				$vl_value:=((16^($j-1))*13)
				$vl_shift:=$vl_shift+$vl_value
				
			: ($vt_char="e")
				$vl_value:=((16^($j-1))*14)
				$vl_shift:=$vl_shift+$vl_value
				
			: ($vt_char="f")
				$vl_value:=((16^($j-1))*15)
				$vl_shift:=$vl_shift+$vl_value
				
			: (($vt_char>="0") & ($vt_char<="9"))
				$vl_value:=((16^($j-1))*Num:C11($vt_char))
				$vl_shift:=$vl_shift+$vl_value
				
			Else 
				$j:=$j-1
				
		End case 
		
		$j:=$j+1
		
	End for 
	