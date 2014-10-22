@interface _UIDelayedPresentationContext : NSObject
{
	BOOL _enableUserInteraction;
	long long _reqcnt;
	id _presentInvocation;
	id _cancellationHandler;
	double _timeout;
	id _timerSource;
}

+ dealloc
+ setCancellationHandler:
+ invocationTarget
+ setPresentInvocation:
+ delayingController
+ initWithTimeout:cancellationHandler:
+ requestCount
+ decrementRequestCount
+ incrementRequestCount
+ cancelDelayedPresentation:
+ beginDelayedPresentation
+ finishDelayedPresentation:
+ cancellationHandler
+ presentInvocation
- dealloc
- setCancellationHandler:
- invocationTarget
- setPresentInvocation:
- delayingController
- initWithTimeout:cancellationHandler:
- requestCount
- decrementRequestCount
- incrementRequestCount
- cancelDelayedPresentation:
- beginDelayedPresentation
- finishDelayedPresentation:
- cancellationHandler
- presentInvocation
@end
