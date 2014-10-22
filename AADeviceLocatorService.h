@interface AADeviceLocatorService : NSObject
{
	int _lastKnownState;
	BOOL _hasAttemptedToFetchState;
	BOOL _wantsToEnable;
	id _stateUpdateQueue;
}

+ init
+ isEnabled
+ _updateStateAndNotify:
+ isChangingState
+ setShouldEnable:
+ shouldEnable
+ enableInContext:
+ disableInContext:withWipeToken:
+ .cxx_destruct
- init
- isEnabled
- _updateStateAndNotify:
- isChangingState
- setShouldEnable:
- shouldEnable
- enableInContext:
- disableInContext:withWipeToken:
- .cxx_destruct
@end
