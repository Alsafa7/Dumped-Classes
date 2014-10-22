@interface SUMediaLibraryAdamIDCache : NSObject
{
	id _adamIDs;
	id _callbackQueue;
	id _dispatchQueue;
	BOOL _isPopulated;
}

+ dealloc
+ init
+ getContainsAdamID:completionBlock:
+ getIntersectionWithSet:completionBlock:
+ getProperties:ofAdamIDs:withCompletionBlock:
+ _libraryChangedNotification:
+ populateCache
+ _populateCache
- dealloc
- init
- getContainsAdamID:completionBlock:
- getIntersectionWithSet:completionBlock:
- getProperties:ofAdamIDs:withCompletionBlock:
- _libraryChangedNotification:
- populateCache
- _populateCache
@end
