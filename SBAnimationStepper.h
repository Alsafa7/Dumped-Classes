@interface SBAnimationStepper : NSObject
{
	id m_delegate;
	id m_view;
	id m_animatingSubviews;
	double m_duration;
	double m_percentage;
	id m_displayLink;
	double m_finishBackwardTimestamp;
	double m_finishBackwardDuration;
	double m_finishBackwardPercentage;
}

+ stepAnimationsInView:animatingSubviews:duration:
+ setPercentage:
+ finishBackwardToStart
+ finishForwardToEnd
+ setAnimatingSubviews:
+ updateFinishBackwardToStart:
+ animatingSubviews
+ percentage
+ dealloc
+ setDelegate:
+ init
+ delegate
+ view
+ duration
+ setDuration:
+ setView:
- stepAnimationsInView:animatingSubviews:duration:
- setPercentage:
- finishBackwardToStart
- finishForwardToEnd
- setAnimatingSubviews:
- updateFinishBackwardToStart:
- animatingSubviews
- percentage
- dealloc
- setDelegate:
- init
- delegate
- view
- duration
- setDuration:
- setView:
@end
