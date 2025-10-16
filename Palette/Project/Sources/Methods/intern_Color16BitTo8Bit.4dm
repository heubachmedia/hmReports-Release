//%attributes = {}
C_LONGINT:C283($vl_color8bit; $vl_red16bit; $vl_green16bit; $vl_blue16bit)

$vl_red16bit:=$1
$vl_green16bit:=$2
$vl_blue16bit:=$3

$vl_color8bit:=(($vl_red16bit >> 8) << 16)+(($vl_green16bit >> 8) << 8)+($vl_blue16bit >> 8)

$0:=$vl_color8bit
