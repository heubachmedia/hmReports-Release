## hmRep_SET MOUSE LIMITS ( Area ; limit_h ; limit_left ; limit_right ; limit_v ; limit_top ; limit_bottom)
###### Introduced in v4, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|Area|Longint|→|hmReports area
|limit_h|Longint|→|Horizontal limit
|limit_left|Real|→|Minimum left
|limit_right|Real|→|Maximum right
|limit_v|Longint|→|Vertical limit
|limit_top|Real|→|Minimum top
|limit_bottom|Real|→|Maximum bottom

### Description
The command *hmRep_SET MOUSE LIMITS* sets mouse movement limits for the current drag action. You have to call this command in the callback event *hmRep_OnBeforeDrag* only.

Passing *1* in *limit_h* activates horizontal limitation. The parameters *limit_left* and *limit_right* defining the minimal and maximum movement in pixels starting with coordinates 0;0. Passing 0;0 as min/max does not allow the user to move the cursor horizontally. Using ''-10;10'' allows the user to move the cursor 10 pixels left and 10 pixels right from the beginning of the drag action.

Same for vertical.

### Example
The following example allows the user horizontal movement only:

```4d
hmRep_SET MOUSE LIMITS($vl_area; 0; 0; 0; 1; 0; 0)
 ```

The following example allows the user vertical movement only:

```4d
hmRep_SET MOUSE LIMITS($vl_area; 1; 0; 0; 0; 0; 0)
 ```
