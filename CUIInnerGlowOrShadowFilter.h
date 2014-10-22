@interface CUIInnerGlowOrShadowFilter : CIFilter
{
	id inputImage;
	id inputOffset;
	id inputRange;
	id inputRadius;
	id inputColor;
}

+ setDefaults
+ outputImage
+ inputImage
+ setInputImage:
+ _kernel
+ setInputColor:
+ inputColor
+ setInputRadius:
+ inputRadius
+ setInputOffset:
+ setInputRange:
+ inputOffset
+ inputRange
- setDefaults
- outputImage
- inputImage
- setInputImage:
- _kernel
- setInputColor:
- inputColor
- setInputRadius:
- inputRadius
- setInputOffset:
- setInputRange:
- inputOffset
- inputRange
@end
