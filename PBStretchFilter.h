@interface PBStretchFilter : PBFilter
{
	BOOL firstTime;
	float lastInputX;
	float lastInputY;
	struct inputPoint;
}

+ setDefaults
+ inputPoint
+ setInputPoint:
+ ciFilterName
+ needsWrapMirror
+ applyParametersToCIFilter:extent:
- setDefaults
- inputPoint
- setInputPoint:
- ciFilterName
- needsWrapMirror
- applyParametersToCIFilter:extent:
@end
