@interface CIPinchDistortion : CIFilter
{
	id inputImage;
	id inputCenter;
	id inputRadius;
	id inputScale;
}

+ setDefaults
+ outputImage
+ inputImage
+ setInputImage:
+ setInputRadius:
+ inputRadius
+ setInputCenter:
+ inputCenter
+ setInputScale:
+ computeDOD:scale:
+ _pinchDistortionScaleLT1
+ _pinchDistortionScaleGE1
+ inputScale
- setDefaults
- outputImage
- inputImage
- setInputImage:
- setInputRadius:
- inputRadius
- setInputCenter:
- inputCenter
- setInputScale:
- computeDOD:scale:
- _pinchDistortionScaleLT1
- _pinchDistortionScaleGE1
- inputScale
@end
