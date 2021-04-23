## hmRep_SET AUTOMATIC RELATIONS (ManyToOne ; OneToMany)
###### Introduced in v4, Preemptive: yes

|Parameter|Type|In/Out|Description
|---|---|:---:|---
|ManyToOne|Longint|→|Many to one relation
|OneToMany|Longint|→|One to many relation

### Description
The command *hmRep_SET AUTOMATIC RELATIONS* sets automatic relations of hmReports. This affects globally to the entire plugin and all it's areas. Pass *1* in the parameter *ManyToOne* for activating many-to-one automatic relations, pass ''0'' for deactivate. Pass *1* in the parameter  *OneToMany* for activating one-to-many automatic relations, pass *0* for deactivate.

### Example
The following example deactivates all automatic relations in the hmReports-Plugin:

```4d
hmRep_SET AUTOMATIC RELATIONS(0;0)
 ```
