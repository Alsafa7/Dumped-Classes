@interface NSNetworkSettingsInternal : NSObject
{
	pointer store;
	pointer storeSource;
	id proxyDictionary;
	BOOL ftpPassiveEnabled;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;
}

+ dealloc
+ finalize
- dealloc
- finalize
@end
