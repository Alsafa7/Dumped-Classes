@interface AFVoiceInfo : NSObject
{
	BOOL _isCustom;
	id _languageCode;
	long long _gender;
}

+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ dictionaryRepresentation
+ languageCode
+ initWithLanguageCode:gender:isCustom:
+ setIsCustom:
+ isCustom
+ gender
+ initWithDictionaryRepresentation:
+ setGender:
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- copyWithZone:
- dictionaryRepresentation
- languageCode
- initWithLanguageCode:gender:isCustom:
- setIsCustom:
- isCustom
- gender
- initWithDictionaryRepresentation:
- setGender:
- .cxx_destruct
@end
