@interface VolumeControl : NSObject
{
	BOOL _debounce;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _mode;
	id _alwaysHiddenCategories;
	id _lastDisplayedCategory;
	id _lastEventCategory;
	BOOL _hudHandledLastVolumeChange;
	BOOL _euDevice;
	float _euVolumeLimit;
	BOOL _euVolumeLimitEnforced;
	BOOL _lastVolumeChangedWasBlocked;
	BOOL _volumeDownButtonIsDown;
	BOOL _volumeUpButtonIsDown;
}

@end
