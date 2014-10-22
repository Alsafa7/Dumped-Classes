@interface SBControlCenterContentContainerView : UIView
{
	id _backdropView;
	id _contentView;
	double _contentHeight;
}

+ controlCenterWillPresent
+ controlCenterDidDismiss
+ controlCenterWillBeginTransition
+ controlCenterDidFinishTransition
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ contentView
+ setContentView:
+ setBackdropView:
+ backdropView
+ contentHeight
+ setContentHeight:
- controlCenterWillPresent
- controlCenterDidDismiss
- controlCenterWillBeginTransition
- controlCenterDidFinishTransition
- initWithFrame:
- dealloc
- layoutSubviews
- contentView
- setContentView:
- setBackdropView:
- backdropView
- contentHeight
- setContentHeight:
@end
