## Iteration Types

### hmRep_Iteration_Table (0)
The iteration is a 4D table. Pass the table number in the parameter *valueLong*.

### hmRep_Iteration_SQL (1)
The iteration is a tables defined by SQL. Pass the table name in the parameter *valueText*.

### hmRep_Iteration_Array (2)
The iteration is the size of an array. Pass the array name in the parameter *valueText*.
If you use a 2D array, you have to get/pass the index of the first dimension into *valueLong*.

### hmRep_Iteration_Variable (3)
The iteration is the value of a variable. Pass the variable name in the parameter *valueText*.

### hmRep_Iteration_Fixed (4)
The iteration is a fixed value. Pass the number of iterations in the parameter *valueLong*.
