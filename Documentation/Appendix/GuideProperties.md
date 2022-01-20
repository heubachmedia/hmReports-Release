## Guide properties

### hmRep_gprop_Horizontal (1)
If the parameter *valueLong* is *1*, the guide is horizontally. Otherwise vertically.

### hmRep_gprop_Position (2)
The parameter *valueLong* sets the position of the guide. The value must be positive.

### hmRep_gprop_Page (3)
The parameter *valueLong* indicates the page number where the guide only can appear. You must pass a valid page number or *0* for all pages. Internally the internal page ID is used, so the guide does not move to an other page if the user inserts pages.

### hmRep_gprop_Locked (4)
If the parameter *valueLong* is *1* the guide is locked, otherwise the guide is unlocked and can be moved by the user (drag & drop).
