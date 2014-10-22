@interface IMWeakArray : NSObject
{
	id _weakArray;
}

+ dealloc
+ removeObject:
+ countByEnumeratingWithState:objects:count:
+ addObject:
+ description
+ copyMutableArray
+ addObjectIfNotIdenticalObjectExists:
+ copyMutableSet
- dealloc
- removeObject:
- countByEnumeratingWithState:objects:count:
- addObject:
- description
- copyMutableArray
- addObjectIfNotIdenticalObjectExists:
- copyMutableSet
@end
