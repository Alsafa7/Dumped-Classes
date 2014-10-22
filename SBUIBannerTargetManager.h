@interface SBUIBannerTargetManager : NSObject
{
	id _targets;
	id _observers;
}

+ dealloc
+ init
+ removeObserver:
+ addObserver:
+ _notifyObservers:
+ targets
+ registerTarget:
+ unregisterTarget:
- dealloc
- init
- removeObserver:
- addObserver:
- _notifyObservers:
- targets
- registerTarget:
- unregisterTarget:
@end
