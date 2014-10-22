@interface UINavigationControllerKeyboardAnimationStyleInfo : NSObject
{
	BOOL _isAnimationCompleting;
	id _previousCompleteHandler;
}

+ dealloc
+ previousCompleteHandler
+ setPreviousCompleteHandler:
+ isAnimationCompleting
+ setIsAnimationCompleting:
- dealloc
- previousCompleteHandler
- setPreviousCompleteHandler:
- isAnimationCompleting
- setIsAnimationCompleting:
@end
