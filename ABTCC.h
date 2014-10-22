@interface ABTCC : NSObject
{
	BOOL _calledExternalChangeCallbacks;
	long long _simulateType;
	BOOL _simulateAccessPrompt;
	BOOL _simulateAccessPromptGranted;
	unsigned int _simulateAccessPromptDelay;
}

+ callExternalChangeCallbacks:
+ _simulateQueue
+ accessPreflight
+ isAccessRestricted
+ accessRequestWithCompletion:
+ simulate:
+ simulateIfAccessPromptDisplayedThenUserGrantedAccess:withDelay:
+ dealloc
+ init
- callExternalChangeCallbacks:
- _simulateQueue
- accessPreflight
- isAccessRestricted
- accessRequestWithCompletion:
- simulate:
- simulateIfAccessPromptDisplayedThenUserGrantedAccess:withDelay:
- dealloc
- init
@end
