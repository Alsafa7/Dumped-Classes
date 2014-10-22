@interface MBServiceAccount : NSObject
{
	BOOL _appleAccount;
	BOOL _enabled;
	BOOL _enabledForBackup;
	BOOL _emailVerified;
	id _accountID;
	id _clientInfoHeader;
	id _serviceURL;
	id _chunkStoreURL;
	BOOL _useMockChunkStore;
}

@end
