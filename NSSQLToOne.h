@interface NSSQLToOne : NSSQLRelationship
{
	id _foreignKey;
	id _foreignEntityKey;
	id _foreignOrderKey;
	unsigned int _slot;
	BOOL _isVirtual;
}

+ isOptional
+ columnName
+ slot
+ foreignKey
+ initWithEntity:propertyDescription:
+ copyValuesForReadOnlyFetch:
+ isVirtual
+ foreignEntityKey
+ foreignOrderKey
+ initWithEntity:inverseToMany:
+ initForReadOnlyFetchWithEntity:propertyDescription:
+ _setForeignOrderKey:
+ initWithEntity:propertyDescription:virtualForToMany:
+ dealloc
+ description
- isOptional
- columnName
- slot
- foreignKey
- initWithEntity:propertyDescription:
- copyValuesForReadOnlyFetch:
- isVirtual
- foreignEntityKey
- foreignOrderKey
- initWithEntity:inverseToMany:
- initForReadOnlyFetchWithEntity:propertyDescription:
- _setForeignOrderKey:
- initWithEntity:propertyDescription:virtualForToMany:
- dealloc
- description
@end
