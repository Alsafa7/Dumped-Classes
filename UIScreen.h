@interface UIScreen : NSObject
{
	id _display;
	struct _bounds;
	double _scale;
	double _horizontalScale;
	long long _userInterfaceIdiom;
	id _capabilities;
	long long _workspaceCapableScreenType;
	id _screenDisablingWindow;
	double _startedPausingWindows;
	id _pausedWindows;
	struct _screenFlags;
	BOOL _wantsSoftwareDimming;
	id _softwareDimmingWindow;
	long long _lastNotifiedBacklightLevel;
}

@end
