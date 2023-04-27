//%attributes = {}
C_LONGINT:C283($i; $j; $k; $vl_machines; $vl_pieces; $vl_day)

TRUNCATE TABLE:C1051([Regions:6])
TRUNCATE TABLE:C1051([Machines:7])
TRUNCATE TABLE:C1051([Pieces:2])

For ($i; 1; 50)
	
	CREATE RECORD:C68([Regions:6])
	[Regions:6]Name:2:="Region "+String:C10($i; "00")
	SAVE RECORD:C53([Regions:6])
	
	$vl_machines:=10+(Random:C100%20)
	
	For ($j; 1; $vl_machines)
		
		CREATE RECORD:C68([Machines:7])
		[Machines:7]Region_ID:3:=[Regions:6]ID:1
		[Machines:7]Name:2:="Machine "+String:C10($j; "00")
		SAVE RECORD:C53([Machines:7])
		
		$vl_pieces:=100+(Random:C100%200)
		
		For ($k; 1; $vl_pieces)
			
			$vl_day:=Random:C100%30
			
			CREATE RECORD:C68([Pieces:2])
			[Pieces:2]Machine_ID:4:=[Machines:7]ID:1
			[Pieces:2]Count:2:=1+(Random:C100%1000)
			[Pieces:2]Date:3:=!2012-01-01!+$vl_day
			SAVE RECORD:C53([Pieces:2])
			
		End for 
		
	End for 
	
End for 

BEEP:C151

