@interface TIKeyboardLayoutState : NSObject
{
	BOOL _hasCandidateKey;
	BOOL _hasAccentKey;
	BOOL _canMultitap;
	BOOL _isAlphabeticPlane;
	BOOL _interfaceIdiomIsPad;
	id _inputMode;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ description
+ copyWithZone:
+ setInputMode:
+ setHasCandidateKey:
+ hasAccentKey
+ setHasAccentKey:
+ canMultitap
+ setCanMultitap:
+ isAlphabeticPlane
+ setIsAlphabeticPlane:
+ setInterfaceIdiomIsPad:
+ hasCandidateKey
+ inputMode
+ interfaceIdiomIsPad
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- description
- copyWithZone:
- setInputMode:
- setHasCandidateKey:
- hasAccentKey
- setHasAccentKey:
- canMultitap
- setCanMultitap:
- isAlphabeticPlane
- setIsAlphabeticPlane:
- setInterfaceIdiomIsPad:
- hasCandidateKey
- inputMode
- interfaceIdiomIsPad
@end
