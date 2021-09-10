# Command overview

## Areas
### Plugin Main Commands
* [hmRep_Register (Serial number) → Error code](Areas/hmRep_Register.md)
* [hmRep_Get Version -> Version](Areas/hmRep_GetVersion.md)

### Managing Offscreen Areas
* [hmRep_New Offscreen Area (Width ; Height) → Area](Areas/hmRep_NewOffscreenArea.md)
* [hmRep_DELETE OFFSCREEN AREA (Area)](Areas/hmRep_DeleteOffscreenArea.md)

### Managing Areas
* [hmRep_Get Areas → Areas](Areas/hmRep_GetAreas.md)<span style="color:red;font-family:monospace">&nbsp;&nbsp;New in v19</span>
* [hmRep_GET AREA LIST (areas ; thread_IDs)](Areas/hmRep_GetAreaList.md)<span style="color:gray;font-family:monospace">&nbsp;&nbsp;Deprecated in v19</span>
* [hmRep_GET REPORT LIST (areas ; Report List)](Areas/hmRep_GetReportList.md)
* [hmRep_Is Area Valid (Area) → Valid](Areas/hmRep_IsAreaValid.md)<span style="color:gray;font-family:monospace">&nbsp;&nbsp;Deprecated in v19</span>
* [hmRep_Get Last Error (Area) → Error code](Areas/hmRep_GetLastError.md)
* [hmRep_SET NEW AREA FOCUSABLE (onOff)](Areas/hmRep_SetNewAreaFocusable.md)
* [hmRep_SET AUTOMATIC RELATIONS (ManyToOne ; OneToMany)](Areas/hmRep_SetAutomaticRelations.md)
* [hmRep_GET AUTOMATIC RELATIONS (ManyToOne ; OneToMany)](Areas/hmRep_GetAutomaticRelations.md)

### Callback and Events
* [hmRep_INSTALL CALLBACK (Area ; Method name)](Areas/hmRep_InstallCallback.md)
* [hmRep_Get Callback (Area) → Method name](Areas/hmRep_GetCallback.md)
* [hmRep_SET EVENT STATE (Area ; Event ; State)](Areas/hmRep_SetEventState.md)
* [hmRep_Get Event State (Area ; Event) → state](Areas/hmRep_GetEventState.md)
* [hmRep_Get Last Event (Area) → Last Event](Areas/hmRep_GetLastEvent.md)
* [hmRep_GET MOUSE (Area ; x ; y)](Areas/hmRep_GetMouse.md)
* [hmRep_SET CURSOR (Area ; CursorID ; ForceCursor)](Areas/hmRep_SetCursor.md)
* [hmRep_SET MOUSE LIMITS ( Area ; limit_h ; limit_left ; limit_right ; limit_v ; limit_top ; limit_bottom)](Areas/hmRep_SetMouseLimits.md)
* [hmRep_DRAG AND DROP PROP (Area ; Variable ; Arrayindex ; Process ; x ; y)](Areas/hmRep_DragAndDropProperties.md)

### Properties
* [hmRep_SET AREA PROPERTY (Area ; Selector ; ValueLong ; ValueText)](Areas/hmRep_SetAreaProperty.md)
* [hmRep_GET AREA PROPERTY (Area ; Selector ; ValueLong ; ValueText)](Areas/hmRep_GetAreaProperty.md)
* [hmRep_SET FONTS (Area ; Fontlist)](Areas/hmRep_SetFonts.md)
* [hmRep_GET FONTS (Area ; Fontlist)](Areas/hmRep_GetFonts.md)
* [hmRep_SET FORMAT LIST (Area ; Format list)](Areas/hmRep_SetFormatList.md)
* [hmRep_GET FORMAT LIST (Area ; Format list)](Areas/hmRep_GetFormatList.md)

### Tools
* [hmRep_SET TOOL (Area ; Tool)](Areas/hmRep_SetTool.md)
* [hmRep_Get Tool (Area) → Tool](Areas/hmRep_GetTool.md)
* [hmRep_SET TOOL VISIBLE (Area ; Tool ; Visible)](Areas/hmRep_SetToolVisible.md)
* [hmRep_Get Tool Visible (Area ; Tool) → Visible](Areas/hmRep_GetToolVisible.md)
* [hmRep_SET TOOL TIP TEXT (Area ; Tool ; Tiptext)](Areas/hmRep_SetToolTipText.md)
* [hmRep_Get Tool Tip Text (Area ; Tool) → Tiptext](Areas/hmRep_GetToolTipText.md)
* [hmRep_Get Barcode List → Barcodes](Areas/hmRep_GetBarcodeList.md)

## Reports

### Managing Reports
* [hmRep_Create Report (Area ; Width ; Height ; Name) → Report UUID](Reports/hmRep_CreateReport.md)
* [hmRep_DELETE REPORT (Area ; report UUID)](Reports/hmRep_DeleteReport.md)
* [hmRep_CLEAR REPORT (Area)](Reports/hmRep_ClearReport.md)
* [hmRep_SET CURRENT REPORT (Area ; Report UUID)](Reports/hmRep_SetCurrentReport.md)
* [hmRep_Get Current Report (Area) → report UUID](Reports/hmRep_GetCurrentReport.md)
* [hmRep_REPORT TO BLOB ( Area ; Blob)](Reports/hmRep_ReportToBlob.md)
* [hmRep_BLOB TO REPORT ( Area ; Type ; Blob)](Reports/hmRep_BlobToReport.md)
* [hmRep_SET COLOR WITH ALPHA ( Area ; Selector ; id ; Red ; Green ; Blue ; Alpha)](Reports/hmRep_SetColorWithAlpha.md)
* [hmRep_GET COLOR WITH ALPHA ( Area ; Selector ; id ; Red ; Green ; Blue ; Alpha)](Reports/hmRep_GetColorWithAlpha.md)
* [hmRep_Pixel To Rulerunit ( Area ; Pixel) → Ruler unit](Reports/hmRep_RulerunitToPixel.md)
* [hmRep_Rulerunit To Pixel ( Area ; Ruler unit) → Pixel](Reports/hmRep_RulerunitToPixel.md)
* [hmRep_GET REPORT DEPENDENCIES ( Area ; scopeArray ; scopeIDArray ; UUIDArray)](Reports/hmRep_GetReportDependencies.md)

### Properties
* [hmRep_SET REPORT PROPERTY (Area ; Selector ; ValueLong ; ValueText)](Reports/hmRep_SetReportProperty.md)
* [hmRep_GET REPORT PROPERTY (Area ; Selector ; ValueLong ; ValueText)](Reports/hmRep_GetReportProperty.md)
* [hmRep_SET SCALE (Area ; Scale)](Reports/hmRep_SetScale.md)
* [hmRep_Get Scale (Area) -> Scale](Reports/hmRep_GetScale.md)
* [hmRep_ZOOM TO RECT (Area ; Left ; Top ; Right ; Bottom)](Reports/hmRep_ZoomToRect.md)
* [hmRep_Enumerate Pages (Area) → Result](Reports/hmRep_EnumeratePages.md)

### Input/Output
* [hmRep_Report To Picture ( Area ; Format ; dpiX ; dpiY) → Picture](Reports/hmRep_ReportToPicture.md)
* [hmRep_REPORT TO SVG ( Area ; Blob)](Reports/hmRep_ReportToSVG.md)
* [hmRep_RENDER TO PICTURE ( Area ; picArray ; Format ; Limit ; dpiX ; dpiY)](Reports/hmRep_RenderToPicture.md)
* [hmRep_Render To Text ( Area ; Options ; FieldDelim ; RecordDelim) → Text](Reports/hmRep_RenderToText.md)
* [hmRep_Render To HTML ( Area ; Options) → Text](Reports/hmRep_RenderToHTML.md)
* [hmRep_Render To Blob ( Area ; Charset ; Options ; FieldDelim ; RecordDelim) → Result](Reports/hmRep_RenderToBlob.md)<span style="color:gray;font-family:monospace">&nbsp;&nbsp;Deprecated in v19</span>
* [hmRep_GET IMPORT PROTOCOLL ( Area ; Protocoll)](Reports/hmRep_GetImportProtocoll.md)

---

## Appendix
* [Area Properties](Appendix/AreaProperties.md)
* [Report Properties](Appendix/ReportProperties.md)
* [Tools](Appendix/Tools.md)
* [Colors](Appendix/Colors.md)
* [Import Types](Appendix/ImportTypes.md)
* [Error Codes](Appendix/ErrorCodes.md)
