//%attributes = {}
var $i : Integer

TRUNCATE TABLE:C1051([Customers:1])

For ($i; 1; 100)
	
	CREATE RECORD:C68([Customers:1])
	[Customers:1]Name:2:="Customer name #"+String:C10($i; "000")
	[Customers:1]City:4:="Customer city #"+String:C10($i; "000")
	[Customers:1]Street:3:="Customer street #"+String:C10($i; "000")
	SAVE RECORD:C53([Customers:1])
	
End for 

UNLOAD RECORD:C212([Customers:1])

TRACE:C157
