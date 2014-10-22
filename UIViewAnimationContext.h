@interface UIViewAnimationContext : NSObject
{
	id _viewAnimations;
	long long _animationCount;
	id _completionHandler;
}

+ dealloc
+ initWithCompletionHandler:
+ setViewAnimations:
+ animationCount
+ setAnimationCount:
+ viewAnimations
+ completionHandler
- dealloc
- initWithCompletionHandler:
- setViewAnimations:
- animationCount
- setAnimationCount:
- viewAnimations
- completionHandler
@end
