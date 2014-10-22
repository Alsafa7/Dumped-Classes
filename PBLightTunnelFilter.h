@interface PBLightTunnelFilter : PBFilter
{
	BOOL firstTime;
	float _inputAmount;
	float lastInputX;
	float lastInputY;
	float lastInputRadius;
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
