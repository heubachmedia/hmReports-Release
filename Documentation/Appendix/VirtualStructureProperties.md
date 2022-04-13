## Virtual Structure Properties

### hmRep_vprop_Type (1)
The parameter *valueLong* returns the type of the Virtual Structure Item. The property can be read only.
Possible types:
* 1=Table
* 2=Field
* 3=Variable
* 4=Group
* 5=Method

### hmRep_vprop_TableNo (2)
The parameter *valueLong* gets/sets the table number of an item.

### hmRep_vprop_FieldNo (3)
The parameter *valueLong* gets/sets the field number of an item.

### hmRep_vprop_Variable (4)
The parameter *valueText* gets/sets the variable name of an item.

### hmRep_vprop_Caption (5)
The parameter *valueText* gets/sets the caption name of an item.

### hmRep_vprop_Description (6)
The parameter *valueText* gets/sets the description of an item.

### hmRep_vprop_InList (7)
The parameter *valueLong* defines, if a Virtual Structure item is visible in the "Variables and Fields" List of hmReports. Set *1* for visible, otherwise the item is invisible. Standard is *1*.

### hmRep_vprop_GroupID (8)
The parameter *valueLong* defines the group id in which the item belongs to. If the value is *0*, the item belongs to no group.
