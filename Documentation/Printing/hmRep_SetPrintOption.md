## hmRep_SET PRINT OPTION ( Area ; Option ; Value1 ; Value2 ; Value3)
###### Introduced in v1.1, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|Option|Longint|→|Option number
|Value1|Real|→|Value 1 of the option
|Value2|Real|→|Value 2 of the option
|Value3|Text|→|Value 3 of the option

### Description
The command *hmRep_SET PRINT OPTION* is used to modify the value of a print option by programming for the current report of the hmReports area designated by the area parameter. Each option defined using this command changes the print parameters of the current report. Some options are not saved in the report blob.

The option parameter lets you specify the option to be modified. You can pass either a value or one of the following predefined constants.

Pass the new values of the specified option in the value1, value2 and value3 parameters. The number and nature of the values to be passed depends on the type of option specified.

|Option constant (Value) |value1|value2|value3
|---|---|---|---
|hmRep_paper_option (1)|Width|Height|Name
|hmRep_orientation_option (2)|1=Portrait<br />2=Landscape|0|""
|hmRep_scale_option (3)|Number (%)|0|""
|hmRep_number_of_copies (4)|Number|0|""
|hmRep_paper_source_option (5)|Index (number)|0|""
|hmRep_pages_from_option (6)|Number (1=default)|0|""
|hmRep_pages_to_option (7)|Number (-1=end of document)|0|""
|hmRep_color_option (8)|1=black and white<br />2=color|0|""
|hmRep_destination_option (9)|1=Printer<br />2=File<br />3=PDF<br />4=Fax<br />5=Preview|0|path
|hmRep_double_sided (11)|0=single sided<br />1=double sided|0|""
|hmRep_spooler_document_name (12)|0|0|Name
|hmRep_hide_printing_process (14)|0=Display<br />1=Hide|0|""
|hmRep_printer (20)|0|0|Printer Name
|hmRep_Ghostscript_Path (21)|0|0|Ghostscript path
|hmRep_PPD_Path (22)|0|0|PPD file path
|hmRep_PDF_Engine (23)|1=Ghostscript<br />2=internal PDF Engine|0|""
|hmRep_PDF_PageFormat (24)|format|orientation|""
|hmRep_PDF_EmbedFonts (25)|0=Not embed<br />1=Embed fonts|0|""

### hmRep_paper_option (1)
The list of all the names of available paper can be obtained using the 4D command *PRINT OPTION VALUES*.
You can either pass the name of the paper in value3 (and, in this case, pass 0 in value1 and value2), or pass the paper width in value1 and its height in value2. The width and height must be expressed in pixels.

### hmRep_orientation_option (2)
You can pass either 1 for portrait or 2 for landscape in value1.

### hmRep_scale_option (3)
Pass a percentage in value1. Be careful, some printers do not allow you to modify the scale. If you pass an invalid value, the property is reset to 100% at the time of printing.

### hmRep_number_of_copies (4)
Pass the number of copies to be printed in value1.

### hmRep_paper_source_option (5)
Pass the number corresponding to the index, in the array of trays returned by the 4D command *PRINT OPTION VALUES*, of the paper tray to be used.
**Note: This option can only be used under Windows.**

### hmRep_pages_from_option (6)
Pass the number of the page where you want printing to start in value1. The default value is 1.

### hmRep_pages_to_option (7)
Pass the number of the last page that you want to be printed in value1. If you pass -1, the entire document will be printed (-1 is equivalent to passing the last page of the document).

### hmRep_color_option (8)
In value1, pass 1 for monochrome or 2 for color.

**Note: This option can only be used under Windows.**

### hmRep_destination_option (9)
In value1, pass one of the following values

* 1=send to printer
* 2=send to file (file for PC, PS for Mac)
* 3=send to PDF file (On Windows only if Ghostscript is installed)
* 4=send to Fax(Mac OS only)
* 5=preview (Mac OS only)

If value1 is 2 or 3: pass the access path for the resulting document in value3. This path will be used until another path is specified. If a file with the same name already exists at the destination location, it will be replaced.
On macOS: the file path must be a native POSIX path.

### hmRep_double_sided (11)
You can either pass 0 for standard or 1 for double sided in value1. If value1 is set to 1, you can set which type of binding to apply using value2: 0 left binding or 1 top binding.
**Note: This option can only be used under Windows.**

### hmRep_spooler_document_name (12)
In value3, pass the name of the print document that must appear in the list of spooler documents. Pass 0 in value1 and value2.

### hmRep_hide_printing_process (14)
Pass 1 in value1 to hide the progress windows and 0 to display them again (default operation). This option is particularly useful in the case of PDF printing under Mac OS X.

### hmRep_printer (20)
Pass the printer name for the current report into *value3*. This option defines a explicit printer for the report. The printer name is not stored into the report. This option does not change the current printer of 4D or the OS.
Because you set the printer explicitly, the user should not change the printer in the print dialog. You should use this option for offscreen printing only.

### hmRep_Ghostscript_Path (21)
In this option, you can set in *value3* a path to the Ghostscript DLL (Dynmaic Link Library) used for PDF output in hmReports. Normally you do not need this option. hmReports tries to find the right DLL on the OS. You can check this by calling [hmRep_GET PRINT OPTION](hmRep_GetPrintOption.md).

### hmRep_PPD_Path (22)
With this option, you get the path to the PPD file on Mac. You cannot set the path, you only can get the path with [hmRep_GET PRINT OPTION](hmRep_GetPrintOption.md). **The command only works on Mac!**

### hmRep_PDF_Engine (23)
With this option, you can get/set the PDF Engine for creating PDF files on Windows.
Pass *1* for Ghostscript (which goes over the ghostscript printer driver; see chapter [Printing as PDF]).
Pass *2* for internal PDF rendering engine; which works **without** any printer driver!
Default value is *1*.

### hmRep_PDF_PageFormat (24)
With this option, you can set the page format of the output PDF. It works only with the internal PDF engine (hmRep_PDF_Engine must be 2).
*value1* is the format number:
Possible values for the page format:

* 1 = A0
* 2 = A1
* 3 = A2
* 4 = A3
* 5 = A4
* 6 = A5
* 7 = A6
* 8 = Letter
* 9 = Legal
* 10 = Tabloid

*value2* defines the page orientation. 0=portrait, 1=landscape.

### hmRep_PDF_EmbedFonts (25)
With this option, you can define if all fonts used in the PDF have to be embeded or not. Pass *1* in *value1* for embeding.

### Example
The following example hides the progress bar under Mac OS before printing:

```4d
hmRep_SET PRINT OPTION(reparea; hmRep_hide_printing_process; 0; 0; "")
hmRep_Print(reparea; 0)
```
The following example prints to a PDF file:

```4d
hmRep_SET PRINT OPTION(reparea; hmRep_destination_option; 3; 0; "/Users/theUser/Desktop/test.pdf")
hmRep_Print(reparea; 0)
```
