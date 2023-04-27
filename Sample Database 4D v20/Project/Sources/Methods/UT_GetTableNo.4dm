//%attributes = {}
C_TEXT:C284($vt_tablename)
C_LONGINT:C283($vl_tableno)

$vt_tablename:=$1

$vl_tableno:=0

Begin SQL
	SELECT
	TABLE_ID
	FROM
	_USER_TABLES
	WHERE
	TABLE_NAME=:$vt_tablename
	INTO
	:$vl_tableno;
End SQL

$0:=$vl_tableno
