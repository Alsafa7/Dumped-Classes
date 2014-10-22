@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject
{
	id weakReference;
	pointer figPlayer;
	BOOL isAppAudioSession;
	BOOL isActive;
	id category;
	id mode;
	id delegate;
}

@end
