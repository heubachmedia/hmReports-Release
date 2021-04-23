## hmRep_GET AUTOMATIC RELATIONS (ManyToOne ; OneToMany)
###### Introduced in v4, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|ManyToOne|Longint|←|Many to one relation
|OneToMany|Longint|←|One to many relation

### Description
The command *hmRep_GET AUTOMATIC RELATIONS* returns the status of automatic relations of hmReports. ''ManyToOne'' returns *1* if many-to-one relations are active. *0* if not active. *OneToMany* returns *1* if one-to-many relations are active. *0* if not active.

### Example
The following example returns the current status of automatic relations in the hmReports-Plugin:

```4d
var $vl_many2one; $vl_one2many : Integer

$vl_many2one:=0
$vl_one2many:=0

hmRep_GET AUTOMATIC RELATIONS($vl_many2one; $vl_one2many)
 ```
