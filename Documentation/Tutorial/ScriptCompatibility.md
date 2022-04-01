hmReports 3.0 guarantees full backward compatibilty with old scripts like in hmReports 2.x and before.

In hmReports 2.x and before, Scripts where only text which were executed line by line. Internally it worked like the EXECUTE FORMULA command in 4D. It was not possible to use local variables or If and Loop statements.

## Different between old and new scripts

- Old script: Not tokenized script
- New script: Tokenized script

- Old script: Not able to use local variables
- New script: Full support of local variables

- Old script: Cannot use If, While, For, Case and Repeat-Statements
- New script: Full support of If, While, For, Case and Repeat-Statements

- Old script: Executed in 4D variables context (nearly full access to 4D language and variables)
- New script: Executed in a Sandbox, more secure. Own variables stack.

- Old script: 4D blackbox - no debugging possibilities
- New script: You can debug your script-code

## Update scripts

You still are able to edit old text-scripts in hmReports. All will work as before. If you clear an old script (set the text empty) and open the property dialog again, the script tab will disappear. Now it is only possible to write a script with the new Script Editor. If you still want to offer the old Script-Tab to enter old scripts, you have to activate the area property-flag *hmRep_prop_OldScriptCreation*. In this case it will be always possible to create scripts in the old way.

In some situations it is possible to keep the old script and writing a new script with the Script Editor. In all cases: If a new script exists, it has a higher priority, and will be executed. In other words, if an objects has a new **and** old script; always the new script will be executed!

**We strongly encourage hmReports developers and user to use the new Script Editor because of the close implementation in hmReports, security and debugging possibilities.**
