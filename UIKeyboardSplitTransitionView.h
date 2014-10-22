@interface UIKeyboardSplitTransitionView : UIView
{
	double _currentProgress;
	double _liftOffProgress;
	double _finishProgress;
	double _finishDuration;
	double _finalTransitionStartTime;
	id _displayLink;
	id _completionBlock;
	struct _startFrame;
	struct _endFrame;
	id _transitionDelegate;
	BOOL _centerFilled;
	BOOL _isRebuilding;
	BOOL _isSplitTranslation;
	id _sliceSet;
}

+ completionBlock
+ initWithFrame:
+ dealloc
+ setFrame:
+ setCompletionBlock:
+ rebuildFromKeyplane:toKeyplane:keyboardType:orientation:
+ updateWithProgress:
+ finishWithProgress:completionBlock:
+ canDisplayTransition
+ rebuildControlKeys:
+ showIntlKey
+ showDictationKey
+ rebuildTransitionForSplitStyleChange:
+ setSplitTransitionDelegate:
+ backgroundLayers
+ shadowLayers
+ topDropShadow
+ centerDropShadow
+ bottomDropShadow
+ outerCenterDropShadow
+ colorsForBackgroundLayer:
+ shouldAllowRubberiness
+ splitTransitionDelegate
+ transitionIsVisible
+ finalizeTransition
+ transitionToFinalState:
+ transformForProgress:
+ defaultKeyboardImage
+ splitKeyboardImage
+ initializeLayers
+ sizeForShadowLayer:
+ rectEnclosingKeyplane:
+ keyImageWithToken:
- completionBlock
- initWithFrame:
- dealloc
- setFrame:
- setCompletionBlock:
- rebuildFromKeyplane:toKeyplane:keyboardType:orientation:
- updateWithProgress:
- finishWithProgress:completionBlock:
- canDisplayTransition
- rebuildControlKeys:
- showIntlKey
- showDictationKey
- rebuildTransitionForSplitStyleChange:
- setSplitTransitionDelegate:
- backgroundLayers
- shadowLayers
- topDropShadow
- centerDropShadow
- bottomDropShadow
- outerCenterDropShadow
- colorsForBackgroundLayer:
- shouldAllowRubberiness
- splitTransitionDelegate
- transitionIsVisible
- finalizeTransition
- transitionToFinalState:
- transformForProgress:
- defaultKeyboardImage
- splitKeyboardImage
- initializeLayers
- sizeForShadowLayer:
- rectEnclosingKeyplane:
- keyImageWithToken:
@end
