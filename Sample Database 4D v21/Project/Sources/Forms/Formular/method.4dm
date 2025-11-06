var $vl_pos : Integer
var $vt_resfolder; $vt_current_report : Text
var $i; $j; $vl_id; $vl_area : Integer
var vd_pieces_start_date : Date
var $vp_object; $vp_object_name; $vp_object_id : Pointer
var $vo_customers : cs:C1710.CustomersSelection

Case of 
	: (Form event code:C388=On Load:K2:1)
		
		$vl_area:=OBJECT Get pointer:C1124(Object named:K67:5; "reparea")->
		
		ARRAY TEXT:C222(t2t_array; 2; 10)
		For ($i; 1; 10)
			t2t_array{1}{$i}:="test "+String:C10($i)+"a"
			t2t_array{2}{$i}:="test "+String:C10($i)+"b"
		End for 
		
		ARRAY LONGINT:C221(tl_pieces_sums; 7)
		vd_pieces_start_date:=!2012-01-02!
		
		Form:C1466.palette:=cs:C1710.hmReportsPalette.Palette.new($vl_area; "palette")
		
		//ARRAY TEXT(tt_register1;2)
		//tt_register1{1}:="Report"
		//tt_register1{2}:="Slideshow"
		//tt_register1:=1
		
		//====================================
		
		$vt_resfolder:=Get 4D folder:C485(Current resources folder:K5:16)
		
		$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_svg")
		
		//%W-518.5
		ARRAY TEXT:C222($vp_object->; 0)
		//%W+518.5
		
		DOCUMENT LIST:C474($vt_resfolder; $vp_object->)
		
		For ($i; Size of array:C274($vp_object->); 1; -1)
			If ($vp_object->{$i}#"@.svg") | ($vp_object->{$i}=".@")
				DELETE FROM ARRAY:C228($vp_object->; $i)
			End if 
		End for 
		
		SORT ARRAY:C229($vp_object->; >)
		
		//====================================
		//Load Customers
		
		ALL RECORDS:C47([Customers:1])
		ORDER BY:C49([Customers:1]; [Customers:1]Name:2; >)
		
		//ORDA
		
		$vo_customers:=ds:C1482.Customers.all().orderBy("Name asc")
		hmRep_SET VARIABLE OBJECT($vl_area; "customerSelection"; $vo_customers)
		
		$vp_object_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_reports")
		
		Editor_InitReportList
		
		$vp_object_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_reports")
		
		$vl_pos:=Find in array:C230($vp_object_id->; 18)
		
		If ($vl_pos>0)
			$vp_object_name->:=$vl_pos
		Else 
			$vp_object_name->:=1
		End if 
		
		$vt_current_report:=hmRep_Get Current Report($vl_area)
		Editor_LoadReport
		hmRep_DELETE REPORT($vl_area; $vt_current_report)
		
		BRING TO FRONT:C326(Current process:C322)
		
		hmRep_INSTALL CALLBACK($vl_area; "Callback")
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Toolbar; 0; "")
		hmRep_SET AREA PROPERTY($vl_area; hmRep_prop_Pagelist; 1; "")
		
		hmRep_SET EVENT STATE($vl_area; hmRep_OnOutsideDrop; 1)
		
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
