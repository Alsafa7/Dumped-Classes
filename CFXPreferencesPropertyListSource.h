@interface CFXPreferencesPropertyListSource : CFXPreferencesSource
{
	unsigned short _mode;
	unsigned int _owner;
	id _synchronizer;
	pointer _dirtyKeys;
	pointer _url;
	long long _formatToWrite;
	struct _statInfo;
	unsigned int _group;
}

@end
