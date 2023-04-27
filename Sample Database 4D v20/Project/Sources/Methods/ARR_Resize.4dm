//%attributes = {}
//qqq;a;PM;ARR_Resize;C;0004

//$1=Pointer auf ein Array
//$2=Größe

C_POINTER:C301($vp_arrayptr)
C_LONGINT:C283($vl_destsize; $vl_currarraysize)

$vp_arrayptr:=$1
$vl_destsize:=$2

$vl_currarraysize:=Size of array:C274($vp_arrayptr->)

Case of 
	: ($vl_destsize>$vl_currarraysize)
		INSERT IN ARRAY:C227($vp_arrayptr->; $vl_currarraysize+1; $vl_destsize-$vl_currarraysize)
		
	: ($vl_destsize<$vl_currarraysize)
		DELETE FROM ARRAY:C228($vp_arrayptr->; $vl_destsize+1; $vl_currarraysize-$vl_destsize)
		
	: ($vl_destsize=$vl_currarraysize)
		//do nothing
		
	Else 
		//do nothing
		
End case 
