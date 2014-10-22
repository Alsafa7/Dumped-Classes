@interface SSPurchasableItem : NSObject
{
	id _propertyValues;
	id _tableName;
	id _database;
}

+ storeID
+ dealloc
+ isHidden
+ description
+ pid
+ accountUniqueIdentifier
+ propertyValues
+ initWithPropertyValues:
+ datePurchased
- storeID
- dealloc
- isHidden
- description
- pid
- accountUniqueIdentifier
- propertyValues
- initWithPropertyValues:
- datePurchased
@end
