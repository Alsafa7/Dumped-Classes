@interface PBMirrorFilter : PBFilter
{
	float lastInputX;
	float lastInputY;
	float lastInputAngle;
	BOOL firstTime;
	float inputOrientation;
	struct inputPoint;
}

+ setDefaults
+ inputPoint
+ setInputPoint:
+ ciFilterName
+ needsWrapMirror
+ applyParametersToCIFilter:extent:
+ setInputOrientation:
+ inputOrientation
- setDefaults
- inputPoint
- setInputPoint:
- ciFilterName
- needsWrapMirror
- applyParametersToCIFilter:extent:
- setInputOrientation:
- inputOrientation
@end
