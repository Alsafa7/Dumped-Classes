@interface WebInspectorClientRegistry : NSObject
{
	unsigned int _nextAvailablePageId;
	struct _pageClientMap;
	id _delegate;
}

+ setDelegate:
+ init
+ delegate
+ .cxx_construct
+ .cxx_destruct
+ registerClient:
+ unregisterClient:
+ _getNextAvailablePageId
+ clientForPageId:
+ inspectableWebViews
- setDelegate:
- init
- delegate
- .cxx_construct
- .cxx_destruct
- registerClient:
- unregisterClient:
- _getNextAvailablePageId
- clientForPageId:
- inspectableWebViews
@end
