@interface _GEOResourceManifestTileGroupObserverProxy : NSObject
{
	id _observers;
	id _observersLock;
	id _queue;
}

+ dealloc
+ init
+ description
+ removeObserver:
+ addObserver:
+ queue
+ setQueue:
+ observersCount
+ forEachObserver:finished:
- dealloc
- init
- description
- removeObserver:
- addObserver:
- queue
- setQueue:
- observersCount
- forEachObserver:finished:
@end
