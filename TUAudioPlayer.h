@interface TUAudioPlayer : NSObject
{
	id _delegate;
}

+ dealloc
+ setDelegate:
+ delegate
+ stop
+ playingSound
+ playSound:numOfLoops:pauseDuration:
+ playSelectedSound
- dealloc
- setDelegate:
- delegate
- stop
- playingSound
- playSound:numOfLoops:pauseDuration:
- playSelectedSound
@end
