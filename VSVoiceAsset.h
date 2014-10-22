@interface VSVoiceAsset : NSObject
{
	BOOL _isInstalled;
	BOOL _isBuiltInVoice;
	id _name;
	id _languages;
	long long _gender;
	long long _footprint;
}

+ initWithCoder:
+ encodeWithCoder:
+ description
+ name
+ dictionaryRepresentation
+ footprint
+ gender
+ initWithName:languages:gender:footprint:isInstalled:
+ initWithDictionaryRepresentation:
+ languages
+ isInstalled
+ isBuiltInVoice
+ setIsBuiltInVoice:
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- description
- name
- dictionaryRepresentation
- footprint
- gender
- initWithName:languages:gender:footprint:isInstalled:
- initWithDictionaryRepresentation:
- languages
- isInstalled
- isBuiltInVoice
- setIsBuiltInVoice:
- .cxx_destruct
@end
