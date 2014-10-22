@interface ML3QueryResultSet_BackingStore : NSObject
{
	struct _persistentIDs;
	struct _sections;
}

+ count
+ .cxx_construct
+ enumeratePersistentIDsUsingBlock:
+ enumerateSectionsUsingBlock:
+ persistentIDAtIndex:
+ reverseEnumeratePersistentIDsUsingBlock:
+ containsPersistentIDs:
+ reverseEnumerateSectionsUsingBlock:
+ backingStoreByRemovingPersistentIDs:
+ .cxx_destruct
- count
- .cxx_construct
- enumeratePersistentIDsUsingBlock:
- enumerateSectionsUsingBlock:
- persistentIDAtIndex:
- reverseEnumeratePersistentIDsUsingBlock:
- containsPersistentIDs:
- reverseEnumerateSectionsUsingBlock:
- backingStoreByRemovingPersistentIDs:
- .cxx_destruct
@end
