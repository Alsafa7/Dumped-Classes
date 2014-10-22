@interface CNFRegAlias : NSObject
{
	id _alias;
	id _displayName;
	id _account;
}

+ validate
+ alias
+ setAlias:
+ dealloc
+ isEqual:
+ hash
+ description
+ type
+ identifier
+ displayName
+ initWithAccount:alias:
+ validationStatus
+ isPhoneNumberAliasOnPhoneNumberAccount
+ validationErrorReason
+ isLocalPhoneNumberAlias
+ localizedCaseInsensitiveCompare:
+ account
+ setAccount:
+ setDisplayName:
- validate
- alias
- setAlias:
- dealloc
- isEqual:
- hash
- description
- type
- identifier
- displayName
- initWithAccount:alias:
- validationStatus
- isPhoneNumberAliasOnPhoneNumberAccount
- validationErrorReason
- isLocalPhoneNumberAlias
- localizedCaseInsensitiveCompare:
- account
- setAccount:
- setDisplayName:
@end
