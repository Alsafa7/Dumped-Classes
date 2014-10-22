@interface NSURLAuthenticationChallengeInternal : NSObject
{
	id space;
	id proposedCredential;
	long long previousFailureCount;
	id failureResponse;
	id error;
	id sender;
}

+ initWithProtectionSpace:proposedCredential:previousFailureCount:failureResponse:error:sender:
+ dealloc
- initWithProtectionSpace:proposedCredential:previousFailureCount:failureResponse:error:sender:
- dealloc
@end
