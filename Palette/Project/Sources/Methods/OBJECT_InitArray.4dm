//%attributes = {}
//qqq;a;PM;OBJECT_InitArray;C;0001

//Created: C 18.04.11 15:51   projektis 3.2 r 03

#DECLARE($vt_object : Text; $vl_typ : Integer)->$vp_object : Pointer

$vp_object:=OBJECT Get pointer:C1124(Object named:K67:5; $vt_object)

If (Not:C34(Is nil pointer:C315($vp_object)))
	
	Case of 
		: ($vl_typ=Text array:K8:16)
			ARRAY TEXT:C222($vp_object->; 0)
			
		: ($vl_typ=LongInt array:K8:19)
			ARRAY LONGINT:C221($vp_object->; 0)
			
		: ($vl_typ=Integer array:K8:18)
			ARRAY INTEGER:C220($vp_object->; 0)
			
		: ($vl_typ=Real array:K8:17)
			ARRAY REAL:C219($vp_object->; 0)
			
		: ($vl_typ=Date array:K8:20)
			ARRAY DATE:C224($vp_object->; 0)
			
	End case 
	
End if 
