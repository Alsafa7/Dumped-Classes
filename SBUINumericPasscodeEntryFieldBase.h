@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField
{
	id _numericTrimmingSet;
	usigned long long _maxNumbersAllowed;
	BOOL _allowsNewlineAcceptance;
	BOOL _autoAcceptWhenMaxNumbersMet;
}

+ dealloc
+ resignFirstResponder
+ initWithDefaultSize
+ setMaxNumbersAllowed:
+ _appendString:
+ _deleteLastCharacter
+ setAllowsNewlineAcceptance:
+ setAutoAcceptWhenMaxNumbersMet:
+ shouldInsertPasscodeText:
+ _hasMaxDigitsSpecified
+ _reallyAppendString:
+ allowsNewlineAcceptance
+ maxNumbersAllowed
+ autoAcceptWhenMaxNumbersMet
- dealloc
- resignFirstResponder
- initWithDefaultSize
- setMaxNumbersAllowed:
- _appendString:
- _deleteLastCharacter
- setAllowsNewlineAcceptance:
- setAutoAcceptWhenMaxNumbersMet:
- shouldInsertPasscodeText:
- _hasMaxDigitsSpecified
- _reallyAppendString:
- allowsNewlineAcceptance
- maxNumbersAllowed
- autoAcceptWhenMaxNumbersMet
@end
