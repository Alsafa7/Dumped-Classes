@interface AFUIQueue : NSObject
{
	id _delegate;
	id _objects;
}

+ countByEnumeratingWithState:objects:count:
+ setDelegate:
+ count
+ objectAtIndex:
+ init
+ description
+ delegate
+ _objects
+ frontObject
+ enqueueObject:
+ dequeueObject
+ dequeueAllObjects
+ .cxx_destruct
+ enqueueObjects:
- countByEnumeratingWithState:objects:count:
- setDelegate:
- count
- objectAtIndex:
- init
- description
- delegate
- _objects
- frontObject
- enqueueObject:
- dequeueObject
- dequeueAllObjects
- .cxx_destruct
- enqueueObjects:
@end
