hmReports is able to render the report as HTML output. For this hmReports has standard variables:

- this_section_html_begin
- this_section_html_end
- this_html_begin
- this_html_end

With this variables you have to are able to add tags to sections and objects. To build a sample report; you can use the following workflow:

Use the following code in the report header - section:

```4d
this_section_html_begin:=<nodoku>"<html>\r"</nodoku>
 this_section_html_begin:=this_section_html_begin+"<head>\r<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\r"
 this_section_html_begin:=this_section_html_begin+"<title>"+this_report_name+"</title>\r"
 this_section_html_begin:=this_section_html_begin+"</head>\r<body>\r"

```

Report footer section:

```4d
this_section_html_end:="</body></html>"
```

Detail section:

```4d
this_section_html_begin:="<tr>"
 this_section_html_end:="</tr>"
```

Add to each object in the detail section the following code:

```4d
this_html_begin:="<td>"
this_html_end:="</td>"
```
