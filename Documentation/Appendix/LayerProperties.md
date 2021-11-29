## Layer Properties

### hmRep_lprop_Name (1)
The parameter *valueText* sets name of the layer.

### hmRep_lprop_Visible (2)
The parameter *valueLong* defines if the layer is visible or not. Visible is *1*, invisible is *0*.

### hmRep_lprop_LockObjects (3)
The parameter *valueLong* defines if objects of the layer are locked or not. Locked is *1*, unlocked is *0*.

### hmRep_lprop_Page (4)
The parameter *valueLong* defines the page reference of the layer. Standard is *0*. That means, that the layer appears on every page. If you want to set a layer to one specific page only, you have to pass the page reference (not number!) into the parameter *valueLong*.

### hmRep_lprop_H_Scrollable (5)
The parameter *valueLong* defines, if the layer scrolls horizontally. By default, a layer is scrollable horizontally and vertically. If you want to lock a layer (and it's objects) you have to set the value to *0*, which means *not scrollable horizontally*.

### hmRep_lprop_V_Scrollable (6)
The parameter *valueLong* defines, if the layer scrolls vertically. By default, a layer is scrollable horizontally and vertically. If you want to lock a layer (and it's objects) you have to set the value to *0*, which means *not scrollable vertically*.

### hmRep_lprop_Z_Order (7)
The parameter *valueLong* sets/gets the Z-Order of the layer. Pass the new position into the parameter *valueLong* which is from 1 to the total count of layers.

### hmRep_lprop_Origin_x (8)
The parameter *valueLong* sets/gets the origin x-position of the layer. Pass the new x-origin-coordinate into the parameter *valueLong*. With this value, you can shift all objects related to this layer to a new position.

### hmRep_lprop_Origin_y (9)
The parameter *valueLong* sets/gets the origin y-position of the layer. Pass the new y-origin-coordinate into the parameter *valueLong*. With this value, you can shift all objects related to this layer to a new position.
