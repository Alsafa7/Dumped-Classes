@interface NSURLConnectionInternalConnection : NSURLConnectionInternal
{
	int _cfConnLock;
	pointer _cfConn;
	pointer _currCFChallenge;
	id _currNSChallenge;
	pointer _fileName;
	BOOL _shouldSkipCancelOnRelease;
	long long _totalBytes;
	long long _expectedTotalBytes;
}

+ sendCFChallenge:toSelector:
+ scheduleInRunLoop:forMode:
+ initWithInfo:
+ _atomic_CFURLConnection
+ _retainCFURLConnection
+ _setDelegateQueue:
+ cleanupChallenges
+ unscheduleFromRunLoop:forMode:
+ _suspendLoading
+ _resumeLoading
+ _setShouldSkipCancelOnRelease:
+ _CFURLConnection
+ invokeForDelegate:
+ dealloc
+ cancel
+ start
+ useCredential:forAuthenticationChallenge:
+ _invalidate
+ continueWithoutCredentialForAuthenticationChallenge:
+ cancelAuthenticationChallenge:
+ performDefaultHandlingForAuthenticationChallenge:
+ rejectProtectionSpaceAndContinueWithChallenge:
- sendCFChallenge:toSelector:
- scheduleInRunLoop:forMode:
- initWithInfo:
- _atomic_CFURLConnection
- _retainCFURLConnection
- _setDelegateQueue:
- cleanupChallenges
- unscheduleFromRunLoop:forMode:
- _suspendLoading
- _resumeLoading
- _setShouldSkipCancelOnRelease:
- _CFURLConnection
- invokeForDelegate:
- dealloc
- cancel
- start
- useCredential:forAuthenticationChallenge:
- _invalidate
- continueWithoutCredentialForAuthenticationChallenge:
- cancelAuthenticationChallenge:
- performDefaultHandlingForAuthenticationChallenge:
- rejectProtectionSpaceAndContinueWithChallenge:
@end
