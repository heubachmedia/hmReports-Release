## Tools

### hmRep_pprop_ID (1)
The parameter *valueLong* gets/sets the internal reference of the page. The reference does not change if pages are inserted and deleted, so you can always identify the pages uniquely.

### hmRep_pprop_Show_PageArea (2)
If the parameter *valueLong* is set to *1*, the page is shown with a page frame.

### hmRep_pprop_Show_Sections (3)
If *valueLong* is *1*, the page layout is reduced to the heights of all sections.

### hmRep_pprop_Show_SectionCapt (4)
If *valueLong* is *1*, the section captions are shown.

### hmRep_pprop_Show_SectionLines (5)
If *valueLong* is *1*, the section lines are shown.

### hmRep_pprop_PrintAsReport (6)
If the parameter *valueLong* is set to *1*, the page is printed as a report. If not, the page is printed as a page as it is, without regarding the sections.

### hmRep_pprop_PublishAsSubreport (7)
If the parameter *valueLong* is set to *1*, this page is set as a subreport. It means, that this page can be used in other pages as source-subreport. If you print the report, all pages marked as subreport-page will be skipped. 

### hmRep_pprop_pagewidth (8)
The parameter *valueLong* sets the pagewidth of the page.

### hmRep_pprop_pageheight (9)
The parameter *valueLong* sets the pageheight of the page.

### hmRep_pprop_margin_left (10)
The parameter *valueLong* sets the left margin of the page.

### hmRep_pprop_margin_top (11)
The parameter *valueLong* sets the top margin of the page.

### hmRep_pprop_margin_right (12)
The parameter *valueLong* sets the right margin of the page.

### hmRep_pprop_margin_bottom (13)
The parameter *valueLong* sets the bottom margin of the page.

### hmRep_pprop_ObjectRenderOrder (14)
The parameter *valueLong* sets the rendering order of objects. The following types are supported:

* 0 = Z-Order
* 1 = Top/Left (default)
* 2 = Left
* 3 = Top

### hmRep_pprop_Print (15)
If the parameter *valueLong* is set to *1*, the page is printed (default). Setting the option to *0*, this page is not printed.
