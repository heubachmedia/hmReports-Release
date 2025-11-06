//%attributes = {}
var $vp_object_id; $vp_object_name : Pointer

ALL RECORDS:C47([Reports:11])
ORDER BY:C49([Reports:11]; [Reports:11]Name:3; >)

$vp_object_id:=OBJECT Get pointer:C1124(Object named:K67:5; "tl_reports")
$vp_object_name:=OBJECT Get pointer:C1124(Object named:K67:5; "tt_reports")

//%W-518.5
ARRAY LONGINT:C221($vp_object_id->; 0)
ARRAY TEXT:C222($vp_object_name->; 0)
//%W+518.5

//%W-518.2
SELECTION TO ARRAY:C260([Reports:11]ID:1; $vp_object_id->; [Reports:11]Name:3; $vp_object_name->)
//%W+518.2
