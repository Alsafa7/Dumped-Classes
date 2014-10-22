@interface SAClassRegistry : NSObject
{
	id _classesByAceClassNameByGroupIdentifier;
	id _queue;
}

+ dealloc
+ init
+ _queue
+ classForAceClassWithName:inGroupWithIdentifier:
+ registerClass:forAceClassWithName:inGroupWithIdentifier:
+ _classesByAceClassNameByGroupIdentifier
+ _accessMutableStateWithBlock:
- dealloc
- init
- _queue
- classForAceClassWithName:inGroupWithIdentifier:
- registerClass:forAceClassWithName:inGroupWithIdentifier:
- _classesByAceClassNameByGroupIdentifier
- _accessMutableStateWithBlock:
@end
