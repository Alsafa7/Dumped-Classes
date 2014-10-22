@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings
{
	id _VTPixelAspectRatioDictionary;
	id _VTCleanApertureDictionary;
}

+ willYieldCompressedSamples
+ pixelBufferAttributes
+ canFullySpecifyOutputFormatReturningReason:
+ isCodecAvailableOnCurrentSystem
+ initWithTrustedPixelBufferAttributes:
+ pixelAspectRatioDictionary
+ cleanApertureDictionary
+ initWithPixelBufferAttributes:exceptionReason:
+ dealloc
+ width
+ height
- willYieldCompressedSamples
- pixelBufferAttributes
- canFullySpecifyOutputFormatReturningReason:
- isCodecAvailableOnCurrentSystem
- initWithTrustedPixelBufferAttributes:
- pixelAspectRatioDictionary
- cleanApertureDictionary
- initWithPixelBufferAttributes:exceptionReason:
- dealloc
- width
- height
@end
