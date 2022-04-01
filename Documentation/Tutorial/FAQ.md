This chapter is always under construction, because here we place all questions of customers!

### Q: If the users creates a new object, the tool always switched back to the standard cursor tool

A: Activate the event *hmRep_OnCreateNewObject* and call the following code in the callback method:

```4d
hmRep_SET TOOL ($vl_area;$5)
```

This sets the tool to the last tool, so the user can just create a new object again. hmReports sets the tool automatically back to the standard cursor tool *hmRep_Tool_Move*. The action in the *hmRep_OnCreateNewObject* event overwrites this standard.
