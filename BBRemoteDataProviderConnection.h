@interface BBRemoteDataProviderConnection : NSObject
{
	id _connection;
	id _serviceName;
	id _appBundleID;
	BOOL _registered;
	BOOL _connected;
	id _pendingProviders;
	id _delegate;
}

+ serviceName
+ dealloc
+ invalidate
+ resume
+ proxy:detailedSignatureForSelector:
+ connection:connectionStateDidChange:
+ ping:
+ registerServiceName:appBundleID:
+ addDataProviderWithSectionID:
+ removeDataProviderWithSectionID:
+ _noteConnectionStateChanged
+ initWithConnection:onQueue:delegate:
+ appBundleID
- serviceName
- dealloc
- invalidate
- resume
- proxy:detailedSignatureForSelector:
- connection:connectionStateDidChange:
- ping:
- registerServiceName:appBundleID:
- addDataProviderWithSectionID:
- removeDataProviderWithSectionID:
- _noteConnectionStateChanged
- initWithConnection:onQueue:delegate:
- appBundleID
@end
