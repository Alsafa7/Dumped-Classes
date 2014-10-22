@interface BKSApplicationDataStore : NSObject
{
	id _bundleId;
	id _client;
	BOOL _clientNeedsCheckin;
}

+ dealloc
+ init
+ removeAllObjects
+ removeObjectForKey:
+ initWithBundleIdentifier:
+ _initWithBundleId:client:
+ _makeSafe:forType:
+ objectForKey:withResult:
+ safeObjectForKey:ofType:
+ safeObjectForKey:ofType:withResult:
+ archivedObjectForKey:
+ archivedObjectForKey:withResult:
+ safeArchivedObjectForKey:ofType:
+ safeArchivedObjectForKey:ofType:withResult:
+ setArchivedObject:forKey:
+ objectForKey:
+ setObject:forKey:
- dealloc
- init
- removeAllObjects
- removeObjectForKey:
- initWithBundleIdentifier:
- _initWithBundleId:client:
- _makeSafe:forType:
- objectForKey:withResult:
- safeObjectForKey:ofType:
- safeObjectForKey:ofType:withResult:
- archivedObjectForKey:
- archivedObjectForKey:withResult:
- safeArchivedObjectForKey:ofType:
- safeArchivedObjectForKey:ofType:withResult:
- setArchivedObject:forKey:
- objectForKey:
- setObject:forKey:
@end
