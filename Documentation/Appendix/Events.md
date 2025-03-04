## hmReports Events

### hmRep_OnError (1)
For future purposes.

### hmRep_OnCreateNewReport (2)
This event is fired, if a new report is created. *$0* should be *0*.

### hmRep_OnClickArea (3)
This event is fired, if the user clicks on the hmReports area. *$0* should be *0*.

### hmRep_OnDoubleClickArea (4)
This event is fired, if the user doubleclicks on the hmReports area. *$0* should be *0*.

### hmRep_OnClickObject (5)
This event is fired, if the user clicks on an objects. The object references is returned in the parameter *$4*. *$0* should be *0*. If the click is an alternative/contextual click, *$5* will return 1, otherwise 0.

### hmRep_OnDoubleClickObject (6)
This event is fired, if the user doubleclicks on an objects. The object references is returned in the parameter *$4*. *$0* should be *0*. If *$0* is not *0*, hmReports will not show the object property dialog. You can handle the event by your own.

### hmRep_OnExecuteScript (7)
This event is fired, if hmReports wants to execute code of scripts (of objects or sections). *$6* contains the code to execute. If you do not want hmReports to execute the code, just return a non-null number in *$0*. Otherwise of *$0* is *0*, hmReports will execute the code. The command [hmRep_Is Old Script](../Scripting/hmRep_IsOldScript.md) returns, if the script is a new or old script.

If *$4* is *0*, you will get the object id in the parameter *$5*.

If *$4* is one of the [Section types](SectionTypes.md), which is >0, you will get the count of the section (starts with 1) in the parameter *$5*.

If *$4* is *-1*, the start script will be called.
If *$4* is *-2*, the body script will be called.
If *$4* is *-3*, the end script will be called.
If *$4* is *-4*, the *On After*-object script will be called. You will get the object id in the parameter *$5*.
If *$4* is *-5*, the *On After Render*-object script will be called. You will get the object id in the parameter *$5*.

### hmRep_TryClickObject (8)
This event is fired, if the user tries to click on an object. If the result *$0* is not *0*, the object cannot be clicked and the event is ignored by hmReports.

### hmRep_TryClickArea (9)
This event is fired, if the user tries to click in the hmReports area. If the result *$0* is not *0*, the event is ignored by hmReports.

### hmRep_OnMouseUp (10)
This event is fired, if the mouse button is released. *$0* should be *0*.

### hmRep_OnKey (11)
This event is fired, if a key is pressed. *$0* should be *0*. If *$0* is not *0*, hmReports will not handle any key events. In *$4* you will get the character codes of the pressed key. In *$5* you will get the keycode. In *$6* you will get the text with all pressed modifiers: cmd, alt, shift and ctrl.

### hmRep_OnAutoKey (12)
This event is fired, if a key kept pressed. *$0* should be *0*. hmReports does nothing at this event.

### hmRep_OnDrag (13)
This event is fired, if an object is about to be dragged.  The object references is returned in the parameter *$4*. *$5* indicates what the user does:

* 0 = Drag entire object
* 1 = Drag object on the left top corner
* 2 = Drag object on the top
* 3 = Drag object on the right top corner
* 4 = Drag object on the right
* 5 = Drag object on the right bottom corner
* 6 = Drag object on the bottom
* 7 = Drag object on the left bottom corner
* 8 = Drag object on the left
* 9 = Drag a path point

If *$0* is not *0*, the object will not be dragged.

### hmRep_OnDuringDrag (14)
This event is fired, while an object is being dragged. The object references is returned in the parameter *$4*. *$5* indicates what the user does (see table in selector *hmRep_OnDrag*). *$0* should be *0*.

### hmRep_OnDrop (15)
This event is fired, if an object is being dragged, gets dropped. The object references is returned in the parameter *$4*. *$5* indicates what the user does (see table in selector *hmRep_OnDrag*). If *$0* is not *0*, the drop action of the object will be rejected.

### hmRep_OnClickSection (16)
This event is fired, if the user clicks on a section (-marker). The parameter *$4* returns the type number of the section. The parameter *$5* returns the count of the section. If *$0* is not *0*, the user cannot drag the section marker.

### hmRep_OnDoubleClickSection (17)
This event is fired, if the user double clicks on a section (-marker). The parameter *$4* returns the type number of the section. The parameter *$5* returns the count of the section. If *$0* is not *0*, the dialog of the section settings is not shown.

### hmRep_TryCreateNewObject (18)
This event is fired, if the user tries to create a new object. The parameter *$4* returns the Tool ID. If *$0* is not *0*, hmReports will deny the creation of the object.

### hmRep_OnCreateNewObject (19)
This event is fired, after the user creates a new object. The parameter *$4* returns the new object ID. The parameter *$5* returns the tool id, so you can set the tool again with [hmRep_SET TOOL](../Areas/hmRep_SetTool.md) after the user creates a new object. *$0* should be *0*.

### hmRep_TryDeleteObjects (20)
This event is fired, if the user tries to delete the selected objects. If *$0* is not *0*, hmReports will deny the deletion of the objects. To get the selected object, you can use the command [hmRep_GET OBJECT LIST](../Objects/hmRep_GetObjectList.md).

### hmRep_OnDeleteObject (21)
This event is fired, if the user wants to delete an object. If *$0* is not *0*, hmReports will deny the deletion of an object. The parameter *$4* returns the object id.

### hmRep_OnCommandBefore (22)
This event is fired, before a menu command is executed. The parameter *$4* returns the command ID. The parameter *$5* returns the refered object or *0*. If *$0* is not *0*, the command will no be executed. To identify the subcommand from the menu, you can use the command [hmRep_Get Subcommand](../Menus/hmRep_GetSubcommand.md).

### hmRep_OnCommandAfter (23)
This event is fired, after a menu command is executed. The parameter *$4* returns the command ID. The parameter *$5* returns the refered object or *0*. If *$0* should be *0*. To identify the subcommand from the menu, you can use the command [hmRep_Get Subcommand](../Menus/hmRep_GetSubcommand.md).
If the menu command 28 (Page setup) or 29 (Print) was called, the parameter *$6* returns *1*, if printing or page setup was OK, otherwise *0* is returned as a string.

### hmRep_OnBeforePrintingPage (24)
This event is fired, before a new page is printed. The parameter *$4* returns the page number of the entire result document. The parameter *$5* returns the page number of the report page. If you want to stop printing, the result *$0* should be not *0*, otherwise *$0* is *0*.

### hmRep_OnAfterClickArea (25)
This event is fired, after the user clicks in the report area. This is useful to detect changes the user made. The event *hmRep_OnClickArea* is fired, before the user made changes to the area. *$0* should be *0*.

### hmRep_OnBeforePrinting (26)
This event is fired, before printing starts. The parameter *$4* returns the current execution id. *$0* should be *0*.

### hmRep_OnAfterPrinting (27)
This event is fired, after printing ends. The parameter *$4* returns the current execution id. *$0* should be *0*.

### hmRep_OnDuringPrinting (28)
This event is fired before each detail iteration. The parameter *$4* returns the current detail number, starting with 1. The parameter *$5* returns the current iteration number. If you want to stop printing, the result *$0* should be not *0*, otherwise *$0* is *0*.

### hmRep_OnOutsideDrop (29)
The event is called, if an element were droped into the hmReports area. The hmReports area must have the property *dropable* in the 4D design mode. In the parameter *$4* is the reference of the object, on which the element was droped. *$0* should be *0*.

With the help of the command [hmRep_DRAG AND DROP PROP](../Areas/hmRep_DragAndDropProperties.md) you can get further information about the source element.

### hmRep_OnBeforeClickTool (30)
The event is called, if the user clicks on a tool (on the left side). The parameter *$4* returns the Tool ID. If you want to deny the user action, you should return in *$0* not a *0*. If you want to allow this action, you should return *0*.

### hmRep_OnAfterClickTool (31)
The event is called, if the user clicks on a tool (on the left side). This event is called after the tool is changed and the action is executed. The parameter *$4* returns the Tool id. *$0* should be *0*.

### hmRep_OnScrollH (32)
The event is called, if the user scrolls the current report with the horizontal scrollbars or mouse wheel. The current scrollbar positions are returned in *$4* (x) and *$5* (y).

### hmRep_OnScrollV (33)
The event is called, if the user scrolls the current report with the vertical scrollbars or mouse wheel. The current scrollbar positions are returned in *$4* (x) and *$5* (y).

### hmRep_OnBeforeDragNewObj (34)
This event is called, before the user can start the drag & drop action with a new object. The parameter *$4* returns the new object ID. *$0* should be *0*. This event is very helpful to manipulate a new object before he drags the new object (e. g. you can change the color).

### hmRep_OnDropAction (35)
This event is called, after the user drops one or more objects. *$0* should be *0*. The other event *hmRep_OnDrop* is fired for each object which was dropped.

### hmRep_OnDuringDragSection (36)
This event is called, while the user drags the section handle line. Every time the user's mouse is moving, this event is called. The parameter *$4* returns the type number of the section. The parameter *$5* returns the count of the section. *$0* should be *0*.

### hmRep_OnAfterDragSection (37)
This event is called, after the user drags the section handle line and released the mouse button. The parameter *$4* returns the type number of the section. The parameter *$5* returns the count of the section. *$0* should be *0*.

### hmRep_OnBeforeCreatePage (38)
This event is called before a new page is created. *$4* returns the page number, after which page the new page will be created. If this value is zero or greater than the current count of pages, it will be the last page. *$5* is unused and always *0*. If you want to allow this page creation, you should return *0*. Otherwise, you can deny the page creation if you return a non-zero value as *$0*. You cannot deny the creation of the first page (when the report is created). This event is also called, if a preview is created. It will be called before each preview page is generated.

### hmRep_OnAfterCreatePage (39)
This event is called after a new page was created. The event is helpful, if you want to set some settings to a newly created page. In *$4* you will get the page number. In *$5* you will get the page reference. *$0* should be *0*.

### hmRep_ExecuteInternal (40)
*This selector is obsolete since version 4!*
The event is called to execute some code in the context of the host database.

### hmRep_OnScriptEditor (41)
This event is called when the user clicks to open the script editor. It can happen through the menu bar or by double click.
The parameter *$6* returns the type of the script:
* *$6* = "object": *$4* returns the object id, *$5* returns 1 for "On Before"-Script, 2 for "On After Render"-Script and 3 for "On After"-Script.
* *$6* = "section": *$4* returns the section type and *$5* returns the section count.
* *$6* = "report": *$4* returns 1 for "Start"-Script, 2 for "Body"-Script and 3 for "End"-Script
If you want to suppress the script editor you have to return a non-null value in *$0*. Otherwise *$0* should be *0*.
If you return 0, the event *hmRep_OnOpenDialog* is called.

### hmRep_OnOpenDialog (42)
This event is called before a dialog is opened. You will get the dialog type in the parameter *$4*. A list of all dialogs is available [here](DialogTypes.md). In this event you can get or set the dialog size with the commands [hmRep_GET DIALOG RECT](../Reports/hmRep_GetDialogRect.md) and [hmRep_SET DIALOG RECT](../Reports/hmRep_SetDialogRect.md) .
Return always *0* for open the dialog. Return a non-zero value for not open the dialog.

### hmRep_OnCloseDialog (43)
This event is called after the dialog was closed by the user. You will get the dialog type in the parameter *$4*. A list of all dialogs is available [here](DialogTypes.md). *$0* should be always *0*.

### hmRep_OnMouseEnter (44)
This event is called if the user enters an object with the cursor. The object reference is returned in the parameter *$4*.

### hmRep_OnMouseMove (45)
This event is called if the user moves the mouse in the report editor. The parameter *$4* returns the current x-coordinate and the parameter *$5* returns the current y-coordinate. In this event you can change the current cursor with the command [hmRep_SET CURSOR](../Areas/hmRep_SetCursor.md).

### hmRep_OnMouseLeave (46)
This event is called if the user leaves an object with the cursor. The object reference is returned in the parameter *$4*.

### hmRep_OnBeforeDrag (47)
This event is called if the user begins an object drag action. The parameter *$4* returns the current x-coordinate and the parameter *$5* returns the current y-coordinate. In the event you can set specifiy mouse limits with the command [hmRep_SET MOUSE LIMITS](../Areas/hmRep_SetMouseLimits.md).

### hmRep_OnScriptError (48)
This event is called if an script error occurs. You are getting the error code in the parameter *$4*.
The text-parameter *$6* returns a JSON object with the following properties:

* scripttype (always, number): 1 = object, 2 = section, 3 = report, 4 = object after, 5 = object after render, 6 = script in dynamic text
* object (only if scripttype = 1/4/5/6, number): reference of the object
* section_type (only if scripttype = 2, number): type of the section
* section_count (only if scripttype = 2, number): count of the section
* reportscript (only if scripttype = 3, number): 1 = start, 2 = body, 3 = end
* page_reference (only if page relevant, number): reference of the current rendering page
* report (always: text): UUID of the report

You have some options to define the behaviour at error. The following return values are defined:
* 0 = abort the script (default)
* 1 = continues
* 2 = shows the debugger

### hmRep_OnCurrentReportChanged (49)
This event is called when the current report changes. The parameter *$3* returns the current (new) report UUID and *$6* returns the **old** report UUID. The old UUID can be empty if there was no previous report.

### hmRep_OnCreateExecutionContext (50)
This event is called if hmReports creates a new execution context for rendering. If you use an own execution context (by setting the area property *hmRep_prop_ExecutionContext*), the event will not be called. The parameter *$4* returns the execution context id.
