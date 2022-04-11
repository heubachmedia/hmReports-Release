## hmRep_SET STYLED TEXT ( Area ; objectID ; styledtext)
###### Introduced in v2.0, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|ObjectID|Longint|→|object id
|Styledtext|Text|→|styled text

### Description
The command *hmRep_SET STYLED TEXT* sets a styled text to the object defined by *objectID*. The parameter *styledtext* must be a text value with styled text tags from 4D. The command also sets the text for the object. The previous text value of the object will be overwritten.

hmReports converts the styled text string internally into styled text runs, so you work with the other commands ([hmRep_GET STYLED TEXT RUN](hmRep_GetStyledTextRun.md)) in a very convenient way.

### Example
For example, if you pass the following styled text into the parameter *styledtext*, you will have the following result:

```4d
<SPAN STYLE="font-family:'Arial';font-size:10pt;text-align:left;font-weight:normal;font-style:normal;text-decoration:none;color:#000000">This is</SPAN><SPAN STYLE="font-family:'Arial';font-size:24pt;text-align:left;font-weight:bold;font-style:italic;text-decoration:none;color:#000000"> a testtext</SPAN><SPAN STYLE="font-family:'Arial';font-size:10pt;text-align:left;font-weight:normal;font-style:normal;text-decoration:none;color:#000000"> m</SPAN><SPAN STYLE="font-family:'Arial';font-size:10pt;text-align:left;font-weight:normal;font-style:normal;text-decoration:none;color:#0E801C">ade with </SPAN><SPAN STYLE="font-family:'Arial';font-size:18pt;text-align:left;font-weight:normal;font-style:normal;text-decoration:none;color:#0E801C">hmRep</SPAN><SPAN STYLE="font-family:'Arial';font-size:18pt;text-align:left;font-weight:normal;font-style:normal;text-decoration:none;color:#000000">orts</SPAN><SPAN STYLE="font-family:'Arial';font-size:48pt;text-align:left;font-weight:normal;font-style:normal;text-decoration:underline;color:#000000">!</SPAN>
```

![Bild:Styled text](../Pictures/StyledText.png)
