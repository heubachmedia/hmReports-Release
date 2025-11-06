property area : Integer
property list : Collection
property listCurrent : cs:C1710.layer

Class constructor($vl_area : Integer)
	This:C1470.area:=$vl_area
	This:C1470.list:=[]
	This:C1470.listCurrent:=Null:C1517
	
Function update()
	var $i : Integer
	
	ARRAY LONGINT:C221($tl_layerIDs; 0)
	ARRAY TEXT:C222($tt_layernames; 0)
	
	hmRep_GET LAYER LIST(This:C1470.area; $tl_layerIDs; $tt_layernames)
	
	This:C1470.list:=[]
	
	For ($i; 1; Size of array:C274($tl_layerIDs))
		
		This:C1470.list.push(cs:C1710.layer.new(This:C1470.area; $tl_layerIDs{$i}))
		
	End for 
	
	This:C1470.list:=This:C1470.list
	
Function newLayer()
	var $vc_list : Collection
	var $vl_layer_id; $vl_line : Integer
	
	$vl_layer_id:=hmRep_Create Layer(This:C1470.area; "")
	
	This:C1470.update()
	
	$vc_list:=This:C1470.list.indices("id == :1"; $vl_layer_id)
	
	If ($vc_list.length>0)
		
		$vl_line:=$vc_list.first()+1
		
		LISTBOX SELECT ROW:C912(*; "tf_listbox_layerlist"; $vl_line)
		EDIT ITEM:C870(*; "tt_layer_name"; $vl_line)
		
	End if 
	
Function deleteLayer()
	
	If (This:C1470.listCurrent#Null:C1517)
		
		If (intern_confirm("msg_delete_layer"))
			
			If (This:C1470.listCurrent.id=hmRep_Get Current Layer(This:C1470.area))
				
				intern_Alert("msg_cannot_delete_active_layer")
				
			Else 
				
				hmRep_DELETE LAYER(This:C1470.area; This:C1470.listCurrent.id)
				This:C1470.update()
				
			End if 
			
		End if 
		
	End if 
	