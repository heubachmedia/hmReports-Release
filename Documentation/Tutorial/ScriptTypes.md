In hmReports there are several scripts for actions, like start a reports or end a report. Every section has it's own script as well as objects.

### Start Script

**Note: this script is only for SRP compatibility, you should use the report header script instead.**
This script is executed before the first page is printed. In this script you can query some reports which are needed for the report execution. You also can create process variables.

### Body Script

**Note: this script is only for SRP compatibility, you should use the detail script instead.**
This script is executed before each iteration of detail 1 is printed. In this script you can query some reports which are needed for printing this section.

### End Script

**Note: this script is only for SRP compatibility, you should use the report footer script instead.**
This script is executed after the last page was printed. In this script you write some clean-up code e. g. you can release 4D sets. It is not necessary to clean hmReports variables. They will be released automatically after the reports creation.

### Section scripts

Each section has it's own script. This script is executed *before* the section is printed.

### Object scripts

Each object has three kinds of scripts: An "On Before"-Script, "On After Render"-Script and an "On After"-Script.

The "On Before"-Script is known as Object-script in previous versions of hmReports. It is executed *before* an objects is printed and rendered.
The "On After Render"-Script is called after hmReports rendered the text within a text object. That means, hmReports getting the references to variables and fields. In this script you can manipulate the text.
The "On After"-Script is executed *after* hmReports gets the variable height of an object. In this script you can change the height of an object dynamically.
