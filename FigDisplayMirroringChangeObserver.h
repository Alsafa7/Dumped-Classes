@interface FigDisplayMirroringChangeObserver : NSObject
{
	pointer _player;
	id _accessQueue;
	id _clonedDisplays;
	id _cloningSupportedDisplays;
	id _baseDisplayList;
}

+ initWithPlayer:
+ setBaseDisplayList:
+ removeReferenceToPlayer
+ updatePlayerDisplayList
+ dealloc
+ observeValueForKeyPath:ofObject:change:context:
- initWithPlayer:
- setBaseDisplayList:
- removeReferenceToPlayer
- updatePlayerDisplayList
- dealloc
- observeValueForKeyPath:ofObject:change:context:
@end
