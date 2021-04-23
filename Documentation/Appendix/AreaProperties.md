## hmReports Area Properties

### hmRep_prop_Statusbar (1)
Sets the visibility of the statusbar. Set *ValueLong* to *1* for visible, *0* for invisible.

### hmRep_prop_Tabbar (2)
Sets the visibility of the tabbar. Set *ValueLong* to *1* for visible, *0* for invisible.

### hmRep_prop_Tools (3)
Sets the visibility of the toolsbar. Set *ValueLong* to *1* for visible, *0* for invisible.

### hmRep_prop_Rulers (4)
Sets the visibility of the rulers. Set *ValueLong* to *1* for visible, *0* for invisible.

### hmRep_prop_Pagelist (5)
Sets the visibility of the page list. Set *ValueLong* to *1* for visible, *0* for invisible.

### hmRep_prop_Toolbar (6)
Sets the visibility of the toolbar. Set *ValueLong* to *1* for visible, *0* for invisible.

### hmRep_prop_Menu (7)
Sets the visibility of the menubar. Set *ValueLong* to *1* for visible, *0* for invisible.

### hmRep_prop_MagneticGrid (8)
Sets the value of the magnetic grid A value of *0* deactivates the grid. The value defines the count of pixels where the object is magnetic to other objects.

### hmRep_prop_SVGrootFolder (9)
Sets the root folder for pictures which are imported in hmReports. If you want to import SVG documents into hmReports, some pictures in the SVG document are not stored directly into the SVG document as base64. They are stored outside next to the SVG document. In the parameter *ValueText* you can pass the path of the folder.

### hmRep_prop_SVGpropImport (10)
If you pass *1* in the parameter *ValueLong*, all SVG attributes of an element is imported as [[About Custom Properties|custom properties]].

### hmRep_prop_SVGpropExport (11)
If you pass *1* in the parameter *ValueLong*, the custom properties of an hmReports object is exported as attributes for a SVG object. Note: If you have a custom property, which already exists as SVG attribute, you can not overwrite it!

### hmRep_prop_ObjectOutside (12)
If you pass *0* in the parameter *ValueLong*, objects cannot be dragged outside the paper area. Standard value is *1*.

### hmRep_prop_FetchRuntimeErrors (13)
If you pass *1* in the parameter *ValueLong*, all script (4D-) runtime errors are internally fetched. No syntax error alert will be shown. If you pass *0* in the parameter *ValueLong*, all script errors are shown.

### hmRep_prop_ShowDragInfo (14)
If you pass *1* in the parameter *ValueLong*, information about the width and height of an object is shown while the user resize them. If you pass *0*, the information is not shown.

### hmRep_prop_PagelistWidth (15)
The parameter *ValueLong* defines the width of the page list of the hmReports area. Standard is a value of 200 Pixels. The width must be at least 20 Pixels.

### hmRep_prop_PreviewEditable (16)
If you pass *1* in the parameter *ValueLong*, the generated preview directly in the hmReports area, is editable. If you pass *0*, the preview is not editable. Standard value is *1*. If the preview is not editable, the selectable property of all objects are enabled.

### hmRep_prop_PreviewSaveBack (17)
If you pass *1* in the parameter *ValueLong*, the automatic transfer of edited items in the preview back to the original report is enable. If you pass *0*, changes of the preview are not transfered back to the original. Standard value is *0*.

### hmRep_prop_PreviewAutoupdate (18)
If you pass *1* in the parameter *ValueLong*, the preview is automatically updated, if the user makes changes in the preview. Standard value is *0*.

### hmRep_prop_PreviewPages (19)
The parameter *ValueLong* defines the maximum number of preview pages. Unlimited is *0*. Standard is *5*.

### hmRep_prop_MaxUndos (20)
The parameter *ValueLong* defines the maximum number of undo records. Unlimited is *0*. Standard is *10*. If the maximum number of undo records is reached, the first one will be deleted and the current undo record will be the last. If you pass *-1*, the undo stack will be deactivated.

### hmRep_prop_ContextualMenu {21)
The parameter *ValueLong* defines, if the contextual menu (right mouse click) is enabled. Standard is *1*, which means enabled.

### hmRep_prop_SelectionRect {22)
The parameter *ValueLong* defines, if the selection rectangle is enabled or not. Standard is *1*, which means enabled.

### hmRep_prop_DragGuides (23)
The parameter *ValueLong* defines, if the user can create guides by dragging guides from the rulers. Standard is *1*, which means the user can create guides with the rulers.

### hmRep_prop_ReportareaHeight (24)
The parameter *ValueLong* returns the height of the visible report area on the 4D form including scrollbars. This value can be read only.

### hmRep_prop_ReportareaWidth (25)
The parameter *ValueLong* returns the width of the visible report area on the 4D form including scrollbars. This value can be read only.

### hmRep_prop_SavePrinterName (26)
The parameter *ValueLong* sets the flag, if hmReports should save the printer name in the report XML-file. That means, if the report is re-opened, the print job is executing on this saved printer. If the printer does not exists, nothing will be printed. The printer name can be set with [[hmRep_SET PRINT OPTION]] and read with [[hmRep_GET PRINT OPTION]].

### hmRep_prop_DragRedrawInterval (27)
The parameter *ValueLong* sets the interval in milliseconds, when the area should be drawn at least. For example: if you pass a value of 500; a redraw will occur only after 500 milliseconds (half second). The standard value is *0*, which means, the redraw will happen as much as necessary (every time the mouse moves while a drag & drop option).

### hmRep_prop_SavePrintHeader (28)
The parameter *ValueLong* sets a flag, if the print header should be saved in the hmReports-XML file. Set *1* for save print header or *0* for not save print header.

### hmRep_prop_LoadPrintHeader (29)
The parameter *ValueLong* sets a flag, if the print header should be loaded from the hmReports-XML file. Set *1* for load print header or *0* for not load print header. If the print header is not loaded from the XML file, the standard printer header is used (as for a new report).

### hmRep_prop_OldScriptCreation (30)
The parameter *ValueLong* activates the old script creation. Pass *1* for active, *0* for deactive. Standard value is *0*. With this flag, you can force hmReports to create old scripts (like hmReports 2.x and before). Otherwise all new scripts will be created with the hmReports Script Editor. See chapter [[Script Compatibility]] for more details.

### hmRep_prop_Use4DEditMenu (31)
The parameter *ValueLong* activates the synchronization between the hmReports-Area and the 4D's edit menu of the current menu bar. Pass *1* for activation or *0* for deactivate. Standard is *0*. Notice: hmReports has it's own menu bar, where the user can open an edit menu.

### hmRep_prop_LineClickTolerance (32)
The parameter *ValueLong* sets the click tolerance of line objects in pixels. Standard is *5* pixels. This tolerance value indicates if an user clicks on a line and the pixels nearby where a click will be accepted.

### hmRep_prop_ShowObjectSelections (33)
The parameter *ValueLong* defines the visibility of the object selection rectangles of the editor. *1* is visible (Standard), *0* os invisible.

### hmRep_prop_ObjectRenderOrder (34)
The parameter *ValueLong* defines the default rendering order of all pages:

* 0 = Z-Order
* 1 = Top/Left
* 2 = Left
* 3 = Top

Default is *1*.

### hmRep_prop_DialogWindowType (35)
The parameter *ValueLong* defines the dialog type of all hmReports dialogs. Just use the given 4D constants.

### hmRep_prop_UseVStructure (36)
The parameter *ValueLong* defines which virtual structure to use. Following options are available:

* 0 = no virtual structure
* 1 = virtual structure per area (default)
* 2 = global virtual structure

### hmRep_prop_CopyPropInPreview (37)
Set the parameter *ValueLong* to *1* to activate copying custum properties in objects to the preview objects. Default is *0*.

### hmRep_prop_ScriptEditorSyntax (38)
The parameter *ValueLong* activates the syntax coloring while you typing in the script editor. By default this option is *0*.

### hmRep_prop_ExecutionContext (39)
The parameter *ValueLong* sets the execution context for rendering (printing/preview...). This is needed if you want to use your own execution context to set **before** variables and to **receive** values after rendering. You have to pass a context id created by [[hmX_Create Execution Context]]. You are responsible for deleting the context after usage with [[hmX_DELETE EXECUTION CONTEXT]].

By default hmReports creates an own context for rendering. This context is deleted after rendering and you cannot access to these variables.

### hmRep_prop_PagelistSwitchClick (40)
Set the parameter *ValueLong* to *1* to activate a page change in the page list with a single click. This option is *0* by default. Default means, that the user has to double click in the page list to switch the page. Passing *1*, only a single click is necessary.
 
### hmRep_prop_InfiniteSections (41)
Set the parameter *ValueLong* to *1* to activate a mode to set sections heights in design mode to infinite. Normally the height of all sections is limited to the height of the current page. If you design a page with more sections, it can be necessary to have bigger section heights in sum as the current page height.
