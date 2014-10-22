@interface CITwirlDistortion : CIFilter
{
	id inputImage;
	id inputCenter;
	id inputRadius;
	id inputAngle;
}

+ setDefaults
+ outputImage
+ inputImage
+ setInputImage:
+ _kernel
+ setInputAngle:
+ inputAngle
+ setInputRadius:
+ inputRadius
+ setInputCenter:
+ inputCenter
- setDefaults
- outputImage
- inputImage
- setInputImage:
- _kernel
- setInputAngle:
- inputAngle
- setInputRadius:
- inputRadius
- setInputCenter:
- inputCenter
@end
