@interface NSURLConnection : NSObject
{
	id _internal;
}

+ _initWithRequest:delegate:usesCache:maxContentLength:startImmediately:connectionProperties:
+ useCredential:forAuthenticationChallenge:
+ continueWithoutCredentialForAuthenticationChallenge:
+ cancelAuthenticationChallenge:
+ performDefaultHandlingForAuthenticationChallenge:
+ rejectProtectionSpaceAndContinueWithChallenge:
+ _geo_initWithAttributedRequest:delegate:startImmediately:
+ scheduleInRunLoop:forMode:
+ unscheduleFromRunLoop:forMode:
+ _suspendLoading
+ _resumeLoading
+ originalRequest
+ currentRequest
+ initWithRequest:delegate:
+ initWithRequest:delegate:startImmediately:
+ setDelegateQueue:
+ download
+ connectionProperties
+ _dlInternal
+ _cfInternal
+ dealloc
+ description
+ cancel
+ start
+ defersCallbacks
+ setDefersCallbacks:
- _initWithRequest:delegate:usesCache:maxContentLength:startImmediately:connectionProperties:
- useCredential:forAuthenticationChallenge:
- continueWithoutCredentialForAuthenticationChallenge:
- cancelAuthenticationChallenge:
- performDefaultHandlingForAuthenticationChallenge:
- rejectProtectionSpaceAndContinueWithChallenge:
- _geo_initWithAttributedRequest:delegate:startImmediately:
- scheduleInRunLoop:forMode:
- unscheduleFromRunLoop:forMode:
- _suspendLoading
- _resumeLoading
- originalRequest
- currentRequest
- initWithRequest:delegate:
- initWithRequest:delegate:startImmediately:
- setDelegateQueue:
- download
- connectionProperties
- _dlInternal
- _cfInternal
- dealloc
- description
- cancel
- start
- defersCallbacks
- setDefersCallbacks:
@end
