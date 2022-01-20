## Section Properties

### hmRep_sprop_PrintOnReport (1)
The parameter *valueLong* defines, if the section is printed on the report. Pass *1* for print or *0* for don't print.

### hmRep_sprop_VisibleOption (2)
The parameter *valueLong* defines the visible option of the section. All possible values are defined in the chapter [Section visible types](SectionVisibleTypes.md).

### hmRep_sprop_Object (3)
The parameter *valueLong* defines the object if *hmRep_sprop_VisibleOption* is *hmRep_svisible_ValueChanges*.

### hmRep_sprop_TableNo (4)
The parameter *valueLong* defines the table number if *hmRep_sprop_VisibleOption* is *hmRep_svisible_ValueChanges*.

### hmRep_sprop_FieldNo (5)
The parameter *valueLong* defines the field number if *hmRep_sprop_VisibleOption* is *hmRep_svisible_ValueChanges*.

### hmRep_sprop_Variable (6)
The parameter *valueText* defines the variable name if *hmRep_sprop_VisibleOption* is *hmRep_svisible_ValueChanges*.

### hmRep_sprop_Arrayindex (7)
The parameter *valueLong* defines the arrayindex if *hmRep_sprop_VisibleOption* is *hmRep_svisible_ValueChanges*.

### hmRep_sprop_BreakOption (8)
The parameter *valueLong* defines the break option of the section. All possible values are defined in the chapter [Section break types](SectionBreakTypes.md).

### hmRep_sprop_BreakLessThan (9)
The parameter *valueLong* defines the count of pixels if *hmRep_sprop_BreakOption* is *hmRep_sbreak_NewPageSpace*.

### hmRep_sprop_KeepWholeSecOnPage (10)
The parameter *valueLong* defines, if the section is always complete printed on the page. If the value is *1*, the section is always on a whole page. It the value is *0* the section can be on two pages.

### hmRep_sprop_Use (11)
The parameter *valueLong* defines, if the section is used by hmReports or not. If *0*, the section will not used by hmReports. That means, that the section is hidden in the report.

### hmRep_sprop_Name (12)
The parameter *valueText* defines the name of the section. The sectionname is set for current report. *valueLong* has to be *0*.
The section name can be modified in the on load event of the form.

### hmRep_sprop_ExeDetScrAftValueCh (13)
The parameter *valueLong* defines, if the script is executed after testing break value changed. Standard is yes (='1') because of SRP backward compatibility.

### hmRep_sprop_UseTokenScript (14)
The parameter *valueLong* defines, if the section uses tokenized scripts or text based scripts. Pass *1* for using tokenized scripts, otherwise *0*. Standard is *0*.

### hmRep_sprop_Arrayindex2D (15)
The parameter *valueLong* defines the main index of a 2D array if *hmRep_sprop_VisibleOption* is *hmRep_svisible_ValueChanges*.

### hmRep_sprop_TabPosition (16)
The parameter *valueLong* defines the tab position of the section tab. It is the x-position (horizontal). The parameter *valueText* remains empty.

### hmRep_sprop_BackgroundName (17)
The parameter *valueText* defines the name of the section in the background. The background name is set for current report. *valueLong* has to be *0*.
