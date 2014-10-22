@interface SBWallpaperPreviewSnapshotCache : NSObject
{
	id _imageCache;
	long long _invalidatedLocations;
}

+ homeScreenSnapshot
+ lockScreenSnapshot
+ node:didAddContainedNodeIdentifiers:
+ node:didRemoveContainedNodeIdentifiers:
+ invalidateSnapshotsForLocations:
+ _backlightFadeFinished
+ _lockScreenSnapshotProvider
+ _homeScreenSnapshotProvider
+ regenerateSnapshotsForLocations:withCompletion:
+ dealloc
+ initWithImageCache:
- homeScreenSnapshot
- lockScreenSnapshot
- node:didAddContainedNodeIdentifiers:
- node:didRemoveContainedNodeIdentifiers:
- invalidateSnapshotsForLocations:
- _backlightFadeFinished
- _lockScreenSnapshotProvider
- _homeScreenSnapshotProvider
- regenerateSnapshotsForLocations:withCompletion:
- dealloc
- initWithImageCache:
@end
