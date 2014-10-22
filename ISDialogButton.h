@interface ISDialogButton : NSObject
{
	int _actionType;
	id _parameter;
	id _title;
	long long _urlType;
	id _subtarget;
	id _dictionary;
}

+ dealloc
+ setTitle:
+ dictionary
+ title
+ setDictionary:
+ setActionType:
+ actionType
+ performDefaultActionForDialog:
+ setActionTypeWithString:
+ setParameter:
+ isEqual:superficial:
+ _actionTypeForString:
+ setSubtarget:
+ _urlTypeForString:
+ setUrlType:
+ _accountURLForURL:authenticationContext:
+ _openURLWithRequest:
+ subtarget
+ loadFromDictionary:
+ parameter
+ urlType
- dealloc
- setTitle:
- dictionary
- title
- setDictionary:
- setActionType:
- actionType
- performDefaultActionForDialog:
- setActionTypeWithString:
- setParameter:
- isEqual:superficial:
- _actionTypeForString:
- setSubtarget:
- _urlTypeForString:
- setUrlType:
- _accountURLForURL:authenticationContext:
- _openURLWithRequest:
- subtarget
- loadFromDictionary:
- parameter
- urlType
@end
