@interface SBControlCenterContainerView : UIView
{
	id _darkeningView;
	double _revealPercentage;
	id _chevronToTrack;
	id _contentContainerView;
}

+ controlCenterWillPresent
+ controlCenterDidDismiss
+ controlCenterWillBeginTransition
+ controlCenterDidFinishTransition
+ controlCenterWillFinishTransitionOpen:withDuration:
+ trackChevronView:
+ setRevealPercentage:
+ revealPercentage
+ _updateDarkeningFrame
+ _currentBGColor
+ _contentChevronView
+ updateBackgroundSettings:
+ _updateContentFrame
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ contentContainerView
- controlCenterWillPresent
- controlCenterDidDismiss
- controlCenterWillBeginTransition
- controlCenterDidFinishTransition
- controlCenterWillFinishTransitionOpen:withDuration:
- trackChevronView:
- setRevealPercentage:
- revealPercentage
- _updateDarkeningFrame
- _currentBGColor
- _contentChevronView
- updateBackgroundSettings:
- _updateContentFrame
- initWithFrame:
- dealloc
- layoutSubviews
- contentContainerView
@end
