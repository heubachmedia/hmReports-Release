## hmX_DETOKENIZE TO ARRAYS (Script ; arrayType ; arrayNum ; arrayText ; arrayDate)
###### Introduced in v3.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Script|Blob/Object|→|Script code
|ArrayType|ARRAY LONGINT|←|Token types
|ArrayNum|ARRAY REAL|←|Token real numbers
|ArrayText|ARRAY TEXT|←|Token texts
|ArrayDate|ARRAY DATE|←|Token dates

### Description
The command *hmX_DETOKENIZE TO ARRAYS* returns four synchronized arrays with information about each token within the *blob*. The size of these arrays are the count of the tokens.
The *arrayType* returns the type of the token. According to each type, the arrays *arrayNum*, *arrayText* or *arrayDate* returns information about each token.

List of tokens:

* 1 = New line
* 2 = Process variable, *arrayText* contains the variable name
* 3 = Local variable, *arrayText* contains the variable name without *$*
* 4 = Interprocess variable, *arrayText* contains the variable name without *<>*
* 5 = Assignment
* 6 = Number, *arrayNum* returns the number
* 7 = Backet open
* 8 = Backet close
* 9 = Formula, *arrayNum* returns the formula: 1 = plus, 2 = minus, 3 = multiplication, 4 = division
* 10 = Text, *arrayText* contains the text
* 11 = Comment, *arrayText* contains the comment
* 12 = 4D Command, *arrayNum* contains the command id
* 13 = Parameter open
* 14 = Parameter close
* 15 = Semicolon
* 16 = Date, *arrayDate* contains the date
* 17 = Time, *arrayNum* contains the time in seconds
* 18 = Boolean, *arrayNum* contains 1 for True, 0 for False
* 19 = Comparison, *arrayNum* returns 1 for <=, 2 = >=, 3 = =, 4 = #, 5 = <, 6 = >
* 20 = Operation, *arrayNum*return 1 for & (and) and 2 for | (or)
* 21 = Table, *arrayNum* contains the table number
* 22 = Field, *arrayNum* contains the table number in the higher word (0xFFFF0000) and the field number in the lower word (0x0000FFFF)
* 23 = Pointer
* 24 = Index bracket open
* 25 = Index bracket close
* 26 = Point to
* 28 = Method, *arrayText* contains the method name
* 29 = Longint (as HEX), *arrayNum* returns the number
* 30 = Blob
* 31 = Picture
* 32 = Index open
* 33 = Index close
* 34 = Object
* 35 = Collection
* 36 = Member
* 37 = Member function
* 38 = Null
* 39 = Bracket open function
* 40 = Bracket close function
* 41 = Index open
* 42 = Index close
* 43 = Declaration
* 999 = Unknown
