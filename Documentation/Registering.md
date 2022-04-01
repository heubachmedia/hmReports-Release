## Register hmReports

You should register hmReports in the *On Startup* method of the database. If you want to use hmReports on the 4D Server, you have also register hmReports in the *On Server Startup* method.

To register the hmReports plugin, you only have to call the command [hmRep_Register](Areas/hmRep_Register.md).

**Example:**

```4d
$vl_error:=hmRep_Register("kiodsfsf7767dsfklsl98e6465sgs")
```
**Important:** You are only allowed to call the command one time. So, if you have no OEM license, you have to register hmReports depending on the application and license.

For Example, if you bought two licenses (developer and runtime), your register code should looks like:

```4d
Case Of
 :(Application Type=4D local mode)

  $vl_error:=hmRep_Register("kiodsfsf7767") `Developer license

 :(Application Type=4D Volume Desktop)

  $vl_error:=hmRep_Register("98dfkdsf78l3") `Runtime license

End Case
```

## OEM licenses

OEM licenses works for any platforms and for any 4D application type. If the OEM license expire, all deployed hmReports-Version will continue without any dialogs.
