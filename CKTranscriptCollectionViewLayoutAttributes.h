@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
	struct _targetFrame;
	struct _currentFrame;
	double _easing;
	double _targetEasing;
	char _orientation;
	BOOL _wantsDrawerLayout;
}

+ orientation
+ copyWithZone:
+ setOrientation:
+ currentFrame
+ wantsDrawerLayout
+ setCurrentFrame:
+ easing
+ setEasing:
+ targetEasing
+ setTargetEasing:
+ setWantsDrawerLayout:
+ targetFrame
+ setTargetFrame:
- orientation
- copyWithZone:
- setOrientation:
- currentFrame
- wantsDrawerLayout
- setCurrentFrame:
- easing
- setEasing:
- targetEasing
- setTargetEasing:
- setWantsDrawerLayout:
- targetFrame
- setTargetFrame:
@end
