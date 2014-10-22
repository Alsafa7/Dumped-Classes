@interface SBLockScreenBatteryChargingViewController : UIViewController
{
	id _chargingView;
	id _visibilityTimer;
	BOOL _displayDetailedCharge;
	long long _chargePercentage;
	id _delegate;
}

@end
