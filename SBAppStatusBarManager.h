@interface SBAppStatusBarManager : NSObject
{
	id _disableAlphaChangeAssertions;
	id _windowLevelOverrideReasons;
	id _windowLevelOverrideMap;
	double _defaultWindowLevel;
}

+ hideStatusBar
+ setStatusBarAlpha:
+ _addDisableAppStatusBarAlphaChangesAssertion:
+ _removeDisableAppStatusBarAlphaChangesAssertion:
+ _updateWindowLevel
+ setWindowLevel:forOverrideReason:
+ removeWindowLevelOverrideReason:
+ dealloc
+ init
+ isStatusBarHidden
+ setDefaultWindowLevel:
+ showStatusBar
- hideStatusBar
- setStatusBarAlpha:
- _addDisableAppStatusBarAlphaChangesAssertion:
- _removeDisableAppStatusBarAlphaChangesAssertion:
- _updateWindowLevel
- setWindowLevel:forOverrideReason:
- removeWindowLevelOverrideReason:
- dealloc
- init
- isStatusBarHidden
- setDefaultWindowLevel:
- showStatusBar
@end
