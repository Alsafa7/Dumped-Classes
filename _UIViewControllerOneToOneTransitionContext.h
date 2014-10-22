@interface _UIViewControllerOneToOneTransitionContext : _UIViewControllerTransitionContext
{
	id _fromViewController;
	id _toViewController;
	struct _fromStartFrame;
	struct _fromEndFrame;
	struct _toEndFrame;
	struct _toStartFrame;
}

+ dealloc
+ viewControllerForKey:
+ initialFrameForViewController:
+ finalFrameForViewController:
+ fromViewController
+ toViewController
+ _setToEndFrame:
+ _setFromViewController:
+ _setToViewController:
+ _setFromStartFrame:
+ _setToStartFrame:
+ _setFromEndFrame:
+ toStartFrame
+ fromStartFrame
+ toEndFrame
+ fromEndFrame
- dealloc
- viewControllerForKey:
- initialFrameForViewController:
- finalFrameForViewController:
- fromViewController
- toViewController
- _setToEndFrame:
- _setFromViewController:
- _setToViewController:
- _setFromStartFrame:
- _setToStartFrame:
- _setFromEndFrame:
- toStartFrame
- fromStartFrame
- toEndFrame
- fromEndFrame
@end
