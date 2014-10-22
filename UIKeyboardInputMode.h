@interface UIKeyboardInputMode : UITextInputMode
{
	id primaryLanguage;
	id identifier;
	id softwareLayout;
	id hardwareLayout;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hardwareLayout
+ identifier
+ initWithIdentifier:
+ setIdentifier:
+ primaryLanguage
+ setPrimaryLanguage:
+ setSoftwareLayout:
+ setHardwareLayout:
+ normalizedIdentifierLevels
+ softwareLayout
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hardwareLayout
- identifier
- initWithIdentifier:
- setIdentifier:
- primaryLanguage
- setPrimaryLanguage:
- setSoftwareLayout:
- setHardwareLayout:
- normalizedIdentifierLevels
- softwareLayout
@end
