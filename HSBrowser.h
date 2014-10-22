@interface HSBrowser : NSObject
{
	id _addLibraryHandler;
	id _availableLibraries;
	pointer _dnsService;
	id _dnsServiceQueue;
	BOOL _isBrowsing;
	id _removeLibraryHandler;
	long long _browserType;
	id _homeSharingGroupID;
}

+ homeSharingGroupID
+ setHomeSharingGroupID:
+ startWithAddLibraryHandler:removeLibraryHandler:
+ availableLibraries
+ dealloc
+ init
+ stop
+ _startWithCurrentRetryCount:maximumRetryCount:addLibraryHandler:removeLibraryHandler:
+ _didFindService:moreComing:
+ _didRemoveService:moreComing:
+ browserType
+ setBrowserType:
- homeSharingGroupID
- setHomeSharingGroupID:
- startWithAddLibraryHandler:removeLibraryHandler:
- availableLibraries
- dealloc
- init
- stop
- _startWithCurrentRetryCount:maximumRetryCount:addLibraryHandler:removeLibraryHandler:
- _didFindService:moreComing:
- _didRemoveService:moreComing:
- browserType
- setBrowserType:
@end
