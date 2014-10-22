@interface GKBubbleMeshAnimator : NSObject
{
	id _animatingViews;
	id _displayLink;
	double _lastUpdateTime;
}

+ addAnimatingBubbleView:
+ removeAnimatingBubbleView:
+ animatingViews
+ setAnimatingViews:
+ lastUpdateTime
+ setLastUpdateTime:
+ dealloc
+ init
+ applicationDidBecomeActive:
+ applicationWillResignActive:
+ setDisplayLink:
+ displayLink
+ update:
- addAnimatingBubbleView:
- removeAnimatingBubbleView:
- animatingViews
- setAnimatingViews:
- lastUpdateTime
- setLastUpdateTime:
- dealloc
- init
- applicationDidBecomeActive:
- applicationWillResignActive:
- setDisplayLink:
- displayLink
- update:
@end
