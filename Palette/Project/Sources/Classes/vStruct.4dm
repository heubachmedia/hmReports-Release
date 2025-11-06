property type; groupID; tableno; fieldno; id : Integer
property caption; variable : Text
property inList : Boolean

Class constructor($vl_area : Integer; $vl_id : Integer)
	
	This:C1470.id:=$vl_id
	This:C1470.type:=intern_GetVStrucPropertyLong($vl_area; $vl_id; hmRep_vprop_Type)
	This:C1470.caption:=intern_GetVStrucPropertyText($vl_area; $vl_id; hmRep_vprop_Caption)
	This:C1470.groupID:=intern_GetVStrucPropertyLong($vl_area; $vl_id; hmRep_vprop_GroupID)
	This:C1470.tableno:=0
	This:C1470.fieldno:=0
	This:C1470.variable:=""
	This:C1470.inList:=intern_GetVStrucPropertyLong($vl_area; $vl_id; hmRep_vprop_InList)=1
	
	Case of 
		: (This:C1470.type=hmRep_vstruc_Table) | (This:C1470.type=hmRep_vstruc_Field)
			This:C1470.tableno:=intern_GetVStrucPropertyLong($vl_area; $vl_id; hmRep_vprop_TableNo)
			This:C1470.fieldno:=intern_GetVStrucPropertyLong($vl_area; $vl_id; hmRep_vprop_FieldNo)
			
		: (This:C1470.type=hmRep_vstruc_Variable)
			This:C1470.variable:=intern_GetVStrucPropertyText($vl_area; $vl_id; hmRep_vprop_Variable)
			
		: (This:C1470.type=hmRep_vstruc_Group)
			
	End case 
	