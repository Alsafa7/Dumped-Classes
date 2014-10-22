@interface SBSearchHeader : UIView
{
	id _blurView;
	id _container;
	id _cancelButton;
	id _searchField;
	id _delegate;
}

+ searchGesture:changedPercentComplete:
+ initWithFrame:
+ dealloc
+ setDelegate:
+ hitTest:withEvent:
+ layoutSubviews
+ delegate
+ _cancelButtonPressed
+ searchField
- searchGesture:changedPercentComplete:
- initWithFrame:
- dealloc
- setDelegate:
- hitTest:withEvent:
- layoutSubviews
- delegate
- _cancelButtonPressed
- searchField
@end
