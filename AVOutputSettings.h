@interface AVOutputSettings : NSObject
{
	id _outputSettingsDictionary;
}

+ compatibleMediaTypes
+ willYieldCompressedSamples
+ outputSettingsDictionary
+ canFullySpecifyOutputFormatReturningReason:
+ isCodecAvailableOnCurrentSystem
+ initWithOutputSettingsDictionary:exceptionReason:
+ validateUsingOutputSettingsValidator:reason:
+ dealloc
+ init
+ description
+ copyWithZone:
- compatibleMediaTypes
- willYieldCompressedSamples
- outputSettingsDictionary
- canFullySpecifyOutputFormatReturningReason:
- isCodecAvailableOnCurrentSystem
- initWithOutputSettingsDictionary:exceptionReason:
- validateUsingOutputSettingsValidator:reason:
- dealloc
- init
- description
- copyWithZone:
@end
