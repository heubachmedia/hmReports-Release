## Idea of hmReports

The main idea of hmReports is, to build a very convenient tool for editing vector graphics and print reports. To build reports it must be possible to create objects and bind these objects to data fields and variables.

### The structure of hmReports

If you create a hmReports area on a 4D form or by [hmRep_New Offscreen Area](../Areas/hmRep_NewOffscreenArea.md) you have the possibility using more than one report. That means, that you can open more than one report into the area. If you create a new hmReports area, there is always a new report created and you can just use it. That means, that there is an empty report in the area (=the current report), where you can work with. If you have more than one report in the area, there is only one current report, with which you work. All commands going to the current report. If the tabbar is enabled, the user can easily switch between the reports or the user can create and delete reports. The last report cannot be deleted.

### Pages

Each report has pages. The first page is created automatically. 
Each page has objects. You can create groups with objects of the same page only. You can create pages, but there is always a current page you are working with.
A page can be printed as a static page or as a report. So you now have the possibility to print one, two or more separate reports together. Maybe also with static pages between each page.

### Layers

Each report has layers. The first layer is created automatically.
The layers are used in all pages. You can create layers, but there is always a current layer you are working with. Each object of a page belongs to a layer. If you delete a layer, all objects referenced to the layer will be deleted.

### hmReports Palette

The hmReports Palette is a subform with information about the current report (layers, objects and references) and it's object and report properties. These properties can be changed by the user.

hmReports provides one subform: hmReports_Palette
hmReports_Palette is a subform without the hmReports plugin area. The subform only contains the Palette. You can place it on the host form wherever you want. Look in the chapter [Creating the hmReports Palette (Subform)](Palette.md) for information about how to create this subform.
