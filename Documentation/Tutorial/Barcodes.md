hmReports is able to produce over 60 different 1D and 2D barcode types. You do **not** need any Barcode specific Barcode font or additional software.

A barcode object is a text object where the barcode option is enabled; the [Section properties](../Appendix/SectionProperties.md) *hmRep_oprop_Barcode* must be set.

**For example:**
You want to create a *Standard Code 39*-Barcode with hmReports:

```4d
$vl_id:=hmRep_Create Text (reparea;100;100;300;300;"hmReports")
hmRep_SET OBJECT PROPERTY (reparea;$vl_id;hmRep_oprop_Barcode;5)
```

A list of all available barcodes you can find in the appendix [Barcode types].

You can use text specific properties to customize the barcode object:

- the textcolor is the barcode color
- you can use frames and you can set a background color
- you can align 2D Barcodes in the textframe like text (left, center, right)
