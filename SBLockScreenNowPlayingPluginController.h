@interface SBLockScreenNowPlayingPluginController : NSObject
{
	id _viewController;
	id _mediaController;
	id _disableTimer;
}

+ _addObservers
+ _updateNowPlayingPlugin
+ invalidateDisableTimer
+ _startDisableTimer
+ _disableNowPlayingPlugin
+ initWithLockScreenViewController:mediaController:
+ isNowPlayingPluginActive
+ dealloc
- _addObservers
- _updateNowPlayingPlugin
- invalidateDisableTimer
- _startDisableTimer
- _disableNowPlayingPlugin
- initWithLockScreenViewController:mediaController:
- isNowPlayingPluginActive
- dealloc
@end
