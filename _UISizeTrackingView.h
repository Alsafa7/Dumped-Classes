@interface _UISizeTrackingView : UIView
{
	id _remoteViewController;
	id _viewControllerOperatorProxy;
	id _textEffectsOperatorProxy;
}

+ setFrame:
+ setBounds:
+ isScrollEnabled
+ _scrollToTopFromTouchAtScreenLocation:resultHandler:
+ _didMoveFromWindow:toWindow:
+ _updateTextEffectsGeometries
- setFrame:
- setBounds:
- isScrollEnabled
- _scrollToTopFromTouchAtScreenLocation:resultHandler:
- _didMoveFromWindow:toWindow:
- _updateTextEffectsGeometries
@end
