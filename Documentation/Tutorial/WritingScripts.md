In hmReports-Scripts you can use local variables, as well as process and interprocess variables.

You should avoid using interprocess variables, because they have the same scope as process variables. Interprocess are not available in other processes or in other reports!

### Local variables

You can use local variables and arrays and pointers to local variables.

```4d
C_POINTER($vp_1)

$vp_1:=->[Tabelle_1_caption]
REDUCE SELECTION($vp_1->; 0)
ALL RECORDS($vp_1->)
```

### Types of variables

It is not allowed to change the type of a variable in the scope of the variable. The following code will throw an error:

```4d
$vt_text:="test"
$vt_text:=1

```

As well as an other definition as the declaration:

```4d
C_REAL($vt_text)
$vt_text:="test"
```

You **can** declare variables with compiler C_ - commands. If you don't declare variables, hmReports will declare it for you with the first usage of the variable. For example:

```4d
$test:=100
```

The variable $test will be declared as C_REAL.

Important: If you want to use a variable and bind it to an object or section (as iteration), you have to declare the variable. Otherwise hmReports is not able to offer you a display format according to the variable type.

### Variable names

Long variable-names are supported by hmReports. You can define variable-names longer than 31 characters.

### Loops, Cases and If

In hmReports you can use

* If, Else, End If
* Case Of, Else, End Case
* Repeat, Until
* While, End While
* For, End For
* For each, End For Each

### 4D commands

It is not possible to execute all 4D commands. Especially commands for object manipulation (e. g. OBJECT SET FONT)  will never work in a hmReports context.
A list of all 4D command available in hmReports scripts you can find in the [[List of supported 4D commands|appendix]].

### 4D project method

Because of security, you cannot call all project methods within scripts (sandbox principle). To use 4D project methods, you have to use [[hmRep_Create VStructure Meth]] to publish a method to the script editor. Notice: you cannot pass pointers to these methods.

### Escape characters

Like in 4D, you can use escape-characters. The following escape characters are supported by hmReports:
* \"
* \\
* \t
* \n
* \r

### Known Limitations in hmReports

* Not possible to execute 4D Plugin commands (including hmReports)
* Usage of constants
* It's not possible to pass pointers to 4D project-methods
* no **var**-declaration
