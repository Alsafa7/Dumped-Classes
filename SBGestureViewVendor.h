@interface SBGestureViewVendor : NSObject
{
	id m_cache;
}

+ clearCacheForReason:
+ clearCacheForApp:reason:
+ viewForApp:gestureType:includeStatusBar:
+ viewForApp:gestureType:includeStatusBar:decodeImage:
+ maskViewIfNeeded:gestureType:viewType:contextHostViewRequester:app:
+ dealloc
+ init
- clearCacheForReason:
- clearCacheForApp:reason:
- viewForApp:gestureType:includeStatusBar:
- viewForApp:gestureType:includeStatusBar:decodeImage:
- maskViewIfNeeded:gestureType:viewType:contextHostViewRequester:app:
- dealloc
- init
@end
