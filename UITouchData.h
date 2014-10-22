@interface UITouchData : NSObject
{
	struct startTouchDownLocation;
	usigned long long lastTapCount;
	double lastTouchUpTimestamp;
	double lastTouchDownTimestamp;
	BOOL touchIsValidTap;
	id lastTouch;
}

@end
