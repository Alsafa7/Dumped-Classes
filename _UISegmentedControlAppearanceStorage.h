@interface _UISegmentedControlAppearanceStorage : NSObject
{
	id _optionsBackgroundImage;
	id _backgroundImages;
	id _miniBackgroundImages;
	id _dividerImages;
	id _miniDividerImages;
	id _textAttributesForState;
	id _backgroundPositionAdjustmentsForBarMetrics;
	id _contentPositionOffsets;
	id _miniContentPositionOffsets;
	BOOL _legacyDontHighlight;
	BOOL _legacySuppressOptionsBackground;
	BOOL _isTiled;
	usigned long long _leftCapWidth;
	usigned long long _rightCapWidth;
}

+ dealloc
+ init
+ textAttributesForState:
+ setTextAttributes:forState:
+ contentPositionOffsetForSegment:inMiniBar:noFallback:
+ backgroundImageForState:isMini:withFallback:
+ anyDividerImageForMini:
+ dividerImageForLeftSegmentState:rightSegmentState:isMini:withFallback:
+ setContentPositionOffset:forSegment:inMiniBar:
+ setBackgroundImage:forState:isMini:
+ setDividerImage:forLeftSegmentState:rightSegmentState:isMini:
+ takeTextAttributesFrom:forState:
+ wantsTrackingSuppressed
+ setBackgroundPositionAdjustment:forBarMetrics:
+ backgroundPositionAdjustmentForBarMetrics:
+ contentPositionOffsetForSegment:inMiniBar:
+ backgroundImageForState:isMini:
+ anyDividerImage
+ dividerImageForLeftSegmentState:rightSegmentState:isMini:
+ legacySuppressOptionsBackground
+ setDetail:
+ setIsTiled:leftCapWidth:rightCapWidth:
+ optionsBackgroundImage
+ setOptionsBackgroundImage:
- dealloc
- init
- textAttributesForState:
- setTextAttributes:forState:
- contentPositionOffsetForSegment:inMiniBar:noFallback:
- backgroundImageForState:isMini:withFallback:
- anyDividerImageForMini:
- dividerImageForLeftSegmentState:rightSegmentState:isMini:withFallback:
- setContentPositionOffset:forSegment:inMiniBar:
- setBackgroundImage:forState:isMini:
- setDividerImage:forLeftSegmentState:rightSegmentState:isMini:
- takeTextAttributesFrom:forState:
- wantsTrackingSuppressed
- setBackgroundPositionAdjustment:forBarMetrics:
- backgroundPositionAdjustmentForBarMetrics:
- contentPositionOffsetForSegment:inMiniBar:
- backgroundImageForState:isMini:
- anyDividerImage
- dividerImageForLeftSegmentState:rightSegmentState:isMini:
- legacySuppressOptionsBackground
- setDetail:
- setIsTiled:leftCapWidth:rightCapWidth:
- optionsBackgroundImage
- setOptionsBackgroundImage:
@end
