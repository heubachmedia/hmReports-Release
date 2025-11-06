//%attributes = {"preemptive":"capable"}
#DECLARE($vl_color8bit : Integer; $vp_red16bit : Pointer; $vp_green16bit : Pointer; $vp_blue16bit : Pointer)

$vp_red16bit->:=($vl_color8bit & 0x00FF0000) >> 8
$vp_green16bit->:=($vl_color8bit & 0xFF00)
$vp_blue16bit->:=($vl_color8bit & 0x00FF) << 8
