@interface CFXPreferencesPropertyListSourceSynchronizer : NSObject
{
	unsigned short _mode;
	unsigned int _owner;
	id _source;
	pointer _dict;
	pointer _dirtyKeys;
	pointer _pendingMutations;
	pointer _url;
	long long _formatToWrite;
	struct _statInfo;
	unsigned int _group;
	long long _generationCount;
}

@end
