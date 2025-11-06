//%attributes = {}
var $i; $vl_version; $vl_style; $vl_typ; $vl_alpha; $vl_red; $vl_green; $vl_blue; $vl_color : Integer
var $vt_dom; $vt_folder; $vt_path; $vt_name; $vt_element; $vt_bold; $vt_italic; $vt_underline : Text

$vt_folder:=Get 4D folder:C485(Active 4D Folder:K5:10)

$vl_version:=UT_Get4DMainVersion

$vt_path:=$vt_folder+"4D Preferences v"+String:C10($vl_version)+".4DPreferences"

If (Test path name:C476($vt_path)=Is a document:K24:1)
	
	$vt_dom:=DOM Parse XML source:C719($vt_path)
	
	If (OK=1)
		
		ARRAY TEXT:C222($tt_elements; 0)
		$vt_element:=DOM Find XML element:C864($vt_dom; "preferences/com.4d/method_editor/syntax_style[1]/syntax"; $tt_elements)
		
		If (Size of array:C274($tt_elements)=0)
			
			DOM CLOSE XML:C722($vt_dom)
			
			$vt_path:=Get 4D folder:C485(Current resources folder:K5:16)+"Default_Language.XML"
			
			$vt_dom:=DOM Parse XML source:C719($vt_path)
			
			ARRAY TEXT:C222($tt_elements; 0)
			$vt_element:=DOM Find XML element:C864($vt_dom; "preferences/com.4d/method_editor/syntax_style[1]/syntax"; $tt_elements)
			
		End if 
		
		For ($i; 1; Size of array:C274($tt_elements))
			
			$vt_name:=""
			DOM GET XML ATTRIBUTE BY NAME:C728($tt_elements{$i}; "kind"; $vt_name)
			
			Case of 
				: ($vt_name="plain_text")
					$vl_typ:=1
					
				: ($vt_name="commands")
					$vl_typ:=2
					
				: ($vt_name="keywords")
					$vl_typ:=3
					
				: ($vt_name="tables")
					$vl_typ:=4
					
				: ($vt_name="fields")
					$vl_typ:=5
					
				: ($vt_name="methods")
					$vl_typ:=6
					
				: ($vt_name="local_variables")
					$vl_typ:=7
					
				: ($vt_name="process_variables")
					$vl_typ:=8
					
				: ($vt_name="interprocess_variables")
					$vl_typ:=9
					
				: ($vt_name="parameters")
					$vl_typ:=10
					
				: ($vt_name="constants")
					$vl_typ:=11
					
				: ($vt_name="plug_ins")
					$vl_typ:=12
					
				: ($vt_name="comments")
					$vl_typ:=13
					
				: ($vt_name="errors")
					$vl_typ:=14
					
				: ($vt_name="SQL")
					$vl_typ:=15
					
				Else 
					$vl_typ:=0
					
			End case 
			
			If ($vl_typ>0)
				
				$vt_element:=DOM Find XML element:C864($vt_dom; "preferences/com.4d/method_editor/syntax_style[1]/syntax["+String:C10($i)+"]/color")
				
				$vl_alpha:=0
				DOM GET XML ATTRIBUTE BY NAME:C728($vt_element; "alpha"; $vl_alpha)
				$vl_red:=0
				DOM GET XML ATTRIBUTE BY NAME:C728($vt_element; "red"; $vl_red)
				$vl_green:=0
				DOM GET XML ATTRIBUTE BY NAME:C728($vt_element; "green"; $vl_green)
				$vl_blue:=0
				DOM GET XML ATTRIBUTE BY NAME:C728($vt_element; "blue"; $vl_blue)
				
				$vl_color:=0
				$vl_color:=$vl_color+($vl_alpha << 24)
				$vl_color:=$vl_color+($vl_red << 16)
				$vl_color:=$vl_color+($vl_green << 8)
				$vl_color:=$vl_color+$vl_blue
				
				$vt_element:=DOM Find XML element:C864($vt_dom; "preferences/com.4d/method_editor/syntax_style[1]/syntax["+String:C10($i)+"]/style")
				
				$vt_bold:=""
				DOM GET XML ATTRIBUTE BY NAME:C728($vt_element; "bold"; $vt_bold)
				$vt_italic:=""
				DOM GET XML ATTRIBUTE BY NAME:C728($vt_element; "italic"; $vt_italic)
				$vt_underline:=""
				DOM GET XML ATTRIBUTE BY NAME:C728($vt_element; "underline"; $vt_underline)
				
				$vl_style:=Plain:K14:1
				If ($vt_bold="true")
					$vl_style:=$vl_style+Bold:K14:2
				End if 
				If ($vt_italic="true")
					$vl_style:=$vl_style+Italic:K14:3
				End if 
				If ($vt_underline="true")
					$vl_style:=$vl_style+Underline:K14:4
				End if 
				
				hmX_SET 4D CODE STYLE($vl_typ; $vl_color; $vl_style)
				
			End if 
			
		End for 
		
		DOM CLOSE XML:C722($vt_dom)
		
	End if 
	
End if 
