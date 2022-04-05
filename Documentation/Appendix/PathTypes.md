## Path types

### hmRep_Path_MoveTo (1)
A "move to" point consists of *x* and *y*.

### hmRep_Path_LineTo (2)
A "line to" point consists of *x* and *y*.

### hmRep_Path_Curve (3)
A bezier curve consists of *x* and *y* and two control points (x,y).

### hmRep_Path_QuadCurve (4)
A quadratic bezier curve consists of *x* and *y* and one control point (x,y).

### hmRep_Path_Arc (5)
An arc consists of *x* and *y*, radius x, radius y, startAngle, endAngle.

### hmRep_Path_ClosePath (6)
The closeing point of a subpath. No points required.
