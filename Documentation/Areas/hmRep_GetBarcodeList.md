## hmRep_Get Barcode List → Barcodes
###### Introduced in v18, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Barcodes|Collection|←|List of all available barcodes

### Description
The command *hmRep_Get Barcode List* returns a collection *Barcodes* with all available Barcodes in hmReports.

### Example
The following example gets a collection of all available barcodes:

```4d
var $barcodes : Collection

$barcodes:=hmRep_Get Barcode List
```

Result:

```json
[
	{
		"symbology": 1,
		"name": "Data Matrix ECC200 (ISO 16022)",
		"is2D": true
	},
	{
		"symbology": 2,
		"name": "PDF417",
		"is2D": true
	},
	{
		"symbology": 3,
		"name": "Code 128",
		"is2D": false
	},
	{
		"symbology": 4,
		"name": "Interleaved 2 of 5",
		"is2D": false
	},
	{
		"symbology": 5,
		"name": "Code 3 of 9 (Code 39)",
		"is2D": false
	},
	{
		"symbology": 6,
		"name": "Code 11",
		"is2D": false
	},
	{
		"symbology": 7,
		"name": "Extended Code 3 of 9 (Code 39+)",
		"is2D": false
	},
	{
		"symbology": 8,
		"name": "Code 93",
		"is2D": false
	},
	{
		"symbology": 9,
		"name": "LOGMARS",
		"is2D": false
	},
	{
		"symbology": 10,
		"name": "Code 128 (Subset B)",
		"is2D": false
	},
	{
		"symbology": 11,
		"name": "NVE-18",
		"is2D": false
	},
	{
		"symbology": 12,
		"name": "Maxicode",
		"is2D": true
	},
	{
		"symbology": 13,
		"name": "Standard Code 2 of 5",
		"is2D": false
	},
	{
		"symbology": 14,
		"name": "Code 2 of 5 Industrial",
		"is2D": false
	},
	{
		"symbology": 15,
		"name": "Code 2 of 5 IATA",
		"is2D": false
	},
	{
		"symbology": 16,
		"name": "Code 2 of 5 Data Logic",
		"is2D": false
	},
	{
		"symbology": 17,
		"name": "ITF-14",
		"is2D": false
	},
	{
		"symbology": 18,
		"name": "Deutsche Post Leitcode",
		"is2D": false
	},
	{
		"symbology": 19,
		"name": "Deutsche Post Identcode",
		"is2D": false
	},
	{
		"symbology": 20,
		"name": "QR Code",
		"is2D": true
	},
	{
		"symbology": 21,
		"name": "PDF417 Truncated",
		"is2D": true
	},
	{
		"symbology": 22,
		"name": "MicroPDF417",
		"is2D": true
	},
	{
		"symbology": 23,
		"name": "Australia Post Standard Customer",
		"is2D": false
	},
	{
		"symbology": 24,
		"name": "Australia Post Reply Paid",
		"is2D": false
	},
	{
		"symbology": 25,
		"name": "Australia Post Routing",
		"is2D": false
	},
	{
		"symbology": 26,
		"name": "Australia Post Redirection",
		"is2D": false
	},
	{
		"symbology": 27,
		"name": "UPC A",
		"is2D": false
	},
	{
		"symbology": 28,
		"name": "UPC E",
		"is2D": false
	},
	{
		"symbology": 29,
		"name": "EAN",
		"is2D": false
	},
	{
		"symbology": 30,
		"name": "GS1-128",
		"is2D": false
	},
	{
		"symbology": 31,
		"name": "Codabar",
		"is2D": false
	},
	{
		"symbology": 32,
		"name": "Pharmacode One-Track",
		"is2D": false
	},
	{
		"symbology": 33,
		"name": "Pharmacode Two-Track",
		"is2D": false
	},
	{
		"symbology": 34,
		"name": "MSI Code",
		"is2D": false
	},
	{
		"symbology": 39,
		"name": "PZN",
		"is2D": false
	},
	{
		"symbology": 40,
		"name": "ISBN (EAN-13 with verification stage)",
		"is2D": false
	},
	{
		"symbology": 41,
		"name": "GS1 DataBar-14",
		"is2D": false
	},
	{
		"symbology": 42,
		"name": "GS1 DataBar-14 Stacked",
		"is2D": false
	},
	{
		"symbology": 43,
		"name": "GS1 DataBar-14 Stacked Omnidirectional",
		"is2D": false
	},
	{
		"symbology": 44,
		"name": "GS1 DataBar Limited",
		"is2D": false
	},
	{
		"symbology": 45,
		"name": "GS1 DataBar Expanded",
		"is2D": false
	},
	{
		"symbology": 46,
		"name": "GS1 DataBar Expanded Stacked",
		"is2D": false
	},
	{
		"symbology": 47,
		"name": "Composite Symbol with EAN linear component",
		"is2D": false
	},
	{
		"symbology": 48,
		"name": "Composite Symbol with GS1-128 linear component",
		"is2D": false
	},
	{
		"symbology": 49,
		"name": "Composite Symbol with GS1 DataBar-14 linear component",
		"is2D": false
	},
	{
		"symbology": 50,
		"name": "Composite Symbol with GS1 DataBar Limited component",
		"is2D": false
	},
	{
		"symbology": 51,
		"name": "Composite Symbol with GS1 DataBar Extended component",
		"is2D": false
	},
	{
		"symbology": 52,
		"name": "Composite Symbol with UPC A linear component",
		"is2D": false
	},
	{
		"symbology": 53,
		"name": "Composite Symbol with UPC E linear component",
		"is2D": false
	},
	{
		"symbology": 54,
		"name": "Composite Symbol with GS1 DataBar-14 Stacked component",
		"is2D": false
	},
	{
		"symbology": 55,
		"name": "Composite Symbol with GS1 DataBar-14 Stacked Omnidirectional component",
		"is2D": false
	},
	{
		"symbology": 56,
		"name": "Composite Symbol with GS1 DataBar Expanded Stacked component",
		"is2D": false
	},
	{
		"symbology": 57,
		"name": "Plessey Code",
		"is2D": false
	},
	{
		"symbology": 58,
		"name": "USPS OneCode",
		"is2D": false
	},
	{
		"symbology": 59,
		"name": "Telepen Alpha",
		"is2D": false
	},
	{
		"symbology": 60,
		"name": "Telepen Numeric",
		"is2D": false
	},
	{
		"symbology": 61,
		"name": "Code 16K",
		"is2D": false
	},
	{
		"symbology": 62,
		"name": "Flattermarken",
		"is2D": false
	},
	{
		"symbology": 63,
		"name": "FIM",
		"is2D": false
	},
	{
		"symbology": 64,
		"name": "PostNet",
		"is2D": false
	},
	{
		"symbology": 65,
		"name": "PLANET",
		"is2D": false
	},
	{
		"symbology": 66,
		"name": "Royal Mail 4 State (RM4SCC)",
		"is2D": false
	},
	{
		"symbology": 67,
		"name": "Aztec",
		"is2D": true
	},
	{
		"symbology": 68,
		"name": "Micro QR Code",
		"is2D": true
	},
	{
		"symbology": 69,
		"name": "Aztec Runes",
		"is2D": true
	},
	{
		"symbology": 70,
		"name": "Code One",
		"is2D": false
	},
	{
		"symbology": 71,
		"name": "Grid Matrix",
		"is2D": true
	},
	{
		"symbology": 72,
		"name": "Code 32",
		"is2D": false
	},
	{
		"symbology": 73,
		"name": "HIBC Code 39",
		"is2D": false
	},
	{
		"symbology": 74,
		"name": "EAN-14",
		"is2D": false
	},
	{
		"symbology": 75,
		"name": "HIBC Code 128",
		"is2D": false
	},
	{
		"symbology": 76,
		"name": "Korea Post",
		"is2D": false
	},
	{
		"symbology": 77,
		"name": "Channel Code",
		"is2D": false
	},
	{
		"symbology": 78,
		"name": "DAFT Code",
		"is2D": false
	},
	{
		"symbology": 79,
		"name": "Dutch Post KIX Code",
		"is2D": false
	},
	{
		"symbology": 80,
		"name": "Japanese Post",
		"is2D": false
	},
	{
		"symbology": 81,
		"name": "DotCode",
		"is2D": false
	},
	{
		"symbology": 82,
		"name": "Han Xin (Chinese Sensible) Code",
		"is2D": false
	},
	{
		"symbology": 83,
		"name": "HIBC Datamatrix",
		"is2D": true
	},
	{
		"symbology": 84,
		"name": "HIBC QR",
		"is2D": true
	},
	{
		"symbology": 85,
		"name": "HIBC PDF",
		"is2D": true
	},
	{
		"symbology": 86,
		"name": "HIBC MicroPDF",
		"is2D": true
	},
	{
		"symbology": 87,
		"name": "HIBC BlockF",
		"is2D": false
	},
	{
		"symbology": 88,
		"name": "HIBC Aztec",
		"is2D": true
	}
]
```
