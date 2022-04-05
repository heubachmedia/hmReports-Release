## hmRep_SET OBJECT DATA ( Area ; objectID ; dataType ; database ; table ; field ; variablename ; arrayindex)
###### Introduced in v6.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object-id
|DataType|Longint|→|datatype
|Database|Text|→|database
|Table|Text|→|name of the table
|Field|Text|→|name of the field
|Variablename|Text|→|variable name
|Arrayindex|Longint|→|index of the array-element

### Description
The command *hmRep_SET OBJECT DATA* sets the data binding for an object defined by the parameter *objectID*.

You can use the following datatypes:

### hmRep_ObjData_None (0)
Sets the object to a non-binding object. Pass in all other parameters zero values.

### hmRep_ObjData_4DInternal (1)
Sets the object to a 4D field. Pass the tablename and fieldname into the parameters *table* and *field*.

### hmRep_ObjData_SQL (2)
Sets the object to SQL. Pass the tablename and fieldname into the parameters *table* and *field*.

### hmRep_ObjData_Variable (3)
Sets the object to a variable. Pass the variablename into the parameter *variablename*.

### hmRep_ObjData_Array (4)
Sets the object to an array. Pass the array/variablename into the parameter *variablename* and the index into the parameter *arrayindex*.

### hmRep_ObjData_Formula (5)
Sets the object to formula. That means, that the object source is the object script defined by *$0*. Keep in mind, that you have to declare *$0* with compiler commands (C...)!
