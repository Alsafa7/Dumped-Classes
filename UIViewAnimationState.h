@interface UIViewAnimationState : NSObject
{
	id _nextState;
	id _animationID;
	pointer _context;
	id _delegate;
	double _duration;
	double _delay;
	double _frameInterval;
	double _start;
	long long _curve;
	float _repeatCount;
	long long _transition;
	id _transitionView;
	int _filter;
	id _filterView;
	float _filterValue;
	SEL _willStartSelector;
	SEL _didEndSelector;
	int _didEndCount;
	struct _position;
	bit[1] _willStartSent;
	bit[1] _useCurrentLayerState;
	bit[1] _cacheTransition;
	bit[1] _autoreverses;
	bit[1] _roundsToInteger;
	bit[1] _layoutSubviews;
	id _trackedAnimations;
	id _uuid;
	id _animationFactory;
	id _customCurve;
	BOOL _animationFactoryMakesPerAnimationCustomCurves;
	id _alongsideAnimations;
	id _addedCompletions;
	BOOL _animationDidStopSent;
	BOOL _allowUserInteractionToCutOffEndOfAnimation;
	BOOL _retainedSelf;
}

+ dealloc
+ init
+ _acceptEarlyAnimationCutoff:
+ _setAlongsideAnimations:
+ _addAnimationStateForTracking:
+ pop
+ sendDelegateAnimationDidStop:finished:
+ _defaultAnimationForKey:
+ prepareAction:forLayer:forKey:
+ setAnimationAttributes:correctZeroDuration:skipDelegateAssignment:customCurve:
+ _trackAnimation:forProperty:inLayer:
+ setupCustomTimingCurve
+ _runAlongsideAnimations
+ setAnimationAttributes:correctZeroDuration:skipDelegateAssignment:
+ setAnimationAttributes:
+ animationDidStop:finished:
+ _removeAnimationStateFromTrackingMap:disableTrackingIfNeeded:
+ _allowsUserInteraction
+ _allowsUserInteractionToCutOffEndOfAnimation
+ _trackedAnimations
+ actionForLayer:forKey:forView:
+ setupWithDuration:delay:view:options:factory:parentState:start:completion:
+ animationDidStart:
+ _removeAnimationStateFromTrackingMap:
- dealloc
- init
- _acceptEarlyAnimationCutoff:
- _setAlongsideAnimations:
- _addAnimationStateForTracking:
- pop
- sendDelegateAnimationDidStop:finished:
- _defaultAnimationForKey:
- prepareAction:forLayer:forKey:
- setAnimationAttributes:correctZeroDuration:skipDelegateAssignment:customCurve:
- _trackAnimation:forProperty:inLayer:
- setupCustomTimingCurve
- _runAlongsideAnimations
- setAnimationAttributes:correctZeroDuration:skipDelegateAssignment:
- setAnimationAttributes:
- animationDidStop:finished:
- _removeAnimationStateFromTrackingMap:disableTrackingIfNeeded:
- _allowsUserInteraction
- _allowsUserInteractionToCutOffEndOfAnimation
- _trackedAnimations
- actionForLayer:forKey:forView:
- setupWithDuration:delay:view:options:factory:parentState:start:completion:
- animationDidStart:
- _removeAnimationStateFromTrackingMap:
@end
