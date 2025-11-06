var $i; $j; $vl_id; $vl_area : Integer
var $vp_object_name : Pointer

Case of 
	: (Form event code:C388=On Load:K2:1)
		
		$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->
		
		Form:C1466.palette.paletteUpdate()
		Form:C1466.palette_visible:=True:C214
		OBJECT SET TITLE:C194(*; "palette_hide_button"; "Hide Palette")
		
		//====================================
		
		ALL RECORDS:C47([Customers:1])
		ORDER BY:C49([Customers:1]; [Customers:1]Name:2; >)
		
		$vp_object_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_reports")
		
		Editor_InitReportList
		$vp_object_name->:=1
		Editor_LoadReport
		
		BRING TO FRONT:C326(Current process:C322)
		
		hmRep_INSTALL CALLBACK($vl_area; "Callback")
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Toolbar; 0; "")
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Pagelist; 0; "")
		
		//Init VStructure
		
		For ($i; 1; Last table number:C254)
			
			If (Is table number valid:C999($i))
				
				$vl_id:=hmRep_Create VStructure Table($vl_area; $i; Table name:C256($i))
				
				For ($j; 1; Last field number:C255($i))
					
					If (Is field number valid:C1000($i; $j))
						
						$vl_id:=hmRep_Create VStructure Field($vl_area; $i; $j; Field name:C257($i; $j))
						
					End if 
					
				End for 
				
			End if 
			
		End for 
		
		$vl_id:=hmRep_Create VStructure Var($vl_area; "hmRep_Date"; "Date")
		
	: (Form event code:C388=On Close Box:K2:21)
		CANCEL:C270
		
End case 
