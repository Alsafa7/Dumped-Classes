@interface PBSqueezeFilter : PBFilter
{
	float lastInputX;
	float lastInputY;
	float lastInputRadius;
	float lastInputScale;
	float _inputAmount;
	BOOL firstTime;
	struct inputPoint;
}

+ setDefaults
+ setInputAmount:
+ inputAmount
+ inputPoint
+ setInputPoint:
+ ciFilterName
+ needsWrapMirror
+ applyParametersToCIFilter:extent:
- setDefaults
- setInputAmount:
- inputAmount
- inputPoint
- setInputPoint:
- ciFilterName
- needsWrapMirror
- applyParametersToCIFilter:extent:
@end
