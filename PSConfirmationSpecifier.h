@interface PSConfirmationSpecifier : PSSpecifier
{
	id _title;
	id _prompt;
	id _okButton;
	id _cancelButton;
}

+ isDestructive
+ dealloc
+ setTitle:
+ title
+ prompt
+ setPrompt:
+ cancelButton
+ setCancelButton:
+ okButton
+ setOkButton:
+ setupWithDictionary:
- isDestructive
- dealloc
- setTitle:
- title
- prompt
- setPrompt:
- cancelButton
- setCancelButton:
- okButton
- setOkButton:
- setupWithDictionary:
@end
