## Print as  Area

If you print the report as an area, that means, that the sections are ignored and the area is printed as it is, no section script will be executed.

If you are using the hmDraw license, it's the only possiblity to print a report.

### The execution cycle of scripts in hmReports

- Start Script
    - Object Scripts in printing order
- End Script

## Print as Report

If you print a report, all scripts are executed. Also scripts of sections are executed, if they have the option *print on the report* unchecked.

### The execution cycle of scripts in hmReports

- Start Script

- **Begin Loop**

- Report Header (only page 1)
- Page Header (on every page)

- **Begin Details Loop**
    - Calculation of Iterations
    - If iterations is greater than 0 OR first detail: Detail Header
- **Begin Iterations Loop**
    - If detail number is 1 than execute Body Script (SRP compatibility)
    - if the [Section properties] *hmRep_sprop_ExeDetScrAftValueChg* is on (which is standard):
        - If value changed and current interation loop is > 1, than print Detail Header and Detail Footer
        - Detail Script
    - if the [Section properties] *hmRep_sprop_ExeDetScrAftValueChg* is off:
        - Detail Script
        - If value changed and current interation loop is > 1, than print Detail Header and Detail Footer
    - Get the height of the detail and maybe print next page
    - Object Scripts in printing order
    - Check for subdetails: If more than 1 detail, than go to *Begin Details Loop*
- **End Iterations Loop**
    - Detail Footer
- Total
- **End Details Loop**

- Page Footer (on every page)
- Report Footer (on the last page)

- **End Loop**

- End Script
