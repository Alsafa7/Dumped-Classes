@interface SBCCButtonLikeSectionSplitView : SBControlCenterSectionView
{
	id _separatorView;
	double _separatorWidth;
	BOOL _leftHidden;
	BOOL _rightHidden;
	id _leftSection;
	id _rightSection;
}

+ setLeftSection:
+ setRightSection:
+ setLeftSectionHidden:animated:
+ setRightSectionHidden:animated:
+ _updateSeparatorVisibility
+ _updateLabelParameters
+ _useLandscapeBehavior
+ _relayoutAnimated:
+ _frameForSectionSlot:
+ _viewForSectionSlot:
+ leftSection
+ rightSection
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ _separatorFrame
- setLeftSection:
- setRightSection:
- setLeftSectionHidden:animated:
- setRightSectionHidden:animated:
- _updateSeparatorVisibility
- _updateLabelParameters
- _useLandscapeBehavior
- _relayoutAnimated:
- _frameForSectionSlot:
- _viewForSectionSlot:
- leftSection
- rightSection
- initWithFrame:
- dealloc
- layoutSubviews
- _separatorFrame
@end
