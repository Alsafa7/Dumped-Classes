@interface SBWindowManager : NSObject
{
	id _windowStateMap;
	id _hidingContextMap;
	struct _hideRange;
}

+ setAlpha:forWindow:
+ startHidingWindowsExclusivelyFromLevel:toLevel:forContext:reason:
+ stopHidingWindowsForContext:
+ _takeNoteOfWindow:onScreen:
+ _isHidingWindowLevel:
+ _recomputeHideRangeAndAdjustWindows
+ _isHidingWindows
+ _adjustWindowsForActiveHideRange
+ _captureWindow:
+ _releaseWindow:
+ dumpHidingState
+ dumpKnownWindows
+ init
- setAlpha:forWindow:
- startHidingWindowsExclusivelyFromLevel:toLevel:forContext:reason:
- stopHidingWindowsForContext:
- _takeNoteOfWindow:onScreen:
- _isHidingWindowLevel:
- _recomputeHideRangeAndAdjustWindows
- _isHidingWindows
- _adjustWindowsForActiveHideRange
- _captureWindow:
- _releaseWindow:
- dumpHidingState
- dumpKnownWindows
- init
@end
