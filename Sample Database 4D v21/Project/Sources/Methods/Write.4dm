//%attributes = {"shared":true}
//{$1=Pointer auf Datei(en)}

var $vp_datei : Pointer
var $i; $vl_count_parameters : Integer
var $vt_method : Text

$vl_count_parameters:=Count parameters:C259

If (Application type:C494=4D Server:K5:6) | (Application type:C494=4D Remote mode:K5:5)  //nur Client/Server
	
	$vt_method:=Method called on error:C704
	ON ERR CALL:C155("intern_ERR_Ignore")
	
	//C 04.12.08
	//Beim v11.3 Client/Server:
	//Nach CANCEL TRANSACTION wird ggf. eine gültige record number zurückgegeben
	//Danach schlägt LOAD RECORD fehl.
	
	//ACI0060102: Record Number after CANCEL TRANSACTION
	
End if 

If ($vl_count_parameters>0)
	
	For ($i; 1; $vl_count_parameters)
		$vp_datei:=${$i}
		READ WRITE:C146($vp_datei->)
		
		If (Record number:C243($vp_datei->)>=0)
			LOAD RECORD:C52($vp_datei->)
		End if 
		
	End for 
	
Else 
	
	READ WRITE:C146(*)
	
	For ($i; 1; Last table number:C254)
		
		If (Is table number valid:C999($i))  //C 06.03.09
			
			$vp_datei:=Table:C252($i)
			
			If (Record number:C243($vp_datei->)>=0)
				LOAD RECORD:C52($vp_datei->)
			End if 
			
		End if 
		
	End for 
	
End if 

If (Application type:C494=4D Server:K5:6) | (Application type:C494=4D Remote mode:K5:5)  //nur Client/Server
	ON ERR CALL:C155($vt_method)
End if 
