//%attributes = {}
//Wird auch in den Objectproperties DIALOG benutzt!!!

C_LONGINT:C283($i; $vl_size; $vl_area; vl_hl_referencelist; vl_hl_referencelist2; $vl_pos; $vl_pos2; $vl_list_with_tables; $vl_list_with_fields; $vl_list_with_variables; $vl_reflist_number; $vl_reflist; $vl_listgroup)
C_PICTURE:C286($vb_icon)

$vl_area:=$1
$vl_reflist_number:=$2

OBJECT_SetLongint("vl_current_area"; $vl_area)

If ($vl_reflist_number=1)
	
	If (Is a list:C621(vl_hl_referencelist))
		CLEAR LIST:C377(vl_hl_referencelist; *)
	End if 
	
	vl_hl_referencelist:=New list:C375
	$vl_reflist:=vl_hl_referencelist
	
Else 
	
	If (Is a list:C621(vl_hl_referencelist2))
		CLEAR LIST:C377(vl_hl_referencelist2; *)
	End if 
	
	vl_hl_referencelist2:=New list:C375
	$vl_reflist:=vl_hl_referencelist2
	
End if 

ARRAY LONGINT:C221($tl_vstructure; 0)
ARRAY INTEGER:C220($tg_vstructure_type; 0)
ARRAY INTEGER:C220($tg_vstructure_tableno; 0)
ARRAY INTEGER:C220($tg_vstructure_fieldno; 0)
ARRAY TEXT:C222($tt_vstructure_variable; 0)
ARRAY TEXT:C222($tt_vstructure_caption; 0)
ARRAY LONGINT:C221($tl_vstructure_groupdID; 0)

hmRep_GET VSTRUCTURE LIST($vl_area; $tl_vstructure)

$vl_size:=Size of array:C274($tl_vstructure)

ARR_Resize(->$tg_vstructure_type; $vl_size)
ARR_Resize(->$tg_vstructure_tableno; $vl_size)
ARR_Resize(->$tg_vstructure_fieldno; $vl_size)
ARR_Resize(->$tt_vstructure_variable; $vl_size)
ARR_Resize(->$tt_vstructure_caption; $vl_size)
ARR_Resize(->$tl_vstructure_groupdID; $vl_size)

For ($i; 1; $vl_size)
	
	$tg_vstructure_type{$i}:=intern_GetVStrucPropertyLong($vl_area; $tl_vstructure{$i}; hmRep_vprop_Type)
	$tt_vstructure_caption{$i}:=intern_GetVStrucPropertyText($vl_area; $tl_vstructure{$i}; hmRep_vprop_Caption)
	$tl_vstructure_groupdID{$i}:=intern_GetVStrucPropertyLong($vl_area; $tl_vstructure{$i}; hmRep_vprop_GroupID)
	
	Case of 
		: ($tg_vstructure_type{$i}=hmRep_vstruc_Table) | ($tg_vstructure_type{$i}=hmRep_vstruc_Field)
			
			$tg_vstructure_tableno{$i}:=intern_GetVStrucPropertyLong($vl_area; $tl_vstructure{$i}; hmRep_vprop_TableNo)
			$tg_vstructure_fieldno{$i}:=intern_GetVStrucPropertyLong($vl_area; $tl_vstructure{$i}; hmRep_vprop_FieldNo)
			
		: ($tg_vstructure_type{$i}=hmRep_vstruc_Variable)
			
			$tt_vstructure_variable{$i}:=intern_GetVStrucPropertyText($vl_area; $tl_vstructure{$i}; hmRep_vprop_Variable)
			
		: ($tg_vstructure_type{$i}=hmRep_vstruc_Group)
			
			
	End case 
	
End for 

For ($i; $vl_size; 1; -1)
	
	If (intern_GetVStrucPropertyLong($vl_area; $tl_vstructure{$i}; hmRep_vprop_InList)=0)
		
		DELETE FROM ARRAY:C228($tl_vstructure; $i)
		DELETE FROM ARRAY:C228($tg_vstructure_type; $i)
		DELETE FROM ARRAY:C228($tg_vstructure_tableno; $i)
		DELETE FROM ARRAY:C228($tg_vstructure_fieldno; $i)
		DELETE FROM ARRAY:C228($tt_vstructure_variable; $i)
		DELETE FROM ARRAY:C228($tt_vstructure_caption; $i)
		DELETE FROM ARRAY:C228($tl_vstructure_groupdID; $i)
		
	End if 
	
End for 

$vl_list_with_tables:=0

//Tabellengruppen

ARRAY LONGINT:C221($tl_hlist_groupID; 0)
ARRAY LONGINT:C221($tl_hlist_group4Dref; 0)

$vl_pos:=0

Repeat 
	
	$vl_pos:=Find in array:C230($tg_vstructure_type; hmRep_vstruc_Table; $vl_pos+1)
	
	If ($vl_pos>0)
		
		If ($tl_vstructure_groupdID{$vl_pos}>0)
			
			If (Find in array:C230($tl_hlist_groupID; $tl_vstructure_groupdID{$vl_pos})=-1)
				
				$vl_pos2:=Find in array:C230($tl_vstructure; $tl_vstructure_groupdID{$vl_pos})
				
				If ($vl_pos2>0)
					
					$vl_listgroup:=New list:C375
					
					APPEND TO ARRAY:C911($tl_hlist_groupID; $tl_vstructure{$vl_pos2})
					APPEND TO ARRAY:C911($tl_hlist_group4Dref; $vl_listgroup)
					
					If ($vl_list_with_tables=0)
						
						$vl_list_with_tables:=New list:C375
						
					End if 
					
					APPEND TO LIST:C376($vl_list_with_tables; $tt_vstructure_caption{$vl_pos2}; $tl_vstructure{$vl_pos2}; $vl_listgroup; True:C214)
					
				End if 
				
			End if 
			
		End if 
		
	End if 
	
Until ($vl_pos=-1)


//Tabellen

$vl_pos:=0

Repeat 
	
	$vl_pos:=Find in array:C230($tg_vstructure_type; hmRep_vstruc_Table; $vl_pos+1)
	
	If ($vl_pos>0)
		
		If (Length:C16($tt_vstructure_caption{$vl_pos})>0)
			
			$vl_list_with_fields:=0
			
			$vl_pos2:=0
			
			Repeat 
				
				$vl_pos2:=ARR_Find2InArray(->$tg_vstructure_type; ->$tg_vstructure_tableno; hmRep_vstruc_Field; $tg_vstructure_tableno{$vl_pos}; $vl_pos2+1)
				
				If ($vl_pos2>0)
					
					If ($tt_vstructure_caption{$vl_pos2}#"")
						
						If ($vl_list_with_fields=0)
							
							$vl_list_with_fields:=New list:C375
							
						End if 
						
						APPEND TO LIST:C376($vl_list_with_fields; $tt_vstructure_caption{$vl_pos2}; $tl_vstructure{$vl_pos2}; 0; True:C214)
						
						$vb_icon:=intern_GetFieldPicture($tg_vstructure_tableno{$vl_pos2}; $tg_vstructure_fieldno{$vl_pos2})
						SET LIST ITEM ICON:C950($vl_list_with_fields; $tl_vstructure{$vl_pos2}; $vb_icon)
						
					End if 
					
				End if 
				
			Until ($vl_pos2=-1)
			
			If ($tl_vstructure_groupdID{$vl_pos}>0)
				
				$vl_pos2:=Find in array:C230($tl_hlist_groupID; $tl_vstructure_groupdID{$vl_pos})
				
				If ($vl_pos2>0)
					$vl_listgroup:=$tl_hlist_group4Dref{$vl_pos2}
					APPEND TO LIST:C376($vl_listgroup; $tt_vstructure_caption{$vl_pos}; $tl_vstructure{$vl_pos}; $vl_list_with_fields; True:C214)
				End if 
				
			Else 
				
				If ($vl_list_with_tables=0)
					
					$vl_list_with_tables:=New list:C375
					
				End if 
				
				APPEND TO LIST:C376($vl_list_with_tables; $tt_vstructure_caption{$vl_pos}; $tl_vstructure{$vl_pos}; $vl_list_with_fields; True:C214)
				
			End if 
			
		End if 
		
	End if 
	
Until ($vl_pos=-1)

APPEND TO LIST:C376($vl_reflist; Get localized string:C991("interne_datenbank"); -1; $vl_list_with_tables; True:C214)

$vb_icon:=intern_GetPicture("database")
SET LIST ITEM ICON:C950($vl_reflist; -1; $vb_icon)

//Variablengruppen

$vl_list_with_variables:=0

ARRAY LONGINT:C221($tl_hlist_groupID; 0)
ARRAY LONGINT:C221($tl_hlist_group4Dref; 0)

$vl_pos:=0

Repeat 
	
	$vl_pos:=Find in array:C230($tg_vstructure_type; hmRep_vstruc_Variable; $vl_pos+1)
	
	If ($vl_pos>0)
		
		If ($tl_vstructure_groupdID{$vl_pos}>0)
			
			If (Find in array:C230($tl_hlist_groupID; $tl_vstructure_groupdID{$vl_pos})=-1)
				
				$vl_pos2:=Find in array:C230($tl_vstructure; $tl_vstructure_groupdID{$vl_pos})
				
				If ($vl_pos2>0)
					
					$vl_listgroup:=New list:C375
					
					APPEND TO ARRAY:C911($tl_hlist_groupID; $tl_vstructure{$vl_pos2})
					APPEND TO ARRAY:C911($tl_hlist_group4Dref; $vl_listgroup)
					
					If ($vl_list_with_variables=0)
						
						$vl_list_with_variables:=New list:C375
						
					End if 
					
					APPEND TO LIST:C376($vl_list_with_variables; $tt_vstructure_caption{$vl_pos2}; $tl_vstructure{$vl_pos2}; $vl_listgroup; True:C214)
					
				End if 
				
			End if 
			
		End if 
		
	End if 
	
Until ($vl_pos=-1)

//Variablen

$vl_pos:=0

Repeat 
	
	$vl_pos:=Find in array:C230($tg_vstructure_type; hmRep_vstruc_Variable; $vl_pos+1)
	
	If ($vl_pos>0)
		
		If ($tt_vstructure_caption{$vl_pos}#"")
			
			If ($tl_vstructure_groupdID{$vl_pos}>0)
				
				$vl_pos2:=Find in array:C230($tl_hlist_groupID; $tl_vstructure_groupdID{$vl_pos})
				
				If ($vl_pos2>0)
					$vl_listgroup:=$tl_hlist_group4Dref{$vl_pos2}
					APPEND TO LIST:C376($vl_listgroup; $tt_vstructure_caption{$vl_pos}; $tl_vstructure{$vl_pos}; 0; True:C214)
				End if 
				
			Else 
				
				If ($vl_list_with_variables=0)
					
					$vl_list_with_variables:=New list:C375
					
				End if 
				
				APPEND TO LIST:C376($vl_list_with_variables; $tt_vstructure_caption{$vl_pos}; $tl_vstructure{$vl_pos}; 0; True:C214)
				
			End if 
			
		End if 
		
	End if 
	
Until ($vl_pos=-1)

APPEND TO LIST:C376($vl_reflist; Get localized string:C991("Variablen"); -1; $vl_list_with_variables; True:C214)

SET LIST PROPERTIES:C387($vl_reflist; _o_Ala Macintosh:K28:1; 0; 16; 1; 0; 0)
