@interface ISUniqueOperationContext : NSObject
{
	id _operations;
	id _uniqueOperations;
}

+ dealloc
+ init
+ addOperation:
+ removeOperation:
+ countOfOperations
+ uniqueOperationForKey:
+ setUniqueOperation:forKey:
+ containsOperation:
- dealloc
- init
- addOperation:
- removeOperation:
- countOfOperations
- uniqueOperationForKey:
- setUniqueOperation:forKey:
- containsOperation:
@end
