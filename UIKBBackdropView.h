@interface UIKBBackdropView : _UIBackdropView
{
	BOOL _primaryBackdrop;
	id _secondaryBackdrops;
	id _backdropCornerView;
	BOOL _hasUpdatedFrame;
}

+ dealloc
+ updateFrame:withCorners:
+ triggerUpdate:
+ transitionToStyle:
+ applySettings:
+ initWithFrame:style:primaryBackdrop:
+ addSecondaryBackdropView:
+ textEffectsVisibilityLevel
+ _hasUpdatedFrame
- dealloc
- updateFrame:withCorners:
- triggerUpdate:
- transitionToStyle:
- applySettings:
- initWithFrame:style:primaryBackdrop:
- addSecondaryBackdropView:
- textEffectsVisibilityLevel
- _hasUpdatedFrame
@end
