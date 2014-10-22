@interface PBKaleidoscopeFilter : PBFilter
{
	BOOL firstTime;
	float _inputAmount;
	float lastInputX;
	float lastInputY;
	float lastInputSize;
	float lastInputDecay;
	float lastInputRotation;
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
+ allowAbsoluteGestures
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
- allowAbsoluteGestures
@end
