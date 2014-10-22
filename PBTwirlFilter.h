@interface PBTwirlFilter : PBFilter
{
	BOOL firstTime;
	float _inputAmount;
	float lastInputX;
	float lastInputY;
	float lastInputAngle;
	float lastInputRadius;
	float inputRotation;
	struct inputPoint;
}

+ setDefaults
+ setInputAmount:
+ inputAmount
+ inputPoint
+ setInputRotation:
+ inputRotation
+ setInputPoint:
+ ciFilterName
+ needsWrapMirror
+ applyParametersToCIFilter:extent:
- setDefaults
- setInputAmount:
- inputAmount
- inputPoint
- setInputRotation:
- inputRotation
- setInputPoint:
- ciFilterName
- needsWrapMirror
- applyParametersToCIFilter:extent:
@end
