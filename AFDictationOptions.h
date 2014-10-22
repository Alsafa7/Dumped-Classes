@interface AFDictationOptions : NSObject
{
	id _applicationName;
	id _applicationVersion;
	id _fieldLabel;
	id _fieldIdentifier;
	id _interactionIdentifier;
	long long _keyboardType;
	id _prefixText;
	id _postfixText;
	id _selectedText;
	long long _returnKeyType;
	id _languageCodeOverride;
}

+ initWithCoder:
+ encodeWithCoder:
+ copyWithZone:
+ keyboardType
+ setKeyboardType:
+ returnKeyType
+ setReturnKeyType:
+ selectedText
+ setApplicationName:
+ setApplicationVersion:
+ setFieldLabel:
+ setFieldIdentifier:
+ setPrefixText:
+ setPostfixText:
+ setSelectedText:
+ prefixText
+ postfixText
+ fieldIdentifier
+ interactionIdentifier
+ setInteractionIdentifier:
+ languageCodeOverride
+ setLanguageCodeOverride:
+ dictationOptionsWithoutTextContext
+ applicationVersion
+ applicationName
+ fieldLabel
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- copyWithZone:
- keyboardType
- setKeyboardType:
- returnKeyType
- setReturnKeyType:
- selectedText
- setApplicationName:
- setApplicationVersion:
- setFieldLabel:
- setFieldIdentifier:
- setPrefixText:
- setPostfixText:
- setSelectedText:
- prefixText
- postfixText
- fieldIdentifier
- interactionIdentifier
- setInteractionIdentifier:
- languageCodeOverride
- setLanguageCodeOverride:
- dictationOptionsWithoutTextContext
- applicationVersion
- applicationName
- fieldLabel
- .cxx_destruct
@end
