@interface _UIGestureRecognizerTransformAnalyzer : NSObject
{
	double _lowPassTranslationMagnitudeDelta;
	double _lowPassScaleDelta;
	double _lowPassRotationDelta;
	double _translationWeight;
	double _pinchingWeight;
	double _rotationWeight;
	int _dominantComponent;
}

+ init
+ reset
+ analyzeTouches:
+ translationWeight
+ setTranslationWeight:
+ pinchingWeight
+ setPinchingWeight:
+ rotationWeight
+ setRotationWeight:
+ dominantComponent
- init
- reset
- analyzeTouches:
- translationWeight
- setTranslationWeight:
- pinchingWeight
- setPinchingWeight:
- rotationWeight
- setRotationWeight:
- dominantComponent
@end
