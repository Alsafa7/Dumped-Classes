@interface UIViewKeyframeAnimationState : UIViewAnimationState
{
	double _frameDuration;
	double _frameStartTime;
	long long _calculationMode;
	id _keyframeLayers;
	id _keyframeLayersForCurrentKeyFrameDict;
	BOOL _inFrame;
}

+ dealloc
+ init
+ pop
+ actionForLayer:forKey:forView:
+ setupWithDuration:delay:view:options:factory:parentState:start:completion:
+ cleanupTrackedLayers
+ addKeyframeWithRelativeStartTime:relativeDuration:animations:
- dealloc
- init
- pop
- actionForLayer:forKey:forView:
- setupWithDuration:delay:view:options:factory:parentState:start:completion:
- cleanupTrackedLayers
- addKeyframeWithRelativeStartTime:relativeDuration:animations:
@end
