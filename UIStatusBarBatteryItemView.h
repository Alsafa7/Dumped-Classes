@interface UIStatusBarBatteryItemView : UIStatusBarItemView
{
	int _capacity;
	int _state;
	id _accessoryView;
}

+ batteryLayer:
+ dealloc
+ updateForNewData:actions:
+ contentsImage
+ legibilityStrength
+ extraRightPadding
+ _updateAccessoryImage
+ _needsAccessoryImage
+ _accessoryImage
+ _batteryYOffsetWithBackground:
- batteryLayer:
- dealloc
- updateForNewData:actions:
- contentsImage
- legibilityStrength
- extraRightPadding
- _updateAccessoryImage
- _needsAccessoryImage
- _accessoryImage
- _batteryYOffsetWithBackground:
@end
