@interface _UIParallaxMotionEffect : UIMotionEffect
{
	id _group;
	struct _slideMagnitude;
	id _horizontalSlideEffect;
	id _verticalSlideEffect;
	id _tiltEffect;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ description
+ copyWithZone:
+ slideMagnitude
+ setSlideMagnitude:
+ keyPathsAndRelativeValuesForViewerOffset:
+ setRotatingSphereRadius:
+ maximumHorizontalTiltAngle
+ setMaximumHorizontalTiltAngle:
+ maximumVerticalTiltAngle
+ setMaximumVerticalTiltAngle:
+ rotatingSphereRadius
+ horizontalSlideAccelerationBoostFactor
+ verticalSlideAccelerationBoostFactor
+ _updateSlideEffectsWithCurrentSlideMagnitude
+ _keyPathsAndRelativeValuesForPose:
+ _updateGroupMotionEffect
+ _activateTiltEffectIfNecessary
+ setHorizontalSlideAccelerationBoostFactor:
+ setVerticalSlideAccelerationBoostFactor:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- description
- copyWithZone:
- slideMagnitude
- setSlideMagnitude:
- keyPathsAndRelativeValuesForViewerOffset:
- setRotatingSphereRadius:
- maximumHorizontalTiltAngle
- setMaximumHorizontalTiltAngle:
- maximumVerticalTiltAngle
- setMaximumVerticalTiltAngle:
- rotatingSphereRadius
- horizontalSlideAccelerationBoostFactor
- verticalSlideAccelerationBoostFactor
- _updateSlideEffectsWithCurrentSlideMagnitude
- _keyPathsAndRelativeValuesForPose:
- _updateGroupMotionEffect
- _activateTiltEffectIfNecessary
- setHorizontalSlideAccelerationBoostFactor:
- setVerticalSlideAccelerationBoostFactor:
@end
