@interface SBLockScreenBatteryChargingView : UIView
{
	id _batteryContainerView;
	id _batteryBlurView;
	id _batteryFillView;
	id _chargePercentLabel;
	id _legibilitySettings;
}

+ setChargePercentage:detailed:
+ batteryVisible
+ setBatteryVisible:
+ _setChargeString:
+ _chargePercentFont
+ _batteryOrigin
+ _chargingTextBaselineOffset
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ legibilitySettings
+ setLegibilitySettings:
- setChargePercentage:detailed:
- batteryVisible
- setBatteryVisible:
- _setChargeString:
- _chargePercentFont
- _batteryOrigin
- _chargingTextBaselineOffset
- initWithFrame:
- dealloc
- layoutSubviews
- legibilitySettings
- setLegibilitySettings:
@end
