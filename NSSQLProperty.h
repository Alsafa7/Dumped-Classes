@interface NSSQLProperty : NSStoreMapping
{
	id _name;
	id _propertyDescription;
	id _entity;
	unsigned int _propertyType;
}

+ isToMany
+ columnName
+ isToOne
+ isManyToMany
+ propertyType
+ slot
+ isAttribute
+ externalName
+ initWithEntity:propertyDescription:
+ propertyDescription
+ copyValuesForReadOnlyFetch:
+ isColumn
+ isRelationship
+ setEntityForReadOnlyFetch:
+ _setName:
+ isPrimaryKey
+ setPropertyDescription:
+ isForeignKey
+ isForeignEntityKey
+ isForeignOrderKey
+ isEntityKey
+ isOptLockKey
+ dealloc
+ isEqual:
+ description
+ name
+ entity
- isToMany
- columnName
- isToOne
- isManyToMany
- propertyType
- slot
- isAttribute
- externalName
- initWithEntity:propertyDescription:
- propertyDescription
- copyValuesForReadOnlyFetch:
- isColumn
- isRelationship
- setEntityForReadOnlyFetch:
- _setName:
- isPrimaryKey
- setPropertyDescription:
- isForeignKey
- isForeignEntityKey
- isForeignOrderKey
- isEntityKey
- isOptLockKey
- dealloc
- isEqual:
- description
- name
- entity
@end
