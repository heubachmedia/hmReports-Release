//%attributes = {}
C_TEXT:C284($vt_path; $vt_bildname)
C_PICTURE:C286($vb_picture)

$vt_bildname:=$1

$vt_path:=Get 4D folder:C485(Current resources folder:K5:16)+"Pictures"+Folder separator:K24:12+$vt_bildname+".png"

If (Test path name:C476($vt_path)=Is a document:K24:1)
	READ PICTURE FILE:C678($vt_path; $vb_picture)
End if 

$0:=$vb_picture
