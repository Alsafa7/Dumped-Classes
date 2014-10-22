@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings
{
	id _adaptedVideoCompressionProperties;
	id _VTPixelAspectRatioDictionary;
	id _VTCleanApertureDictionary;
}

+ willYieldCompressedSamples
+ videoCodecType
+ videoEncoderSpecification
+ videoCompressionProperties
+ canFullySpecifyOutputFormatReturningReason:
+ isCodecAvailableOnCurrentSystem
+ initWithTrustedAVVideoSettingsDictionary:
+ pixelAspectRatioDictionary
+ cleanApertureDictionary
+ initWithAVVideoSettingsDictionary:exceptionReason:
+ dealloc
+ width
+ height
- willYieldCompressedSamples
- videoCodecType
- videoEncoderSpecification
- videoCompressionProperties
- canFullySpecifyOutputFormatReturningReason:
- isCodecAvailableOnCurrentSystem
- initWithTrustedAVVideoSettingsDictionary:
- pixelAspectRatioDictionary
- cleanApertureDictionary
- initWithAVVideoSettingsDictionary:exceptionReason:
- dealloc
- width
- height
@end
