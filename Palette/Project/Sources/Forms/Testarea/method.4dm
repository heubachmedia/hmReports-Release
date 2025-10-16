C_LONGINT:C283($i; $j; $vl_id; $vl_groupid; $vl_groupid2)
C_PICTURE:C286(vb_1)
C_BLOB:C604($vx_blob)

Case of 
	: (Form event code:C388=On Load:K2:1)
		
		ME_ReadCodeStyles
		
		vz_1:=123.45
		vz_2:=vz_1
		
		ARRAY TEXT:C222($tt_formatlist; 2)
		$tt_formatlist{1}:="###,##0.00"
		$tt_formatlist{2}:="###,##0"
		
		hmRep_SET FORMAT LIST(eExt1; $tt_formatlist)
		
		hmRep_SET VARIABLE(eExt1; "my_dynamic_variable"; Is longint:K8:6; ""; 123; !00-00-00!)
		
		hmRep_SET VARIABLE(eExt1; "meine_variable"; Is text:K8:3; "value text"; 0; !00-00-00!)
		
		hmRep_DELETE VSTRUCTURE(eExt1; 0)
		
		$vl_groupid:=hmRep_Create VStructure Group(eExt1; "Group Of Variables")
		
		$vl_id:=hmRep_Create VStructure Var(eExt1; "meine_variable1"; "meine_variable1")
		hmRep_SET VSTRUCTURE PROPERTY(eExt1; $vl_id; hmRep_vprop_GroupID; $vl_groupid; "")
		
		$vl_id:=hmRep_Create VStructure Var(eExt1; "meine_variable2"; "meine_variable2")
		hmRep_SET VSTRUCTURE PROPERTY(eExt1; $vl_id; hmRep_vprop_GroupID; $vl_groupid; "")
		
		$vl_id:=hmRep_Create VStructure Var(eExt1; "meine_variable3"; "meine_variable3")
		
		$vl_id:=hmRep_Create VStructure Meth(eExt1; "exec_testmethod"; "exec_testmethod_caption")
		
		
		If (True:C214)
			
			ARRAY TEXT:C222($tt_vars; 0)
			hmRep_GET VARIABLE LIST(eExt1; $tt_vars)
			
			//hmRep_DELETE VARIABLE (eExt1;"my_dynamic_variable")
			//ARRAY TEXT($tt_vars;0)
			//hmRep_GET VARIABLE LIST (eExt1;$tt_vars)
			
			hmRep_SET AREA PROPERTY(eExt1; hmRep_prop_Pagelist; 0; "")
			hmRep_SET AREA PROPERTY(eExt1; hmRep_prop_Toolbar; 0; "")
			
			hmRep_SET AREA PROPERTY(eExt1; hmRep_prop_ObjectOutside; 0; "")
			hmRep_SET AREA PROPERTY(eExt1; hmRep_prop_OldScriptCreation; 1; "")
			hmRep_SET AREA PROPERTY(eExt1; hmRep_prop_MaxUndos; -1; "")
			
			hmRep_SET EVENT STATE(eExt1; hmRep_OnOutsideDrop; 1)
			
			hmRep_SET SECTION PROPERTY(eExt1; 1; 1; hmRep_sprop_Name; 0; "Testname")
			hmRep_INSTALL CALLBACK(eExt1; "Callback")
			
			//hmRep_SET REPORT PROPERTY (eExt1;hmRep_rprop_ShowSections ;0;"")
			//hmRep_SET REPORT PROPERTY (eExt1;hmRep_rprop_ShowSecCapt ;0;"")
			//hmRep_SET REPORT PROPERTY (eExt1;hmRep_rprop_ShowSecLines ;0;"")
			
			//$vl_id:=hmRep_Create Layer (eExt1;"Testlayer2")
			//$vl_id:=hmRep_Create Layer (eExt1;"Testlayer3")
			//$vl_id:=hmRep_Create Layer (eExt1;"Testlayer4")
			//
			//$vl_id:=hmRep_Create Rectangle (eExt1;100;100;500;500)
			//hmRep_SET CURRENT LAYER (eExt1;2)
			//$vl_id:=hmRep_Create Rectangle (eExt1;100;100;500;500)
			//
			//hmRep_SET PROPERTY BY NAME (eExt1;hmRep_scope_Object ;$vl_id;"myprop1";"myvalue1")
			//hmRep_SET PROPERTY BY NAME (eExt1;hmRep_scope_Object ;$vl_id;"myprop2";"myvalue2")
			//hmRep_SET PROPERTY BY NAME (eExt1;hmRep_scope_Object ;$vl_id;"myprop3";"myvalue3")
			
			$vl_groupid:=0
			$vl_groupid2:=0
			
			$vl_id:=hmRep_Create VStructure Meth(eExt1; "exec_testmethod"; "exec_testmethod_caption")
			
			
			//$vl_groupid:=hmRep_Create VStructure Group (eExt1;"Tables 1-3")
			$vl_groupid2:=hmRep_Create VStructure Group(eExt1; "Group Of Variables")
			
			$vl_id:=hmRep_Create VStructure Var(eExt1; "vt_1"; "vt_1_caption")
			hmRep_SET VSTRUCTURE PROPERTY(eExt1; $vl_id; hmRep_vprop_GroupID; $vl_groupid2; "")
			
			$vl_id:=hmRep_Create VStructure Var(eExt1; "vl_1"; "vl_1_caption")
			hmRep_SET VSTRUCTURE PROPERTY(eExt1; $vl_id; hmRep_vprop_GroupID; $vl_groupid2; "")
			
			
			For ($i; 1; Get last table number:C254)
				
				If (Is table number valid:C999($i))
					
					$vl_id:=hmRep_Create VStructure Table(eExt1; $i; Table name:C256($i)+"_caption")
					
					If ($i<4)
						
						hmRep_SET VSTRUCTURE PROPERTY(eExt1; $vl_id; hmRep_vprop_GroupID; $vl_groupid; "")
						
					End if 
					
					For ($j; 1; Get last field number:C255($i))
						
						If (Is field number valid:C1000($i; $j))
							$vl_id:=hmRep_Create VStructure Field(eExt1; $i; $j; Field name:C257($i; $j)+"_caption")
							hmRep_SET VSTRUCTURE PROPERTY(eExt1; $vl_id; hmRep_vprop_Description; 0; "Description of "+Field name:C257($i; $j)+"_caption")
							
						End if 
						
					End for 
					
				End if 
				
			End for 
			
			SET BLOB SIZE:C606($vx_blob; 0)
			//DOCUMENT TO BLOB("Macintosh HD:4D:C-Entwicklung:XCode_hmReports:4_0:Forms:test.hmReports";$vx_blob)
			//DOCUMENT TO BLOB("Macintosh HD:4D:C-Entwicklung:XCode_hmReports:3_0:Issues:017 Eisel:raumplan löw.hmReports";$vx_blob)
			//hmRep_BLOB TO REPORT (eExt1;hmRep_Import_hmReports;$vx_blob)
			
		End if 
		
		hmRep_Palette_Install("vl_palette"; eExt1)
		
	: (Form event code:C388=On Close Box:K2:21)
		CANCEL:C270
		
End case 
