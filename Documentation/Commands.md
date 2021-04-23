# Command overview

## hmReports Areas
### Plugin Main Commands
* [hmRep_Register (Serial number) → Error code](Areas/hmRep_Register.md)
* [hmRep_Get Version -> Version](Areas/hmRep_GetVersion.md)

### Managing Offscreen Areas
* [hmRep_New Offscreen Area (Width ; Height) → Area](Areas/hmRep_NewOffscreenArea.md)
* [hmRep_DELETE OFFSCREEN AREA (Area)](Areas/hmRep_DeleteOffscreenArea.md)

### Managing Areas
* [hmRep_Get Areas → Areas](Areas/hmRep_GetAreas.md)<span style="color:red;font-family:monospace">&nbsp;&nbsp;New in v19</span>
* [hmRep_GET AREA LIST (areas ; thread_IDs)](Areas/hmRep_GetAreaList.md)<span style="color:gray;font-family:monospace">&nbsp;&nbsp;Deprecated in v19</span>
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
* [hmRep_GET MOUSE (Area ; x ; y)](Areas/hmRep_GetMouse.md)
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

---

## Appendix
* [Area Properties](Appendix/AreaProperties.md)
* [Tools](Appendix/Tools.md)
* [Error Codes](Appendix/ErrorCodes.md)
