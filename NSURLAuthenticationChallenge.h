@interface NSURLAuthenticationChallenge : NSObject
{
	id _internal;
}

+ _createCFAuthChallenge
+ setSender:
+ initWithProtectionSpace:proposedCredential:previousFailureCount:failureResponse:error:sender:
+ proposedCredential
+ failureResponse
+ _initWithCFAuthChallenge:sender:
+ initWithAuthenticationChallenge:sender:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ previousFailureCount
+ protectionSpace
+ sender
+ error
- _createCFAuthChallenge
- setSender:
- initWithProtectionSpace:proposedCredential:previousFailureCount:failureResponse:error:sender:
- proposedCredential
- failureResponse
- _initWithCFAuthChallenge:sender:
- initWithAuthenticationChallenge:sender:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- previousFailureCount
- protectionSpace
- sender
- error
@end
