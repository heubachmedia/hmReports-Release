//%attributes = {}
C_LONGINT:C283($vl_color8bit)
C_POINTER:C301($vp_red16bit; $vp_green16bit; $vp_blue16bit)

$vl_color8bit:=$1
$vp_red16bit:=$2
$vp_green16bit:=$3
$vp_blue16bit:=$4

$vp_red16bit->:=($vl_color8bit & 0x00FF0000) >> 8
$vp_green16bit->:=($vl_color8bit & 0xFF00)
$vp_blue16bit->:=($vl_color8bit & 0x00FF) << 8
