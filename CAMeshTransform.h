@interface CAMeshTransform : NSObject
{
	pointer _impl;
	usigned long long _normalization;
	long long _subdivisionSteps;
}

+ vertexCount
+ encodeWithCAMLWriter:
+ _data
+ CA_copyRenderValue
+ CA_interpolateValues:::interpolator:
+ meshTransformForLayer:
+ initWithVertexCount:vertices:faceCount:faces:depthNormalization:
+ _initWithMeshTransform:
+ depthNormalization
+ _constructWithData:
+ faceCount
+ faceAtIndex:
+ subdivisionSteps
+ _subdivideToDepth:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ _init
+ copyWithZone:
+ CA_distanceToValue:
+ mutableCopyWithZone:
+ CA_interpolateValue:byFraction:
+ vertexAtIndex:
- vertexCount
- encodeWithCAMLWriter:
- _data
- CA_copyRenderValue
- CA_interpolateValues:::interpolator:
- meshTransformForLayer:
- initWithVertexCount:vertices:faceCount:faces:depthNormalization:
- _initWithMeshTransform:
- depthNormalization
- _constructWithData:
- faceCount
- faceAtIndex:
- subdivisionSteps
- _subdivideToDepth:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- _init
- copyWithZone:
- CA_distanceToValue:
- mutableCopyWithZone:
- CA_interpolateValue:byFraction:
- vertexAtIndex:
@end
