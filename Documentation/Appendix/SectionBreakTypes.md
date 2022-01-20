## Section Break Types

### hmRep_sbreak_CurrentPage (1)
This is the standard setting. It means, that the section is printed on the current page without any breaks.

### hmRep_sbreak_NewPageBefore (2)
With this option you can apply a page break **before** the section is printed on the page. This option is only executed, if the iteration is greater than 1. That means, that the page break only appears, if the first iteration was printed.
This option has only effects for the following section types:

* detail footer
* total

### hmRep_sbreak_NewPageAfter (3)
With this option you can apply a page break **after** the section was printed on the page. This option is only executed, if the iteration is lower that the count of all iterations.

This option has only effects for the following section types:

* detail header
* detail footer
* total

### hmRep_sbreak_NewPageSpace (4)
With this option you can apply a page break, if there is lesser space available as the given count of pixels. You have to set the count of pixels with the section option *hmRep_sprop_BreakLessThan*.
