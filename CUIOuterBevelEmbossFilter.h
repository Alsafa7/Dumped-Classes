@interface CUIOuterBevelEmbossFilter : CIFilter
{
	id inputImage;
	id inputRadius;
	id inputSize;
	id inputSoften;
	id inputAngle;
	id inputHighlightColor;
	id inputShadowColor;
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
+ setInputSize:
+ inputSize
+ setInputSoften:
+ setInputHighlightColor:
+ setInputShadowColor:
+ _kernelC
+ inputSoften
+ inputHighlightColor
+ inputShadowColor
- setDefaults
- outputImage
- inputImage
- setInputImage:
- _kernel
- setInputAngle:
- inputAngle
- setInputRadius:
- inputRadius
- setInputSize:
- inputSize
- setInputSoften:
- setInputHighlightColor:
- setInputShadowColor:
- _kernelC
- inputSoften
- inputHighlightColor
- inputShadowColor
@end
