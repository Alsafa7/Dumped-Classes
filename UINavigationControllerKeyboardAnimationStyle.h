@interface UINavigationControllerKeyboardAnimationStyle : UIInputViewAnimationStyle
{
	BOOL _disableAlongsideView;
	id _context;
	id _info;
}

+ dealloc
+ context
+ info
+ initWithContext:
+ setDisableAlongsideView:
+ disableAlongsideView
+ launchAnimation:afterStarted:completion:forHost:fromCurrentPosition:
+ isAnimationCompleted
+ useCustomTransition
- dealloc
- context
- info
- initWithContext:
- setDisableAlongsideView:
- disableAlongsideView
- launchAnimation:afterStarted:completion:forHost:fromCurrentPosition:
- isAnimationCompleted
- useCustomTransition
@end
