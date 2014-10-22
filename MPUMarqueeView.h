@interface MPUMarqueeView : UIView
{
	id _currentAnimationID;
	BOOL _marqueeEnabled;
	double _contentGap;
	id _contentView;
	double _marqueeDelay;
	double _marqueeScrollRate;
	struct _contentSize;
}

+ initWithFrame:
+ setFrame:
+ layoutSubviews
+ setBounds:
+ contentView
+ animationDidStop:finished:
+ didMoveToSuperview
+ contentSize
+ setContentSize:
+ setMarqueeEnabled:
+ setContentGap:
+ isMarqueeEnabled
+ resetMarqueePosition
+ _createMarqueeAnimationIfNeeded
+ _tearDownMarqueeAnimation
+ setMarqueeDelay:
+ setMarqueeScrollRate:
+ contentGap
+ marqueeDelay
+ marqueeScrollRate
+ setMarqueeEnabled:allowCurrentMarqueeToFinish:
+ .cxx_destruct
- initWithFrame:
- setFrame:
- layoutSubviews
- setBounds:
- contentView
- animationDidStop:finished:
- didMoveToSuperview
- contentSize
- setContentSize:
- setMarqueeEnabled:
- setContentGap:
- isMarqueeEnabled
- resetMarqueePosition
- _createMarqueeAnimationIfNeeded
- _tearDownMarqueeAnimation
- setMarqueeDelay:
- setMarqueeScrollRate:
- contentGap
- marqueeDelay
- marqueeScrollRate
- setMarqueeEnabled:allowCurrentMarqueeToFinish:
- .cxx_destruct
@end
