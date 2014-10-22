@interface ADHandsFreeManager : NSObject
{
	pointer _observers;
}

+ _audioRouteChanged:
+ _listenForAudioRouteChanges
+ _stopListeningForAudioRouteChanges
+ addHandsFreeStateObserver:
+ removeHandsFreeStateObserver:
+ dealloc
+ init
+ _notifyObservers:
- _audioRouteChanged:
- _listenForAudioRouteChanges
- _stopListeningForAudioRouteChanges
- addHandsFreeStateObserver:
- removeHandsFreeStateObserver:
- dealloc
- init
- _notifyObservers:
@end
