//%attributes = {"preemptive":"capable"}
#DECLARE($vl_red16bit : Integer; $vl_green16bit : Integer; $vl_blue16bit : Integer) : Integer

return ((($vl_red16bit >> 8) << 16)+(($vl_green16bit >> 8) << 8)+($vl_blue16bit >> 8))
