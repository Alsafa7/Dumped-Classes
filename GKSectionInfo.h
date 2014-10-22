@interface GKSectionInfo : NSObject
{
	long long _section;
	id _predicate;
	id _sortDescriptors;
	id _items;
	id _title;
}

+ dealloc
+ setTitle:
+ description
+ title
+ items
+ setItems:
+ section
+ setPredicate:
+ setSection:
+ setSortDescriptors:
+ predicate
+ sortDescriptors
- dealloc
- setTitle:
- description
- title
- items
- setItems:
- section
- setPredicate:
- setSection:
- setSortDescriptors:
- predicate
- sortDescriptors
@end
