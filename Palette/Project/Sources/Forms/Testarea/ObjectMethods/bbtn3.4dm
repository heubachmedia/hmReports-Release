
//C_PICTURE($vb_picture)
//
//$vb_picture:=hmRep_Report To Picture (eExt1;hmRep_PicType_SVG)
//SET PICTURE TO PASTEBOARD($vb_picture)

//C_TEXT($vt_path)
//C_LONGINT($vl_milliseconds)
//
//$vt_path:="Macintosh HD:4D:C-Entwicklung:XCode_hmReports:3_0:_Releases:3.x:Sample Database 4D v13:Resources:008_presentation_document.svg"
//$vt_path:="Macintosh HD:4D:C-Entwicklung:XCode_hmReports:3_0:_Releases:3.x:Sample Database 4D v13:Resources:Super_Bowl_XLV.svg"
//
//SET BLOB SIZE($vx_blob;0)
//DOCUMENT TO BLOB($vt_path;$vx_blob)
//
//$vl_milliseconds:=Milliseconds
//
//  //hmRep_BLOB TO REPORT (eExt1;6;$vx_blob)
//hmRep_BLOB TO REPORT (eExt1;hmRep_Import_SVG;$vx_blob)
//
//ALERT(String(Milliseconds-$vl_milliseconds))


//C_LONGINT($vl_area)
//C_BLOB($vx_script)
//C_TEXT($vt_text)
//
//$vl_area:=eExt1
//ARRAY LONGINT(tl_long;2)
//tl_long{1}:=2
//tl_long{2}:=2
//
//hmRep_SET OBJECT LINEDASH ($vl_area;20;0;tl_long)


//$vt_text:=hmRep_Render To HTML ($vl_area;0)
//
//SET TEXT TO PASTEBOARD($vt_text)

//SET BLOB SIZE($vx_script;0)
//hmRep_GET TOKENIZED SCRIPT ($vl_area;0;9;$vx_script)
//
//$vt_text:=hmRep_Detokenize ($vl_area;$vx_script)
//
//SET BLOB SIZE($vx_script2;0)
//hmRep_TOKENIZE ($vl_area;$vt_text;$vx_script2)

//CompRep_extern8_1 (eExt1)

//C_LONGINT($vl_area;$vl_id)
//
//$vl_area:=eExt1
//
//$vl_id:=hmRep_Create Line ($vl_area;100;200;181;217)
//
//ARRAY REAL($tz_dashes;6)
//$tz_dashes{1}:=5
//$tz_dashes{2}:=1
//$tz_dashes{3}:=4
//$tz_dashes{4}:=1
//$tz_dashes{5}:=3
//$tz_dashes{6}:=1
//
//hmRep_SET OBJECT LINEDASH ($vl_area;$vl_id;2;$tz_dashes)
//$vt_subreport:=hmRep_Create Report ($vl_area;0;0;"My Subreport")
//
//$vt_currentreport:=hmRep_Get Current Report ($vl_area)
//
//hmRep_SET CURRENT REPORT ($vl_area;$vt_subreport)
//
//$vl_id:=hmRep_Create Picture ($vl_area;50;50;400;400)
//
//READ PICTURE FILE(Get 4D folder(Current Resources folder)+"testpic1.jpg";$vb_1)
//hmRep_SET PICTURE ($vl_area;$vl_id;$vb_1)
//
//hmRep_SET CURRENT REPORT ($vl_area;$vt_currentreport)
//
//$vl_id:=hmRep_Create Subreport ($vl_area;100;100;300;300;$vt_subreport)
//
//ARRAY LONGINT($tl_dep_scopes;0)
//ARRAY LONGINT($tl_dep_ID;0)
//ARRAY TEXT($tt_dep_uuid;0)
//
//hmRep_GET REPORT DEPENDENCIES ($vl_area;$tl_dep_scopes;$tl_dep_ID;$tt_dep_uuid)
