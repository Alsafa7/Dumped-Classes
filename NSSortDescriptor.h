@interface NSSortDescriptor : NSObject
{
	usigned long long _sortDescriptorFlags;
	id _key;
	SEL _selector;
	id _selectorOrBlock;
}

@end
